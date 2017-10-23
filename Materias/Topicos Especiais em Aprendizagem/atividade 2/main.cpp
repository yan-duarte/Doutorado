#include <cstdlib>
#include <iostream>
#include <vector>
#include "../matrix.h"

using namespace std;
using namespace tea;

int main(int argc, char** argv) {
	Matrix Matrix;
	vector< vector<double> > X;
	vector< vector<double> > y;
	
	// M�nimo quadrado do BD Height x Shoes size
	X = Matrix.get_base(0, 0);
	y = Matrix.get_base(0, 1);
	
	cout<<"\n*******Height x Shoes size*******\n";
	Matrix.show_matrix(Matrix.pca(X, y), "PCA");


	// M�nimo quadrado do BD Boiling point at the Alps
	X = Matrix.get_base(1, 0);
	y = Matrix.get_base(1, 1);
	
	cout<<"\n\n\n\n*******Boiling point at the Alps*******\n";
	Matrix.show_matrix(Matrix.pca(X, y), "PCA");


	// M�nimo quadrado do BD Books x Grades
	X = Matrix.get_base(2, 0);
	y = Matrix.get_base(2, 1);	
	
	cout<<"\n\n\n\n*******Books x Grades*******\n";
	Matrix.show_matrix(Matrix.pca(X, y), "PCA");


	// M�nimo quadrado do BD US Census
	X = Matrix.get_base(3, 0);
	y = Matrix.get_base(3, 1);
	
	cout<<"\n\n\n\n*******US Census*******\n";
	Matrix.show_matrix(Matrix.pca(X, y), "PCA");

		
	cout<<"\n\n\n";
	system("pause");
	
	return 0;
}
