#include <cstdlib>
#include <iostream>
#include <vector>
#include "../matrix.h"

using namespace std;
using namespace tea;


int main(int argc, char *argv[]){

	Matrix Matrix;

	vector< vector<double> > mat;
	mat = Matrix.new_matrix();
	Matrix.show_matrix(mat, "\n\nMatrix de entrada");

	cout<<"\n\nDeterminante: "<< Matrix.calc_determinante(mat) <<"\n";
	
	vector< vector<double> > transp;
	transp = Matrix.transposta(mat);
	Matrix.show_matrix(transp, "\n\nMatrix transposta");
	
	vector< vector<double> > adjunta;
	adjunta = Matrix.adjunta(mat);
	Matrix.show_matrix(adjunta, "\n\nMatrix adjunta");
	
	vector< vector<double> > multiplicada;
	multiplicada = Matrix.multiplicacao_matrizes(mat, transp);
	Matrix.show_matrix(multiplicada, "\n\nMatrix multiplicada pela transposta");
	
	vector< vector<double> > inversa;
	inversa = Matrix.inversa(mat);
	Matrix.show_matrix(inversa, "\n\nMatrix inversa");	
	
	cout<<"\n\n\n";
	system("pause");
	
	return 0;
}
