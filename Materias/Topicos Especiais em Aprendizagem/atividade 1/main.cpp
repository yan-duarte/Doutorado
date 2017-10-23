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
	
	// Mínimo quadrado do BD Height x Shoes size
	X = Matrix.get_base(0, 0);
	y = Matrix.get_base(0, 1);
	
	cout<<"\n*******Height x Shoes size*******\n";
	Matrix.show_matrix(Matrix.min_quadrado(X, y, false), "Minimo Quadrado");
	Matrix.show_matrix(Matrix.min_quadrado(X, y, true), "\n\nMinimo Quadrado Quadratico");


	// Mínimo quadrado do BD Boiling point at the Alps
	X = Matrix.get_base(1, 0);
	y = Matrix.get_base(1, 1);
	
	cout<<"\n\n\n\n*******Boiling point at the Alps*******\n";
	Matrix.show_matrix(Matrix.min_quadrado(X, y, false), "Minimo Quadrado");
	Matrix.show_matrix(Matrix.min_quadrado(X, y, true), "\n\nMinimo Quadrado Quadratico");


	// Mínimo quadrado do BD Books x Grades
	X = Matrix.get_base(2, 0);
	y = Matrix.get_base(2, 1);	
	
	cout<<"\n\n\n\n*******Books x Grades*******\n";
	Matrix.show_matrix(Matrix.min_quadrado(X, y, false), "Minimo Quadrado");
	cout<<"\n\nNao foi possivel calcular o minimo quadrado.\nApenas matriz de tamanho 2x2 ou 3x3 sao aceitas";


	// Mínimo quadrado do BD US Census
	X = Matrix.get_base(3, 0);
	y = Matrix.get_base(3, 1);
	
	cout<<"\n\n\n\n*******US Census*******\n";
	Matrix.show_matrix(Matrix.min_quadrado(X, y, false), "Mnimo Quadrado");
	Matrix.show_matrix(Matrix.min_quadrado(X, y, true), "\n\nMinimo Quadrado Quadratico");
	
	cout<<"\n\n\n";
	system("pause");
	
	return 0;
}
