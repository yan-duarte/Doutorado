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
//
//	// PCA do BD Height x Shoes size
//	X = Matrix.get_base(0, 0);
//	y = Matrix.get_base(0, 1);
//
//	cout<<"\n*******Height x Shoes size*******\n";
//	Matrix.pca(X, y, true);
//
//	// PCA do BD Boiling point at the Alps
//	X = Matrix.get_base(1, 0);
//	y = Matrix.get_base(1, 1);
//
//	cout<<"\n\n\n\n*******Boiling point at the Alps*******\n";
//	Matrix.pca(X, y, true);
//
//	// PCA do BD Books x Grades
//	X = Matrix.get_base(2, 0);
//	y = Matrix.get_base(2, 1);
//
//	cout<<"\n\n\n\n*******Books x Grades*******\n";
//	Matrix.pca(X, y, true);
//
//	// PCA do BD US Census
//	X = Matrix.get_base(3, 0);
//	y = Matrix.get_base(3, 1);
//
//	cout<<"\n\n\n\n*******US Census*******\n";
//	Matrix.pca(X, y, true);
//
//	// PCA do BD de Exemplo
	X = Matrix.get_base(4, 0);
	y = Matrix.get_base(4, 1);
//
//	cout<<"\n\n\n\n*******Exemplo*******\n";
//	Matrix.pca(X, y, true);

	Matrix.kmeans(X, 3);

	cout<<"\n\n\n";
	system("pause");

	return 0;
}
