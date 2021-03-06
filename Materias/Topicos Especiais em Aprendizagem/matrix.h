#include <cstdlib>
#include <iostream>
#include <math.h>
#include <vector>
#include <time.h>
#include <algorithm>
#include "bases.h"
using namespace std;
using namespace bse;

namespace tea {
	class Matrix {
	 private:
	  		int *set_matrix_size ();
			int check_matrix_size (vector< vector<double> > mat);
		public:
			vector< vector<double> > get_base(int base_num, int x_or_y);
			vector< vector<double> > new_matrix();
			vector< vector<double> > transpose (vector<double> vec);
			vector< vector<double> > transpose (vector< vector<double> > mat);
			vector< vector<double> > adjugate (vector< vector<double> > mat);
			double calc_determinant(vector< vector<double> > mat);
			void show_matrix (vector< vector<double> > mat, string msg);
			vector< vector<double> > matrices_multiplication(vector< vector<double> > mat1, vector< vector<double> > mat2);
			vector< vector<double> > matrices_multiplication(double valor, vector< vector<double> > mat);
			vector< vector<double> > matrices_sum(double valor, vector< vector<double> > mat);
			vector< vector<double> > matrices_sum(vector< vector<double> > mat1, vector< vector<double> > mat2);
			vector< vector<double> > matrices_subtraction(double valor, vector< vector<double> > mat);
			vector<double> matrices_subtraction(double valor, vector<double> vec);
			vector<double> matrices_subtraction(vector<double> vec1, vector<double> vec2);
			vector< vector<double> > inversa(vector< vector<double> > mat);
			vector< vector<double> > min_quadrado(vector< vector<double> > X, vector< vector<double> > y, bool quadratico = false );
			vector< vector<double> > exclude_first_col(vector< vector<double> > mat);
			vector <double> data_mean(vector< vector<double> > X);
			vector <double> data_mean(vector< vector<double> > X, vector< vector<double> > y);
			double all_data_mean(vector< vector<double> > X);
			double all_data_mean(vector< vector<double> > X, vector< vector<double> > y);
			vector< vector<double> > concatenate_col(vector< vector<double> > X, vector< vector<double> > y);
			vector< vector<double> > covariance(vector< vector<double> > x_y, bool minus_mean, vector<double> mean);
			vector <double> autovalores(vector< vector<double> > mat);
			vector< vector<double> > autovetores(vector< vector<double> > mat, vector<double> autovalores);
			void pca(vector< vector<double> > X, vector< vector<double> > y, bool exclude_first_col);
			vector< vector< vector<double> > > get_separated_classes(vector< vector<double> > X, vector< vector<double> > y, int num_classes);
			vector< vector <double> > get_mean_of_classes(vector< vector< vector<double> > > vector_of_class);
			vector< vector <double> > scatter_within_class(vector< vector< vector<double> > > vector_of_class, vector< vector<double> > class_mean);
			vector< vector <double> > scatter_between_class(vector< vector< vector<double> > > vector_of_class, vector< vector<double> > class_mean, vector<double> sample_mean);
			void lda(vector< vector<double> > X, vector< vector<double> > y, bool exclude_first_col, int num_classes);
			void mdf(vector< vector<double> > X, vector< vector<double> > y, bool exclude_first_col, int num_classes);
	};
	
	class Point{
		private:
			int id_point, id_cluster;
			vector<double> values;
			int total_values;
			string name;
		public:
			Point(int id_point, vector<double>& values, string name = "");
			int get_id();
			void set_cluster(int id_cluster);
			int get_cluster();
			double get_value(int index);
			int get_total_values();
			void add_value(double value);
			string get_name();
	};

	class Cluster{
		private:
			int id_cluster;
			vector<double> central_values;
			vector<Point> points;
		public:
			Cluster(int id_cluster, Point point);
			void add_point(Point point);
			bool remove_point(int id_point);
			double get_central_value(int index);
			void set_central_value(int index, double value);
			Point get_point(int index);
			int get_total_points();
			int get_id();
	};

	class KMeans{
		private:
			int K; // number of clusters
			int total_values, total_points, max_iterations;
			vector<Cluster> clusters;
			int get_id_nearest_center(Point point); // return ID of nearest center (uses euclidean distance)
		public:
			KMeans(int K, int total_points, int total_values, int max_iterations);
			void run(vector<Point> & points);
	};

	vector< vector<double> > Matrix::get_base(int base_num, int x_or_y){
		/* 
			This function get a database in base.h file
			To use it, you must inform the base number and if you want to get the X (0) or Y (1).
			For base number we have:
			0 = Height Shoes
			1 = Boiling Alps
			2 = Books Grades
			3 = US Census
			4 = Example from pptx
			5 = Iris Dataset
		*/

		Bases bases;
		if (x_or_y < 0 or x_or_y > 1){
			cout << "Erro: Variavel x_or_y est� errada";
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
					case 5:
						return bases.iris_X();	
					case 6:
						return bases.kmeans_example();
					case 7:
						return bases.seeds_X();
					case 8:
						return bases.lenses_X();
					default:
						cout << "Erro: Vari�vel base_num est� errada";
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
					case 5:
						return bases.iris_y();						
					case 7:
						return bases.seeds_y();
					case 8:
						return bases.lenses_y();
					default:
						cout << "Erro: Vari�vel base_num est� errada";
				}
			}
		}
	}


	int *Matrix::set_matrix_size(){
		/* 
			This functions ask to user the dimension of the new matrix he is creating.
		*/

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
		/* 
			This functions checks if the sent Matrix is a square matrix.
		*/
		int lin = mat.size(),
			col = mat[0].size();

		if (lin != col){
			cout<<"\n\nMatrix nao � quadrada.\n";
			system("pause");
			return 0;
		}

		return 1;
	};


	vector< vector<double> > Matrix::new_matrix (){
		/* 
			This functions creates a new matrix with a informed dimension.
		*/
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

	vector< vector<double> > Matrix::transpose (vector<double> vec){
		/* 
			Receives a vector and transpose is, transforming it to a Matrix.
		*/
		int lin = 1,
			col = vec.size();

	    vector< vector<double> > transp ;

		for(int i = 0; i<col; i++){
		    vector<double> myvector;
		    for(int j = 0; j<lin; j++) {
		        myvector.push_back(vec[i]);
		    }
		    transp.push_back(myvector);
		}

		return transp;
	};

	vector< vector<double> > Matrix::transpose (vector< vector<double> > mat){
		/* 
			Transpose a Matrix.
		*/
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


	vector< vector<double> > Matrix::adjugate (vector< vector<double> > mat){
		/*
			Find the adjugate matrix.
		*/
		this->check_matrix_size(mat);

		int lin = mat.size(),
			col = mat[0].size();

		vector< vector<double> > adjugate ;

		if (lin == 2 && col == 2){
			vector<double> myvector;
			myvector.push_back(mat[1][1]);
			myvector.push_back(-mat[1][0]);
			adjugate.push_back(myvector);

			vector<double> myvector2;
			myvector2.push_back(-mat[0][1]);
			myvector2.push_back(mat[0][0]);
			adjugate.push_back(myvector2);

			return this->transpose(adjugate);
		}

		if (lin == 3 && col == 3){
			for (int i = 0; i<lin; i++){
				vector<double> temp_adjugate;
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
		            	temp_adjugate.push_back(- this->calc_determinant(cofator));
		            } else {
		            	temp_adjugate.push_back(this->calc_determinant(cofator));
					}
				}
            	adjugate.push_back(temp_adjugate);
	        }
	        return this->transpose(adjugate);
		};

		cout << "\n\nError: Erro no calculo da matriz adjunta";
	};


	double Matrix::calc_determinant(vector< vector<double> > mat){
		/*
			Find the determinant of a matrix.
		*/
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
		/*
			Function to display a matrix.
		*/
		cout<<msg;
		for (int i = 0; i < mat.size(); i++){
			cout<<"\n";
		    for (int j = 0; j < mat[i].size(); j++)
        		cout << mat[i][j] << "\t";
        }
	};


	vector< vector<double> > Matrix::matrices_multiplication(vector< vector<double> > mat1, vector< vector<double> > mat2){
		/*
			Multiplies one matrix A by other matrix B.
		*/
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
			cout << "Imposs�vel fazer a multiplica��o com as matrizes fornecidas";
		}
	};


	vector< vector<double> > Matrix::matrices_multiplication(double valor, vector< vector<double> > mat){
		/*
			Multiplies one numeric value A by one matrix B.
		*/
		for(int i = 0; i < mat.size(); ++i)
			for(int j = 0; j < mat[0].size(); ++j)
				mat[i][j] = mat[i][j] * valor;

		return mat;
	};


	vector< vector<double> > Matrix::matrices_sum(double valor, vector< vector<double> > mat){
		/*
			Sum one numeric value A in each matrix B element.
		*/
		for(int i = 0; i < mat.size(); ++i)
			for(int j = 0; j < mat[0].size(); ++j)
				mat[i][j] +=valor;

		return mat;		
	};
	
	vector< vector<double> > Matrix::matrices_sum(vector< vector<double> > mat1, vector< vector<double> > mat2){
		/*
			Sum elements in matrix A with elements in matrix B.
		*/
		for(int i = 0; i < mat1.size(); ++i)
			for(int j = 0; j < mat1[0].size(); ++j)
				mat1[i][j] += mat2[i][j];

		return mat1;
	}

	
	vector<double> Matrix::matrices_subtraction(double valor, vector<double> vec){
		/*
			Subtract one numeric value A in each vector B element.
		*/
		for(int i = 0; i < vec.size(); ++i)
			vec[i] -= valor;

		return vec;		
	};
	
	vector<double> Matrix::matrices_subtraction(vector<double> vec1, vector<double> vec2){
		/*
			Subtract elements in vector A with elements in vector B.
		*/
		for(int i = 0; i < vec1.size(); ++i)
			vec1[i] -= vec2[i];

		return vec1;		
	};	
	
	vector< vector<double> > Matrix::matrices_subtraction(double valor, vector< vector<double> > mat){
		/*
			Subtract one numeric value A in each matrix B element.
		*/
		for(int i = 0; i < mat.size(); ++i)
			for(int j = 0; j < mat[0].size(); ++j)
				mat[i][j] -= valor;

		return mat;		
	};


	vector< vector<double> > Matrix::inversa(vector< vector<double> > mat){
		this->check_matrix_size(mat);

		return this->matrices_multiplication(1/this->calc_determinant(mat),this->adjugate(mat));
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
		inv = this->inversa(this->matrices_multiplication(this->transpose(X), X));

		return this->matrices_multiplication(inv, this->matrices_multiplication(this->transpose(X),y));
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


	vector <double> Matrix::data_mean(vector< vector<double> > X){
		int lin_X = X.size(),
			col_X = X[0].size();

		double sum;
		vector < double > mean;
		for (int j=0; j<col_X; j++){
			sum = 0;
			for (int i=0; i<lin_X; i++)
				sum += X[i][j];
			mean.push_back(sum/lin_X);
		}

		return mean;
	}

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
	
	double Matrix::all_data_mean(vector< vector<double> > X){
		int lin_X = X.size(),
			col_X = X[0].size();

		double sum = 0;
		
		for (int j=0; j<col_X; j++){
			for (int i=0; i<lin_X; i++)
				sum += X[i][j];
		}

		return sum / ( (lin_X*col_X));
	}
	
	double Matrix::all_data_mean(vector< vector<double> > X, vector< vector<double> > y){
		int lin_X = X.size(),
			col_X = X[0].size(),
			lin_Y = y.size(),
			col_Y = y[0].size();

		double sum = 0;
		
		for (int j=0; j<col_X; j++){
			for (int i=0; i<lin_X; i++)
				sum += X[i][j];
		}

		for (int j=0; j<col_Y; j++){
			for (int i=0; i<lin_Y; i++)
				sum += y[i][j];

		}

		return sum / ( (lin_X*col_X) + (lin_Y*col_Y) );
	}	

	vector< vector<double> > Matrix::concatenate_col(vector< vector<double> > X, vector< vector<double> > y){
		int lin_X = X.size(),
			col_X = X[0].size(),
			lin_Y = y.size(),
			col_Y = y[0].size();

		if (lin_X != lin_Y){
			cout << "Erro: N� de linhas das duas matrizes devem ser iguais";
		}

		vector< vector<double> > result (lin_X, vector<double>(col_X+col_Y));

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

	vector< vector<double> > Matrix::covariance(vector< vector<double> > x_y, bool minus_mean, vector<double> mean){
		int lin = x_y.size(),
			col = x_y[0].size();

		vector< vector<double> > result;
		for (int i = 0; i < col; i++){
			vector<double> temp;
	        for (int j = 0; j < col; j++){
            	double sum = 0;
            	for (int k = 0; k<lin; k++){
            		if (minus_mean){
            			sum += (x_y[k][i] - mean[j])*(x_y[k][j] - mean[j]);
					} else {
            			sum += (x_y[k][i])*(x_y[k][j]);
					}
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
		    x1 = 0; //A primeira raiz � sempre real.
		    term1 = (b/3.0);

			if (discrim > 0){
		    	cout<<"\n\nO discriminante eh maior que zero\nRaizes imagin�rias";
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
			vector< vector<double> > result (2,vector<double>(2));

			result[0][0] = 1;
			result[1][0] = -c / (d-autovalores[0]);

			result[0][1] = -b / (a-autovalores[1]);
			result[1][1] = 1;

			return result;
		}

		if (lin == 3 && col == 3){
			double a = mat[0][0], b = mat[0][1], c = mat[0][2],
				   d = mat[1][0], e = mat[1][1], f = mat[1][2],
				   g = mat[2][0], h = mat[2][1], i = mat[2][2];

			vector< vector<double> > result (3,vector<double>(3));


			for (int i=0; i<autovalores.size(); i++){

				result[0][i] = (b*f - c*(e-autovalores[i]))/((e-autovalores[i]) * (a-autovalores[i]) - b*d);
				result[1][i] = (-d*result[0][i] -f) / (e-autovalores[i]);
				result[2][i] = 1;
			}

			return result;
		};

		cout << "\n\nError: Erro no calculo dos autovetores";
	}

	void Matrix::pca(vector< vector<double> > X, vector< vector<double> > y, bool exclude_first_col){

		// Get some data.
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
		vector< vector<double> > covariance = this->covariance(new_x_y, false, new_x_y[0]);

		// Calculate the eigenvectors and eigenvalues of the covariance matrix.
		vector <double> autovalores = this->autovalores(covariance);
		vector< vector <double> > autovetores = this->autovetores(covariance, autovalores);

		cout<<"\nMedias\n";
		for (int i = 0; i<mean_vector.size();i++){
			cout<<mean_vector[i]<<"\t";
		}
		cout<<"\n\n";

		this->show_matrix(covariance, "Matrix de covariancia");

		cout<<"\n\nAutovalores\n";
		for (int i = 0; i<autovalores.size();i++){
			cout<<autovalores[i]<<"\t";
		}
		cout<<"\n\n";

		this->show_matrix(autovetores, "Autovetores");
		cout<<"\n\n";

		this->show_matrix(this->matrices_multiplication(covariance,autovetores), "Matrix de covariancia * Autovetores");
		cout<<"\n\n";

		vector< vector<double> > temp = autovetores;

		for (int i = 0; i<temp.size(); i++){
			for (int j = 0; j<temp[0].size(); j++){
				temp[i][j] *= autovalores[j];
			}
		}

		this->show_matrix(temp, "Autovalores * Autovetores");
	};
	

	vector< vector< vector<double> > >Matrix::get_separated_classes(vector< vector<double> > X, vector< vector<double> > y, int num_classes){
		vector <vector < vector <double > > > result;
		
		for (int i=0; i<num_classes; i++){
			vector < vector <double > > separated_class;
			for (int j=0; j<X.size(); j++){
				if (y[j][0] == i){
					separated_class.push_back(X[j]);
				}
			}
			result.push_back(separated_class);
		}
		
		return result;
	};
		
	vector< vector <double> > Matrix::get_mean_of_classes(vector< vector< vector<double> > > vector_of_class){
		vector< vector <double> > result;
		
		for (int i=0; i<vector_of_class.size(); i++)
			result.push_back(this->data_mean(vector_of_class[i]));

		return result;
	};
	
	vector< vector <double> > Matrix::scatter_within_class(vector< vector< vector<double> > > vector_of_class, vector< vector<double> > class_mean){
		vector< vector <double> > Sw(vector_of_class[0][0].size(), vector<double>(vector_of_class[0][0].size()));
		
		for (int c=0; c<vector_of_class.size(); c++){
			for (int i=0; i<vector_of_class[0].size(); i++){
				
				Sw = this->matrices_sum(
					Sw,
					this->matrices_multiplication(
						this->transpose(this->matrices_subtraction(vector_of_class[c][i], class_mean[c])), 
						this->transpose(this->transpose(this->matrices_subtraction(vector_of_class[c][i], class_mean[c])))
					)
				);
				
			}	
		}
		
		return Sw;
	};
	
	vector< vector<double> > Matrix::scatter_between_class(vector< vector< vector<double> > > vector_of_class, vector< vector<double> > class_mean, vector<double> sample_mean){
		vector< vector <double> > Sb(vector_of_class[0][0].size(), vector<double>(vector_of_class[0][0].size()));
		
		for (int c=0; c<vector_of_class.size(); c++){
			int N = vector_of_class[c].size();
			
			Sb = this->matrices_sum(
				Sb,
				this->matrices_multiplication(
					N, 
					this->matrices_multiplication(
						this->transpose(this->matrices_subtraction(sample_mean, class_mean[c])), 
						this->transpose(this->transpose(this->matrices_subtraction(sample_mean, class_mean[c])))
					)
				)
			);
		}
		
		return Sb;
	};

	void Matrix::lda(vector< vector<double> > X, vector< vector<double> > y, bool exclude_first_col, int num_classes){
		if (exclude_first_col==true)
			X = this->exclude_first_col(X);
			
		vector< vector < vector <double > > > classes_x = this->get_separated_classes(X, y, num_classes);

		vector <double> sample_mean = this->data_mean(X);
		vector< vector <double> > class_mean = this-> get_mean_of_classes(classes_x);
		vector< vector <double> > Sb=this->scatter_between_class(classes_x, class_mean, sample_mean);
		vector< vector <double> > Sw=this->scatter_within_class(classes_x, class_mean);
		
		vector <double> autovalores = this->autovalores(this->matrices_multiplication(this->inversa(Sw),Sb));
		vector< vector <double> > autovetores = this->autovetores(this->matrices_multiplication(this->inversa(Sw),Sb), autovalores);
	
		this->show_matrix(Sw, "Sw");
		cout<<"\n\n\n";
		
		this->show_matrix(this->inversa(Sw), "Sw^-1");
		cout<<"\n\n\n";
		
		this->show_matrix(Sb, "Sb");
		cout<<"\n\n\n";
	
		cout<<"Autovalores\n";
		for (int i = 0; i<autovalores.size();i++){
			cout<<autovalores[i]<<"\t";
		}
		cout<<"\n\n\n";

		this->show_matrix(autovetores, "Autovetores");
		cout<<"\n\n\n";

		this->show_matrix(this->matrices_multiplication(this->matrices_multiplication(this->inversa(Sw),Sb),autovetores), "(Sw^-1*Sb) * Autovetores");
		cout<<"\n\n\n";

		vector< vector<double> > temp = autovetores;

		for (int i = 0; i<temp.size(); i++){
			for (int j = 0; j<temp[0].size(); j++){
				temp[i][j] *= autovalores[j];
			}
		}

		this->show_matrix(temp, "Autovalores * Autovetores");
	};
	
	void Matrix::mdf(vector< vector<double> > X, vector< vector<double> > y, bool exclude_first_col, int num_classes){
		if (exclude_first_col==true)
			X = this->exclude_first_col(X);
			
		vector< vector < vector <double > > > classes_x = this->get_separated_classes(X, y, num_classes);

		vector <double> sample_mean = this->data_mean(X);
		vector< vector <double> > class_mean = this-> get_mean_of_classes(classes_x);
		vector< vector <double> > Sb=this->scatter_between_class(classes_x, class_mean, sample_mean);
		vector< vector <double> > Sw=this->scatter_within_class(classes_x, class_mean);
		
		
		
		int lin = X.size(),
			col = X[0].size();

		vector< vector<double> > new_X = X;

		// Subtract the mean.
		for (int j=0; j<col; j++)
			for (int i=0; i<lin; i++)
				new_X[i][j] -= sample_mean[j];

		// Calculate the covariance matrix
		vector< vector<double> > covariance = this->covariance(new_X, false, new_X[0]);

		// Calculate the eigenvectors and eigenvalues of the covariance matrix.
		vector <double> autovalores_pca = this->autovalores(covariance);
		vector< vector <double> > autovetores_pca = this->autovetores(covariance, autovalores_pca);
		
		cout<<"\nMedias\n";
		for (int i = 0; i<sample_mean.size();i++){
			cout<<sample_mean[i]<<"\t";
		}
		cout<<"\n\n\n";

		this->show_matrix(class_mean, "Medias das classes");
		cout<<"\n\n\n";
		
		this->show_matrix(covariance, "Matrix de covariancia");

		cout<<"\n\n\nAutovalores PCA\n";
		for (int i = 0; i<autovalores_pca.size();i++){
			cout<<autovalores_pca[i]<<"\t";
		}
		cout<<"\n\n\n";

		this->show_matrix(autovetores_pca, "Autovetores PCA");
		cout<<"\n\n\n";

		this->show_matrix(this->matrices_multiplication(covariance,autovetores_pca), "Matrix de covariancia * Autovetores PCA");
		cout<<"\n\n\n";

		vector< vector<double> > temp = autovetores_pca;

		for (int i = 0; i<temp.size(); i++){
			for (int j = 0; j<temp[0].size(); j++){
				temp[i][j] *= autovalores_pca[j];
			}
		}

		this->show_matrix(temp, "Autovalores * Autovetores PCA");
		cout<<"\n\n\n";
		
		vector <double> autovalores_lda = this->autovalores(this->matrices_multiplication(this->inversa(Sw),Sb));
		vector< vector <double> > autovetores_lda = this->autovetores(this->matrices_multiplication(this->inversa(Sw),Sb), autovalores_lda);
		
		this->show_matrix(Sw, "Sw");
		cout<<"\n\n\n";
		
		this->show_matrix(this->inversa(Sw), "Sw^-1");
		cout<<"\n\n\n";
		
		this->show_matrix(Sb, "Sb");
		cout<<"\n\n\n";
	
		cout<<"Autovalores LDA\n";
		for (int i = 0; i<autovalores_lda.size();i++){
			cout<<autovalores_lda[i]<<"\t";
		}
		cout<<"\n\n\n";

		this->show_matrix(autovetores_lda, "Autovetores LDA");
		cout<<"\n\n\n";

		vector< vector <double> > temp_mdf;
		
		temp_mdf = this->matrices_multiplication(
			this->inversa( this->matrices_multiplication(this->matrices_multiplication(this->transpose(autovetores_pca),Sw),autovetores_pca)),
			this->matrices_multiplication(this->matrices_multiplication(this->transpose(autovetores_pca),Sb),autovetores_pca)
		);
		
		this->show_matrix(
			temp_mdf, 
			"(P^T * Sw * P)^-1 * (P^T * Sb * P)");
		cout<<"\n\n\n";
	};

	/********************************************************************
	 *                     POINT class functions                        *
	 ********************************************************************/
	Point::Point(int id_point, vector<double>& values, string name)	{
		this->id_point = id_point;
		total_values = values.size();

		for(int i = 0; i < total_values; i++)
			this->values.push_back(values[i]);

		this->name = name;
		id_cluster = -1;
	};

	int Point::get_id()	{
		return id_point;
	};

	void Point::set_cluster(int id_cluster)	{
		this->id_cluster = id_cluster;
	};

	int Point::get_cluster()	{
		return id_cluster;
	};

	double Point::get_value(int index)	{
		return values[index];
	};

	int Point::get_total_values()	{
		return total_values;
	};

	void Point::add_value(double value)	{
		values.push_back(value);
	};

	string Point::get_name()	{
		return name;
	};


	/********************************************************************
	 *                    CLUSTER class functions                       *
	 ********************************************************************/
	Cluster::Cluster(int id_cluster, Point point){
		this->id_cluster = id_cluster;

		int total_values = point.get_total_values();

		for(int i = 0; i < total_values; i++)
			central_values.push_back(point.get_value(i));

		points.push_back(point);
	};

	void Cluster::add_point(Point point){
		points.push_back(point);
	};

	bool Cluster::remove_point(int id_point){
		int total_points = points.size();

		for(int i = 0; i < total_points; i++){
			if(points[i].get_id() == id_point){
				points.erase(points.begin() + i);
				return true;
			}
		}
		return false;
	};
	
	double Cluster::get_central_value(int index){
		return central_values[index];
	};

	void Cluster::set_central_value(int index, double value){
		central_values[index] = value;
	};

	Point Cluster::get_point(int index){
		return points[index];
	};

	int Cluster::get_total_points(){
		return points.size();
	};

	int Cluster::get_id(){
		return id_cluster;
	};

	/********************************************************************
	 *                     KMEANS class functions                       *
	 ********************************************************************/
	int KMeans::get_id_nearest_center(Point point){
		double sum = 0.0, min_dist;
		int id_cluster_center = 0;

		for(int i = 0; i < total_values; i++){
			sum += pow(clusters[0].get_central_value(i) -
					   point.get_value(i), 2.0);
		}

		min_dist = sqrt(sum);

		for(int i = 1; i < K; i++){
			double dist;
			sum = 0.0;

			for(int j = 0; j < total_values; j++)
				sum += pow(clusters[i].get_central_value(j) - point.get_value(j), 2.0);

			dist = sqrt(sum);

			if(dist < min_dist){
				min_dist = dist;
				id_cluster_center = i;
			}
		}

		return id_cluster_center;
	};


	KMeans::KMeans(int K, int total_points, int total_values, int max_iterations){
		this->K = K;
		this->total_points = total_points;
		this->total_values = total_values;
		this->max_iterations = max_iterations;
	};

	void KMeans::run(vector<Point> & points){
		if(K > total_points)
			return;

		vector<int> prohibited_indexes;

		// choose K distinct values for the centers of the clusters
		for(int i = 0; i < K; i++){
			while(true){
				int index_point = rand() % total_points;

				if(find(prohibited_indexes.begin(), prohibited_indexes.end(), index_point) == prohibited_indexes.end()){
					prohibited_indexes.push_back(index_point);
					points[index_point].set_cluster(i);
					Cluster cluster(i, points[index_point]);
					clusters.push_back(cluster);
					break;
				}
			}
		}

		int iter = 1;

		while(true){
			bool done = true;

			// associates each point to the nearest center
			for(int i = 0; i < total_points; i++){
				int id_old_cluster = points[i].get_cluster();
				int id_nearest_center = get_id_nearest_center(points[i]);

				if(id_old_cluster != id_nearest_center){
					if(id_old_cluster != -1)
						clusters[id_old_cluster].remove_point(points[i].get_id());

					points[i].set_cluster(id_nearest_center);
					clusters[id_nearest_center].add_point(points[i]);
					done = false;
				}
			}

			// recalculating the center of each cluster
			for(int i = 0; i < K; i++){
				for(int j = 0; j < total_values; j++){
					int total_points_cluster = clusters[i].get_total_points();
					double sum = 0.0;

					if(total_points_cluster > 0){
						for(int p = 0; p < total_points_cluster; p++)
							sum += clusters[i].get_point(p).get_value(j);
						clusters[i].set_central_value(j, sum / total_points_cluster);
					}
				}
			}

			if(done == true || iter >= max_iterations){
				cout << "Break in iteration " << iter << "\n\n";
				break;
			}

			iter++;
		}

		// shows elements of clusters
		for(int i = 0; i < K; i++){
			int total_points_cluster =  clusters[i].get_total_points();

			cout << "Cluster " << clusters[i].get_id() + 1 << endl;
			for(int j = 0; j < total_points_cluster; j++){
				cout << "Point " << clusters[i].get_point(j).get_id() + 1 << ": ";
				for(int p = 0; p < total_values; p++)
					cout << clusters[i].get_point(j).get_value(p) << " ";

				string point_name = clusters[i].get_point(j).get_name();

				if(point_name != "")
					cout << "- " << point_name;

				cout << endl;
			}

			cout << "Cluster values: ";

			for(int j = 0; j < total_values; j++)
				cout << clusters[i].get_central_value(j) << " ";

			cout << "\n\n";
		}
	};
}
