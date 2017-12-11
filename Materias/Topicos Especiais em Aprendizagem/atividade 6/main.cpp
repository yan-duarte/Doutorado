#include <cstdlib>
#include <iostream>
#include <vector>

#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif


using namespace std;


vector< vector<double> > treino_mau_pagador(){
	vector< vector<double> > result;
	vector<double> temp;

	temp.push_back(0);
	temp.push_back(1);
	temp.push_back(0);
	temp.push_back(2);
	result.push_back(temp);
	temp.clear();

	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(1);
	temp.push_back(1);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(0);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(0);
	temp.push_back(1);
	temp.push_back(1);
	temp.push_back(2);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(1);
	temp.push_back(0);
	temp.push_back(2);
	temp.push_back(1);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(1);
	temp.push_back(0);
	result.push_back(temp);
	temp.clear();

	temp.push_back(0);
	temp.push_back(1);
	temp.push_back(2);
	temp.push_back(2);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(1);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(1);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(1);
	temp.push_back(0);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(1);
	temp.push_back(0);
	temp.push_back(0);
	temp.push_back(1);
	result.push_back(temp);

	return result;
};

vector< double > teste_mau_pagador(){
	vector<double> result;

	result.push_back(0); // CASA PROPRIA  =  NAO (0)
	result.push_back(2); // ESTADO CIVIL  =  DIVORCIADO (2)
	result.push_back(1); // RENDIMENTO    =  MEDIO (1)
	
	return result;
}


vector< vector<double> > treino_celular(){
	vector< vector<double> > result;
	vector<double> temp;

	temp.push_back(1);
	temp.push_back(0);
	result.push_back(temp);
	temp.clear();

	temp.push_back(1);
	temp.push_back(0);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(1);
	temp.push_back(0);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(0);
	temp.push_back(1);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(1);
	temp.push_back(1);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(0);
	temp.push_back(1);
	result.push_back(temp);
	temp.clear();

	temp.push_back(0);
	temp.push_back(1);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(1);
	temp.push_back(1);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(0);
	temp.push_back(0);
	result.push_back(temp);
	temp.clear();
	
	temp.push_back(0);
	temp.push_back(1);
	result.push_back(temp);

	return result;
};

vector< double > teste_celular(){
	vector<double> result;

	result.push_back(1); // LAPTOP  =  MAC (0)

	return result;
}



vector< vector< vector<double> > > ocorrencias(vector< vector<double> > entrada, double classe){

	vector< vector< vector<double> > > result;
	
	for (int j=0; j<entrada[0].size(); j++){
		
		vector< vector<double> > temp;
		for (int i=0; i<entrada.size(); i++){
			if (entrada[i][0] == classe){
			
				bool incluir = true;
			
				for (int k=0; k<temp.size(); k++){
					if (entrada[i][j]==temp[k][0]){
						temp[k][1]++;
						incluir = false;					
					}				
				}
				
				if (incluir == true){
					vector<double> vetor_inclusao;
					
					vetor_inclusao.push_back(entrada[i][j]);
					vetor_inclusao.push_back(1);
					
					temp.push_back(vetor_inclusao);
				}
			}
		}
		result.push_back(temp);
	}
	
	return result;
}

void print_ocorrencias(vector< vector< vector<double> > > ocorrencia){
	for (int i=0; i<ocorrencia.size(); i++){
		for (int j=0; j<ocorrencia[i].size(); j++){
			cout << "Coluna "<<i<<" Num Att "<< j << " Id Att "<< ocorrencia[i][j][0] << " Num Ocorrencias " << ocorrencia[i][j][1] <<"\n\n";
		}	
	}
}


double classificacao(vector< double > teste, vector< vector< vector<double> > > ocorrencia, double total_casos){
	
	double result = ocorrencia[0][0][1] / total_casos;
	for (int i=0; i<teste.size(); i++){
		for (int j=0; j<ocorrencia[i+1].size(); j++){
			if (ocorrencia[i+1][j][0] == teste[i]){
				result *= (ocorrencia[i+1][j][1] / ocorrencia[0][0][1]);
			}
		}
	}
	
	return result;
}


int main(int argc, char** argv) {
	
	vector< vector<double> > mau_pagador = treino_mau_pagador();

	vector< vector< vector<double> > > ocorrencia_mau_pagador_true = ocorrencias(mau_pagador, 1);
	vector< vector< vector<double> > > ocorrencia_mau_pagador_false = ocorrencias(mau_pagador, 0);
	
	// print_ocorrencias(ocorrencia_mau_pagador_true);
	// cout<<"\n\n\n\n";
	// print_ocorrencias(ocorrencia_mau_pagador_false);

	// cout << "Probabilidade Bom Pagador = " << ocorrencia_mau_pagador_false[0][0][1] / (ocorrencia_mau_pagador_false[0][0][1] + ocorrencia_mau_pagador_true[0][0][1]) << 
	// "\n\nProbabilidade Mal Pagador = " << ocorrencia_mau_pagador_true[0][0][1] / (ocorrencia_mau_pagador_false[0][0][1] + ocorrencia_mau_pagador_true[0][0][1]);
	
	vector<double> mau_pagador_teste = teste_mau_pagador();
	
	
	double 
		classific_mau_pagador_true = classificacao(mau_pagador_teste, ocorrencia_mau_pagador_true, (ocorrencia_mau_pagador_false[0][0][1] + ocorrencia_mau_pagador_true[0][0][1])),
		classific_mau_pagador_false = classificacao(mau_pagador_teste, ocorrencia_mau_pagador_false, (ocorrencia_mau_pagador_false[0][0][1] + ocorrencia_mau_pagador_true[0][0][1]));
	
	
	if (classific_mau_pagador_true > classific_mau_pagador_false){
		cout<< "Resultado da classificacao = Mau pagador - True";
	} else {
		cout<< "Resultado da classificacao = Mau pagador - False";
	}
	
	
	vector< vector<double> > celular = treino_celular();

	vector< vector< vector<double> > > ocorrencia_celular_android = ocorrencias(celular, 1);
	vector< vector< vector<double> > > ocorrencia_celular_iphone = ocorrencias(celular, 0);
	
	vector<double> celular_teste = teste_celular();
	
	
	double 
		classific_celular_android = classificacao(celular_teste, ocorrencia_celular_android, (ocorrencia_celular_android[0][0][1] + ocorrencia_celular_iphone[0][0][1])),
		classific_celular_iphone = classificacao(celular_teste, ocorrencia_celular_iphone, (ocorrencia_celular_android[0][0][1] + ocorrencia_celular_iphone[0][0][1]));
	
	
	if (classific_celular_android > classific_celular_iphone){
		cout<< "\nResultado da classificacao = Celular - Android";
	} else {
		cout<< "\nResultado da classificacao = Celular - iPhone";
	}

	cout<<"\n\n\n";
	system("pause");

	return 0;
}
