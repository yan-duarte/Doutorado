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
	
	// Iris dataset PCA / LDA / MDF test.
	X = Matrix.get_base(5, 0);
	y = Matrix.get_base(5, 1);	

	cout<<"\n\n\n\n******* Iris DataSet (Sepal Width | Petal Length | Petal Width) *******\n";
	Matrix.mdf(X, y, true, 3);
		
	system("pause");
	
	return 0;
}
