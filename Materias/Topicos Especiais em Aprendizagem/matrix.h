#include <cstdlib>
#include <iostream>
#include <math.h>
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
			vector< vector<double> > exclude_first_col(vector< vector<double> > mat);
			vector <double> data_mean(vector< vector<double> > X, vector< vector<double> > y);
			vector< vector<double> > concatenate_col(vector< vector<double> > X, vector< vector<double> > y);
			vector< vector<double> > covariance(vector< vector<double> > x_y);
			vector <double> autovalores(vector< vector<double> > mat);
			vector< vector<double> > pca(vector< vector<double> > X, vector< vector<double> > y, bool exclude_first_col);
			vector< vector<double> > autovetores(vector< vector<double> > mat, vector<double> autovalores);
			
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
					case 4:
						return bases.example_X();
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
					case 4:
						return bases.example_y();
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
	
	
	vector< vector<double> > Matrix::exclude_first_col(vector< vector<double> > mat){
		int lin = mat.size(),
			col = mat[0].size();
			
		vector< vector<double> > result;
		
		for (int i = 0; i < lin; i++){
			vector <double> temp;
			for (int j=0; j<col-1; j++){
				temp.push_back(mat[i][j+1]);
			}
			result.push_back(temp);
		}
		
		return result;
	};
	
	
	vector <double> Matrix::data_mean(vector< vector<double> > X, vector< vector<double> > y){
		int lin_X = X.size(),
			col_X = X[0].size(),
			lin_Y = y.size(),
			col_Y = y[0].size();
		
		double sum;
		vector < double > mean;
		for (int j=0; j<col_X; j++){
			sum = 0;
			for (int i=0; i<lin_X; i++)
				sum += X[i][j];
			mean.push_back(sum/lin_X);
		}

		for (int j=0; j<col_Y; j++){
			sum = 0;
			for (int i=0; i<lin_Y; i++)
				sum += y[i][j];
			mean.push_back(sum/lin_Y);
		}
		
		return mean;
	}
	
	vector< vector<double> > Matrix::concatenate_col(vector< vector<double> > X, vector< vector<double> > y){
		int lin_X = X.size(),
			col_X = X[0].size(),
			lin_Y = y.size(),
			col_Y = y[0].size();
			
		if (lin_X != lin_Y){
			cout << "Erro: Nº de linhas das duas matrizes devem ser iguais";
		}
		
		vector< vector<double> > result;
		for (int i = 0; i < lin_X; i++){
			vector<double> temp;
	        for (int j = 0; j < col_X+col_Y; j++){
	            temp.push_back(0);
	        }
	        result.push_back(temp);
	    }
	    
	    for (int j = 0; j < result[0].size(); j++){
	    	for (int i = 0; i < lin_X; i++){
	    		if (j<col_X){
	    			result[i][j] = X[i][j];
				} else {
	    			result[i][j] = y[i][j-col_X];
				}
			}
		}
		
		return result;
	}
	
	vector< vector<double> > Matrix::covariance(vector< vector<double> > x_y){
		int lin = x_y.size(),
			col = x_y[0].size();
		
		vector< vector<double> > result;
		for (int i = 0; i < col; i++){
			vector<double> temp;
	        for (int j = 0; j < col; j++){
            	double sum = 0;
            	for (int k = 0; k<lin; k++){
            		sum += (x_y[k][i])*(x_y[k][j]);
				}
				temp.push_back(sum/(lin-1));
	        }
	        result.push_back(temp);
	    }
	    
	    return result;
 	}
 	
 	vector <double> Matrix::autovalores(vector< vector<double> > mat){
		this->check_matrix_size(mat);
		
		int lin = mat.size(), 
			col = mat[0].size();
		
		if (lin == 2 && col == 2){
			double a = 1,
				b = - (mat[0][0] + mat[1][1]),
				c = mat[0][0]*mat[1][1] - (mat[0][1] * mat[1][0]);
				
			double delta = pow(b,2) - 4*a*c;
			
			vector <double> result;
			
			result.push_back((-b - sqrt(delta))/2*a);
			result.push_back((-b + sqrt(delta))/2*a);
			
			return result;
		}
	
		if (lin == 3 && col == 3){
			// Pego ajuda do site https://goo.gl/KZJRq1
			double a = 1,
				b = - (mat[0][0]+mat[1][1]+mat[2][2]),
				c = (mat[0][0]*mat[1][1]) + (mat[0][0]*mat[2][2]) + (mat[1][1]*mat[2][2]) - (mat[0][2]*mat[2][0]) - (mat[1][2]*mat[2][1]) - (mat[0][1]*mat[1][0]),
				d = - (mat[0][0]*mat[1][1]*mat[2][2]) - (mat[0][1]*mat[1][2]*mat[2][0]) - (mat[0][2]*mat[1][0]*mat[2][1]) + (mat[0][2]*mat[1][1]*mat[2][0]) + (mat[0][0]*mat[1][2]*mat[2][1]) + (mat[0][1]*mat[1][0]*mat[2][2]);
				
			double r, q, s, discrim, dum1 ,term1, r13, t; 
		    double x1, x2, x3; 
		    double x11=0, x22=0, x33=0; 
			
			b /= a; 
		    c /= a; 
		    d /= a; 
		     
		    q = (3*c - (b*b))/9; 
		    r = -(27*d) + b*(9*c - 2*(b*b)); 
		    r /= 54; 
		      
		    discrim = q*q*q + r*r; 
		    x1 = 0; //A primeira raiz é sempre real. 
		    term1 = (b/3.0); 
			
			if (discrim > 0){ 
		    	cout<<"\n\nO discriminante eh maior que zero\nRaizes imaginárias"; 
			} else if (discrim == 0){ 
			   	// Todas as raizes sao reais. 
		       	r13 = (r < 0) ? -cbrt(-r) : cbrt(r); 
		       	x1 = -term1 + 2.0*r13; 
		       	x3 = x2 = -(r13 + term1); 
				
				vector <double> result;

				result.push_back(x1);
				result.push_back(x2);
				result.push_back(x3);
			
				return result;			         
				
			} else if(discrim < 0) {
				// Raizes sao reais e distintas (q < 0) 
			    q = -q; 
			    dum1 = q*q*q; 
			    dum1 = acos(r/sqrt(dum1)); 
			    r13 = 2.0*sqrt(q); 
			    x1 = -term1 + r13*cos(dum1/3.0); 
			    x2 = -term1 + r13*cos((dum1 + 2.0*M_PI)/3.0); 
			    x3 = -term1 + r13*cos((dum1 + 4.0*M_PI)/3.0); 

				vector <double> result;

				result.push_back(x1);
				result.push_back(x2);
				result.push_back(x3);
			
				return result;		
			} 			
		};
		
		cout << "\n\nError: Erro no calculo dos autovalores";
	 }
	 
	vector< vector<double> > Matrix::autovetores(vector< vector<double> > mat, vector<double> autovalores){
		this->check_matrix_size(mat);
		
		int lin = mat.size(), 
			col = mat[0].size();
		
		if (lin == 2 && col == 2){
			double a = mat[0][0], b = mat[0][1], c = mat[1][0], d = mat[1][1];
			
			for (int i = 0; i<autovalores.size(); i++){
				double lambda = autovalores[i];
				
				
				
				double temp = (d + e*y)
			}
		}
	
		if (lin == 3 && col == 3){
					
		};
		
		cout << "\n\nError: Erro no calculo dos autovetores";
	}
	
	vector< vector<double> > Matrix::pca(vector< vector<double> > X, vector< vector<double> > y, bool exclude_first_col){
		
		// 1. Get some data.
		if (exclude_first_col==true)
			X = this->exclude_first_col(X);
			
		vector <double> mean_vector = this->data_mean(X, y);

		vector< vector<double> > x_y = this->concatenate_col(X, y);

		int lin_x_y = x_y.size(),
			col_x_y = x_y[0].size();

		vector< vector<double> > new_x_y= x_y;
		
		// Subtract the mean.
		for (int j=0; j<col_x_y; j++)
			for (int i=0; i<lin_x_y; i++)
				new_x_y[i][j] -= mean_vector[j];

		// Calculate the covariance matrix
		vector< vector<double> > covariance = this->covariance(new_x_y);
		
		// Calculate the eigenvectors and eigenvalues of the covariance matrix.
		vector <double> autovalores = this->autovalores(covariance);
		vector <double> autovetores = this->autovetores(covariance, autovalores);
		
		cout<<"\n\nTESTE\n";
		for (int i = 0; i<autovalores.size();i++){
			cout<<autovalores[i]<<"\t";
		}
		cout<<"\n\n";



		return covariance;



	    
	    
	    
//	    
//	    vector< vector<double> > inv;
//		inv = this->inversa(this->multiplicacao_matrizes(this->transposta(X), X));
//		
//		return this->multiplicacao_matrizes(inv, this->multiplicacao_matrizes(this->transposta(X),y));
	};
	
}
