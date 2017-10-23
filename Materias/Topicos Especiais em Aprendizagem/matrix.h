#include <cstdlib>
#include <iostream>
#include <vector>
#include "bases.h"
using namespace std;
using namespace bse;

namespace tea {
	class Matrix {
	 private:
	  		int *set_matrix_size ();
			int check_matrix_size (vector< vector<double> > mat);
		public:
			vector<vector<double> > get_base(int base_num, int x_or_y);		
			vector<vector<double> > new_matrix();
			vector< vector<double> > transposta (vector< vector<double> > mat);
			vector< vector<double> > adjunta (vector< vector<double> > mat);
			double calc_determinante(vector< vector<double> > mat);
			void show_matrix (vector< vector<double> > mat, string msg);
			vector< vector<double> > multiplicacao_matrizes(vector< vector<double> > mat1, vector< vector<double> > mat2);
			vector< vector<double> > multiplicacao_valor(double valor, vector< vector<double> > mat);
			vector< vector<double> > inversa(vector< vector<double> > mat);
			vector< vector<double> > min_quadrado(vector< vector<double> > X, vector< vector<double> > y, bool quadratico = false );
			vector< vector<double> > pca(vector< vector<double> > X, vector< vector<double> > y);
			
	};
	
	
	vector<vector<double> > Matrix::get_base(int base_num, int x_or_y){
		// base num:
		// 0 = height_shoes
		// 1 = boiling_alps
		// 2 = books_grades
		// 3 = us_census
		// x or y 
		// 0 = X
		// 1 = y
		
		Bases bases;
		if (x_or_y < 0 or x_or_y > 1){
			cout << "Erro: Variavel x_or_y está errada";
		} else {
			if (x_or_y == 0){
				switch (base_num){
					case 0:
						return bases.height_shoes_X();
					case 1:
						return bases.boiling_alps_X();
					case 2:
						return bases.books_grades_X();
					case 3:
						return bases.us_census_X();
					default:
						cout << "Erro: Variável base_num está errada";
				}
			} else {
				switch (base_num){
					case 0:
						return bases.height_shoes_y();
					case 1:
						return bases.boiling_alps_y();
					case 2:
						return bases.books_grades_y();
					case 3:
						return bases.us_census_y();
					default:
						cout << "Erro: Variável base_num está errada";
				}
			}
		}
	}
	
	
	int *Matrix::set_matrix_size(){
		/* Função chamada na 'new_matrix()'. Serve para perguntar ao usuário 
		   qual o tamanho da nova matriz que o mesmo deseja criar */
		   
		int lin, col, *result =new int[2];
	
		cout<<"Entre com o num de linhas:\n";
		cin>>lin;
	
		cout<<"Entre com o num de colunas:\n";
		cin>>col;
	
		if (lin < 1 || col < 1){
			cout<<"Tamanho invalido\n\n";
			system("pause");
			return 0;
		}
		
		result[0] = lin;
		result[1] = col;
		
		return result;
	};
	

	int Matrix::check_matrix_size(vector< vector<double> > mat){
		int lin = mat.size(), 
			col = mat[0].size();
	
		if (lin != col){
			cout<<"\n\nMatrix nao é quadrada.\n";
			system("pause");
			return 0;
		}
	
		return 1;
	};
	
	
	vector< vector<double> > Matrix::new_matrix (){
		int *matrix_size = this->set_matrix_size();
		int i, j, lin, col;
	
		lin = matrix_size[0];
		col = matrix_size[1];	
		
		cout<<"\nEntre com a matriz:\n";
		
		vector< vector<double> > matrix;
		for(int i = 0; i<lin; i++){
		    vector<double> myvector;
		    for(int j = 0; j<col; j++) {
		    	int temp;
		    	cin>>temp;
		        myvector.push_back(temp);
		    }
		    matrix.push_back(myvector);
		}
		
		return matrix;
	};
	
	
	vector< vector<double> > Matrix::transposta (vector< vector<double> > mat){
		int lin = mat.size(), 
			col = mat[0].size();
		
	    vector< vector<double> > transp ;
	
		for(int i = 0; i<col; i++){
		    vector<double> myvector;
		    for(int j = 0; j<lin; j++) {
		        myvector.push_back(mat[j][i]);
		    }
		    transp.push_back(myvector);
		}
		
		return transp;
	};
	
	
	vector< vector<double> > Matrix::adjunta (vector< vector<double> > mat){
		
		this->check_matrix_size(mat);
		
		int lin = mat.size(), 
			col = mat[0].size();
		
		vector< vector<double> > adjunta ;
		
		if (lin == 2 && col == 2){
			vector<double> myvector;
			myvector.push_back(mat[1][1]);
			myvector.push_back(-mat[1][0]);
			adjunta.push_back(myvector);
			
			vector<double> myvector2;
			myvector2.push_back(-mat[0][1]);
			myvector2.push_back(mat[0][0]);
			adjunta.push_back(myvector2);
			
			return this->transposta(adjunta);
		}
	
		if (lin == 3 && col == 3){
			for (int i = 0; i<lin; i++){
				vector<double> temp_adjunta;
	            for (int j = 0; j<col; j++){

	            	vector< vector<double> > cofator;
					cofator.clear();	
					
					int temp_i1 = (i+1)%3, 
						temp_i2 = (i+2)%3,
						temp_j1 = (j+1)%3,
						temp_j2 = (j+2)%3;
					
					if (i == 1){
						temp_i1 = (i+2)%3;
						temp_i2 = (i+1)%3;
					}
					
					if (j == 1){
						temp_j1 = (j+2)%3,
						temp_j2 = (j+1)%3;
					}
					
					vector<double> temp_cofator;
					temp_cofator.push_back(mat[temp_j1][temp_i1]);
					temp_cofator.push_back(mat[temp_j2][temp_i1]);
					cofator.push_back(temp_cofator);
					
					temp_cofator.clear();
					temp_cofator.push_back(mat[temp_j1][temp_i2]);
					temp_cofator.push_back(mat[temp_j2][temp_i2]);
					cofator.push_back(temp_cofator);	        
					
					if ((i==0 && j==1) || (i==1 && j==0) || (i==1 && j==2) || (i==2 && j==1)){
		            	temp_adjunta.push_back(- this->calc_determinante(cofator));
		            } else {
		            	temp_adjunta.push_back(this->calc_determinante(cofator));
					}	            
				}
            	adjunta.push_back(temp_adjunta);
	        }
	        return this->transposta(adjunta);
		};
		
		cout << "\n\nError: Erro no calculo da adjunta";
	};	
	
	
	double Matrix::calc_determinante(vector< vector<double> > mat){
		if (this->check_matrix_size(mat) == 0 ) return 0;
		
		int lin = mat.size(), 
			col = mat[0].size();
		
		if (lin == 1 && col == 1)
			return mat[0][0];
	
		if (lin == 2 && col == 2){
			return (( mat[0][0] * mat[1][1] ) - ( mat[0][1] * mat[1][0] ));
		}
	
		if (lin == 3 && col == 3){
			int det = 0;
			for (int i = 0; i < lin; i++)
				det = det + (mat[0][i] *
					(mat[1][(i+1)%3] * mat[2][(i+2)%3] -
					mat[1][(i+2)%3] * mat[2][(i+1)%3]));
			return det;
		};
		
		cout << "\n\nError: Erro no calculo do determinante";
		
		return 0;
	};
	
	
	void Matrix::show_matrix(vector< vector<double> > mat, string msg){
		cout<<msg;
		for (int i = 0; i < mat.size(); i++){
			cout<<"\n";
		    for (int j = 0; j < mat[i].size(); j++)
        		cout << mat[i][j] << "\t";
        }
	};
	
	
	vector< vector<double> > Matrix::multiplicacao_matrizes(vector< vector<double> > mat1, vector< vector<double> > mat2){
		
		int lin_mat1 = mat1.size(), 
			col_mat1 = mat1[0].size(),
			lin_mat2 = mat2.size(), 
			col_mat2 = mat2[0].size();
		
		if (col_mat1 == lin_mat2){
			
			vector< vector<double> > result;
					
			for(int i = 0; i < lin_mat1; ++i){
				vector<double> myvector;
				for(int j = 0; j < col_mat2; ++j){
					double temp = 0;
					for(int k=0; k<col_mat1; ++k){
						temp += mat1[i][k] * mat2[k][j];
					}
					myvector.push_back(temp);
				}
				result.push_back(myvector);
			}
			return result;
		} else {
			cout << "Impossível fazer a multiplicação com as matrizes fornecidas";
		}
	};
	
	
	vector< vector<double> > Matrix::multiplicacao_valor(double valor, vector< vector<double> > mat){
		for(int i = 0; i < mat.size(); ++i)
			for(int j = 0; j < mat[0].size(); ++j)
				mat[i][j] = mat[i][j] * valor;
				
		return mat;
	};
	
	
	vector< vector<double> > Matrix::inversa(vector< vector<double> > mat){
		this->check_matrix_size(mat);
		
		return this->multiplicacao_valor(1/this->calc_determinante(mat),this->adjunta(mat));
	};
	
	
	vector< vector<double> > Matrix::min_quadrado(vector< vector<double> > X, vector< vector<double> > y, bool quadratico){
		int lin = X.size(), 
			col = X[0].size();		
	    
	    if (quadratico == true){
	    	vector< vector<double> > new_X;
	    	
	    	for (int i = 0; i < lin; i++){
	    		vector<double> temp;
	    		for (int j=0; j <= col; j++){
	    			if (j != col){
	    				temp.push_back(X[i][j]);
					} else {
						temp.push_back(X[i][j-1]*X[i][j-1]);
					}
				}
				new_X.push_back(temp);
			}
	        X.clear();
	        X = new_X;
	    }

	    
	    vector< vector<double> > inv;
		inv = this->inversa(this->multiplicacao_matrizes(this->transposta(X), X));
		
		return this->multiplicacao_matrizes(inv, this->multiplicacao_matrizes(this->transposta(X),y));
	};
	
	
	vector< vector<double> > Matrix::pca(vector< vector<double> > X, vector< vector<double> > y){
		int lin = X.size(),
			col = X[0].size();
	    
	    vector< vector<double> > inv;
		inv = this->inversa(this->multiplicacao_matrizes(this->transposta(X), X));
		
		return this->multiplicacao_matrizes(inv, this->multiplicacao_matrizes(this->transposta(X),y));
	};
	
}
