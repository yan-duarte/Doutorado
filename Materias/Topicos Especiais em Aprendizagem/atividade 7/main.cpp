#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h> 

using namespace std;


void cout_matriz (vector < vector < double > > matriz ){
	for (int i = 0; i<matriz.size(); i++){
		for (int j = 0; j<matriz[0].size(); j++)	cout<<matriz[i][j]<<"\t";
		cout<<"\n";
	}
}


/*
vector < vector < double > > V  : Vetor dos valores dos estados
double theta  :  Valor theta
double gamma  :  Valor gamma
int stop  :  Num de iteracoes 
vector < double > t  :  Vetor de transições
*/
void value_interation(vector < vector < double > > V, double theta, double gamma, int stop, vector < double > t){
	int num_lin = V.size(), num_col = V[0].size();
	int recompensa = -1;
	
	vector < vector < double > > v_anterior = V, v_atual = V;
	double delta = 0;
	double step = 0;
	int temp_index = 1;
	
	do {
		v_anterior = v_atual;
		vector <double> delta_list;
		
		for (int i = 0; i<num_lin; i++){
			for (int j = 0; j<num_col; j++){
				// Primeira e última posição da matriz são os objetivos, não entra no loop de estados.
				if (not (i == 0 && j ==0) && not(i == num_lin-1 && j == num_col-1)){
					double norte, sul, leste, oeste;
					
					norte = (i==0)?         t[0] * (recompensa + (theta * v_anterior[i][j])) : t[0] * (recompensa + (theta * v_anterior[i-1][j]));
					sul   = (i==num_lin-1)? t[1] * (recompensa + (theta * v_anterior[i][j])) : t[1] * (recompensa + (theta * v_anterior[i+1][j]));
					leste = (j==num_col-1)? t[2] * (recompensa + (theta * v_anterior[i][j])) : t[2] * (recompensa + (theta * v_anterior[i][j+1]));
					oeste = (j==0)?         t[3] * (recompensa + (theta * v_anterior[i][j])) : t[3] * (recompensa + (theta * v_anterior[i][j-1]));
					
					v_atual[i][j] = norte + sul + leste + oeste;
					delta_list.push_back(v_anterior[i][j] - v_atual[i][j]);
				}
			}	
		}
		cout.precision(4);
		cout_matriz(v_atual);
		
		delta = *max_element(delta_list.begin(), delta_list.end());
		
		cout<<"\nDelta: "<< delta <<"\n";
		
		step = (stop>0)? step+1 : step-1;
		
		if (v_atual == v_anterior){ 
			// Se o anterior é exatamente igual ao atual, convergiu.
			cout << "\nConvergiu\nNum Passos: "<< temp_index<< "\n";
			break; 
		}
		if (delta < gamma) {
			// Se delta < gamma.
			cout << "\nDelta < que gamma\nNum Passos: "<< temp_index<< "\n";
			break; 
		}
		
		temp_index++;
	} while (step < stop);
}


/*
vector < vector < double > > V  : Vetor dos valores dos estados
double theta  :  Valor theta
double gamma  :  Valor gamma
int stop  :  Num de iteracoes 
vector < double > t  :  Vetor de transições
*/
void policy_interation(vector < vector < double > > V, double theta, double gamma, int stop, vector < double > t){
	int num_lin = V.size(), num_col = V[0].size();
	int recompensa = -1;
	
	vector < vector < double > > v_anterior = V, v_atual = V, v_escolhida = V;
	double delta = 0, delta_escolhida = 100;
	int step = 0, step_geral = 0;
	int temp_index = 1;

	do{

		vector < vector < double > > politica  (num_lin, vector<double>(num_col));
	
		for (int i = 0; i<politica.size(); i++){
			for (int j = 0; j<politica[0].size(); j++){
				// Primeira e última posição da matriz são os objetivos, não entra no loop de estados.
				if (not (i == 0 && j ==0) && not(i == num_lin-1 && j == num_col-1)){
					double random = rand() % 100;
					
					if (random >= 0 && random < 25) politica[i][j] = 0; // Norte
					if (random >= 25 && random < 50) politica[i][j] = 1; // Sul
					if (random >= 50 && random < 75) politica[i][j] = 2; // Leste
					if (random >= 75 && random < 100) politica[i][j] = 3; // Oeste
				}
			}
		}
	
		do {
			v_anterior = v_atual;
			vector <double> delta_list;
			
			for (int i = 0; i<num_lin; i++){
				for (int j = 0; j<num_col; j++){
					// Primeira e última posição da matriz são os objetivos, não entra no loop de estados.
					if (not (i == 0 && j ==0) && not(i == num_lin-1 && j == num_col-1)){
						double norte, sul, leste, oeste;
						
						norte = (i==0)?         (recompensa + (theta * v_anterior[i][j])) : (recompensa + (theta * v_anterior[i-1][j]));
						sul   = (i==num_lin-1)? (recompensa + (theta * v_anterior[i][j])) : (recompensa + (theta * v_anterior[i+1][j]));
						leste = (j==num_col-1)? (recompensa + (theta * v_anterior[i][j])) : (recompensa + (theta * v_anterior[i][j+1]));
						oeste = (j==0)?         (recompensa + (theta * v_anterior[i][j])) : (recompensa + (theta * v_anterior[i][j-1]));
						
						
						if (politica[i][j] == 0 ) v_atual[i][j] = norte;
						if (politica[i][j] == 1 ) v_atual[i][j] = sul;
						if (politica[i][j] == 2 ) v_atual[i][j] = leste;
						if (politica[i][j] == 3 ) v_atual[i][j] = oeste;
						
						delta_list.push_back(v_anterior[i][j] - v_atual[i][j]);
					}
				}	
			}
			cout.precision(4);
			// cout_matriz(v_atual);
			
			delta = *max_element(delta_list.begin(), delta_list.end());
			
			// cout<<"\nDelta: "<< delta <<"\n";
			
			step = (stop>0)? step+1 : step-1;
			
			if (v_atual == v_anterior){ 
				// Se o anterior é exatamente igual ao atual, convergiu.
				cout << "\nConvergiu\nNum Passos: "<< temp_index<< "\n";
				break; 
			}
			if (delta < gamma) {
				// Se delta < gamma.
				cout << "\nDelta < que gamma\nNum Passos: "<< temp_index<< "\n";
				break; 
			}
			
			temp_index++;
		} while (step < stop);

		if (delta > delta_escolhida){
			v_escolhida = v_atual;
			delta_escolhida = delta;
		}

		step_geral = (stop>0)? step_geral+1 : step_geral-1;
	} while (step_geral < stop);
	
	cout<<"\n\n";
	cout_matriz(v_escolhida);
	cout<<"\n\n";
}



int main(int argc, char** argv) {
	srand (time(NULL));
	
	int num_lin = 4, num_col = 4;
	
	vector < vector < double > > V  (num_lin, vector<double>(num_col));
	
	vector < double > transacoes;
	transacoes.push_back(0.25); // Norte
	transacoes.push_back(0.25); // Sul
	transacoes.push_back(0.25); // Leste
	transacoes.push_back(0.25); // Oeste

	
	// value_interation(V, 1, -1, 0, transacoes); // Executa até convergir
	value_interation(V, 1, 0.2, 0, transacoes); // Executa até delta for menor que o terceiro parâmetro (gamma)
	// value_interation(V, 1, -1, 10, transacoes); // Executa o número de passos passados no quarto parâmetro
	
	cout<<"\n\n=========================================\n\n";
	

	// policy_interation(V, 1, -1, 0, transacoes, politica); // Executa até convergir
	// policy_interation(V, 1, 0.2, 0, transacoes, politica); // Executa até delta for menor que o terceiro parâmetro (gamma)
	policy_interation(V, 1, -1, 5000, transacoes); // Executa o número de passos passados no quarto parâmetro
	
	
	cout<<"\n\n";
	return 0;
}
