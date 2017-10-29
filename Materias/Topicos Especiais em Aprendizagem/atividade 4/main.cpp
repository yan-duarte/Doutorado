#include <cstdlib>
#include <iostream>
#include <vector>
#include "../matrix.h"

using namespace std;
using namespace tea;

int main(int argc, char** argv) {
	Matrix Matrix;
	vector< vector<double> > iris_dataset_X = Matrix.get_base(5, 0), 
		iris_dataset_Y = Matrix.get_base(5, 1);
	
	
	int total_points = iris_dataset_X.size(), 
		total_values = iris_dataset_X[0].size(), 
		K = 3, 
		max_iterations = 100;
	
	srand (time(NULL));

	vector<Point> points;
	string point_name;

	for(int i = 0; i < total_points; i++)
	{
		vector<double> values = iris_dataset_X[i];
		
		if (iris_dataset_Y[i][0] == 0)
			point_name = "iris-setosa";
			
		if (iris_dataset_Y[i][0] == 1)
			point_name = "iris-versicolor";
			
		if (iris_dataset_Y[i][0] == 2)
			point_name = "iris-virginica";
		
		Point p(i, values, point_name);
		points.push_back(p);
	}

	KMeans kmeans(K, total_points, total_values, max_iterations);
	kmeans.run(points);

	cout<<"\n\n\n";
	system("pause");

	return 0;
}
