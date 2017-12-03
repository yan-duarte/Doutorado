import math
from random import random
from csv import reader


# Inicializando a Rede
def inicia_rede(num_entradas, num_escondidas, num_saidas):
    rede = list()
    camada_escondida = [{'pesos':[random() for i in range(num_entradas + 1)]} for i in range(num_escondidas)]
    rede.append(camada_escondida)
    camada_saida = [{'pesos':[random() for i in range(num_escondidas + 1)]} for i in range(num_saidas)]
    rede.append(camada_saida)
    return rede


# Calcula a ativação do neurônio para uma entrada
def ativar(pesos, entradas):
    ativacao = pesos[-1]
    for i in range(len(pesos)-1):
        ativacao += pesos[i] * entradas[i]
    return ativacao


# Transferir a ativação do neurônio
def transferir(ativacao):
    return 1.0 / (1.0 + math.exp(-ativacao))


# Forward propagate
def forward_propagate(rede, linha):
    entrada = linha
    for camada in rede:
        nova_entrada = []
        for neuronio in camada:
            ativacao = ativar(neuronio['pesos'], entrada)
            neuronio['saida'] = transferir(ativacao)
            nova_entrada.append(neuronio['saida'])
        entrada = nova_entrada
    return entrada


# Calcula a derivada de uma saída de neurônio
def transferir_derivada(saida):
    return saida * (1.0 - saida)


# Calcura erro do backpropagate e armazena nos neuronios
def backward_propagate_erro(rede, esperado):
    for i in reversed(range(len(rede))):
        camada = rede[i]
        erros = list()
        if i != len(rede)-1:
            for j in range(len(camada)):
                erro = 0.0
                for neuronio in rede[i + 1]:
                    erro += (neuronio['pesos'][j] * neuronio['delta'])
                erros.append(erro)
        else:
            for j in range(len(camada)):
                neuronio = camada[j]
                erros.append(esperado[j] - neuronio['saida'])
        for j in range(len(camada)):
            neuronio = camada[j]
            neuronio['delta'] = erros[j] * transferir_derivada(neuronio['saida'])


# Atualiza pesos da rede com devido erro
def atualiza_pesos(rede, linha, taxa_aprendizado):
    for i in range(len(rede)):
        entradas = linha[:-1]
        if i != 0:
            entradas = [neuronio['saida'] for neuronio in rede[i - 1]]
        for neuronio in rede[i]:
            for j in range(len(entradas)):
                neuronio['pesos'][j] += taxa_aprendizado * neuronio['delta'] * entradas[j]
        neuronio['pesos'][-1] += taxa_aprendizado * neuronio['delta']


# Treine uma rede para um determinado número de épocas
def treinar_rede(rede, treino, taxa_aprendizado, num_epocas, num_saidas):
    for epoca in range(num_epocas):
        soma_erro = 0
        for linha in treino:
            saidas = forward_propagate(rede, linha)
            esperado = [0 for i in range(num_saidas)]
            esperado[linha[-1]] = 1
            soma_erro += sum([(esperado[i]-saidas[i])**2 for i in range(len(esperado))])
            backward_propagate_erro(rede, esperado)
            atualiza_pesos(rede, linha, taxa_aprendizado)
        # print('>epoca=%d, taxa_aprendizado=%.3f, error=%.3f' % (epoca, taxa_aprendizado, soma_erro))


# Faz uma predição com uma rede
def predicao(rede, linha):
    saidas = forward_propagate(rede, linha)
    return saidas.index(max(saidas))


# Backpropagation
def back_propagation(treinamento, teste, taxa_treinamento, num_epoca, num_escondidas):
    num_entradas = len(treinamento[0]) - 1
    num_saidas = len(set([row[-1] for row in treinamento]))
    rede = inicia_rede(num_entradas, num_escondidas, num_saidas)
    treinar_rede(rede, treinamento, taxa_treinamento, num_epoca, num_saidas)
    predicoes = list()
    for row in teste:
        pred = predicao(rede, row)
        predicoes.append(pred)
    return predicoes



# Converte uma coluna de string para float
def str_column_to_float(dataset, coluna):
    for linha in dataset:
        linha[coluna] = float(linha[coluna].strip())


# Converte uma coluna de string para integer (classes)
def str_column_to_int(dataset, coluna):
    class_values = [linha[coluna] for linha in dataset]
    unique = set(class_values)
    lookup = dict()
    for i, valor in enumerate(unique):
        lookup[valor] = i
    for linha in dataset:
        linha[coluna] = lookup[linha[coluna]]
    return lookup


# Carrega arquivo txt
def carregar_txt(arquivo, digito_um, digito_dois):
    dataset = list()
    with open(arquivo, 'r') as file:
        csv_reader = reader(file)
        for linha in csv_reader:
            if not linha:
                continue
            if int(float(linha[0].split(' ')[0])) == digito_um or int(float(linha[0].split(' ')[0])) == digito_dois:
                dataset.append(linha[0].split(' ')[1:-1]+[linha[0].split(' ')[0]])

    for i in range(len(dataset[0])-1):
        str_column_to_float(dataset, i)

    str_column_to_int(dataset, len(dataset[0])-1)

    return dataset


# Calcula porcentagem de acuracia
def acuracia(atual, predito):
    correto = 0
    for i in range(len(atual)):
        if atual[i] == predito[i]:
            correto += 1
    return correto / float(len(atual)) * 100.0
































