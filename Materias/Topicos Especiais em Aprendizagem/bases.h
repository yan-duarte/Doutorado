#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

namespace bse {
	class Bases {
		public:
			vector<vector<double> > height_shoes_X();
			vector<vector<double> > height_shoes_y();
			vector<vector<double> > boiling_alps_X();
			vector<vector<double> > boiling_alps_y();
			vector<vector<double> > books_grades_X();
			vector<vector<double> > books_grades_y();
			vector<vector<double> > us_census_X();
			vector<vector<double> > us_census_y();
			vector<vector<double> > example_X();
			vector<vector<double> > example_y();
			vector<vector<double> > iris_X();
			vector<vector<double> > iris_y();
			vector< vector<double> > kmeans_example();
			vector<vector<double> > seeds_X();
			vector<vector<double> > seeds_y();
			vector< vector<double> > lenses_X();
			vector< vector<double> > lenses_y();
	};

	vector< vector<double> > Bases::height_shoes_X(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(1);
		temp.push_back(69);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(67);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(71);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(65);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(72);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(68);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(74);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(65);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(66);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(72);
		result.push_back(temp);

		return result;
	};

	vector< vector<double> > Bases::height_shoes_y(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(9.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(8.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(11.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(10.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(11);
		result.push_back(temp);
		temp.clear();

		temp.push_back(7.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(12);
		result.push_back(temp);
		temp.clear();

		temp.push_back(7);
		result.push_back(temp);
		temp.clear();

		temp.push_back(7.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(13);
		result.push_back(temp);

		return result;
	};

	vector< vector<double> > Bases::boiling_alps_X(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(1);
		temp.push_back(194.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(194.3);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(197.9);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(198.4);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(199.4);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(199.9);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(200.9);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(201.1);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(201.4);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(201.3);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(203.6);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(204.6);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(209.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(208.6);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(210.7);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(211.9);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(212.2);
		result.push_back(temp);

		return result;
	};

	vector< vector<double> > Bases::boiling_alps_y(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(20.79);
		result.push_back(temp);
		temp.clear();

		temp.push_back(20.79);
		result.push_back(temp);
		temp.clear();

		temp.push_back(22.4);
		result.push_back(temp);
		temp.clear();

		temp.push_back(22.67);
		result.push_back(temp);
		temp.clear();

		temp.push_back(23.15);
		result.push_back(temp);
		temp.clear();

		temp.push_back(23.35);
		result.push_back(temp);
		temp.clear();

		temp.push_back(23.89);
		result.push_back(temp);
		temp.clear();

		temp.push_back(23.99);
		result.push_back(temp);
		temp.clear();

		temp.push_back(24.02);
		result.push_back(temp);
		temp.clear();

		temp.push_back(24.01);
		result.push_back(temp);
		temp.clear();

		temp.push_back(25.14);
		result.push_back(temp);
		temp.clear();

		temp.push_back(26.57);
		result.push_back(temp);
		temp.clear();

		temp.push_back(28.49);
		result.push_back(temp);
		temp.clear();

		temp.push_back(27.76);
		result.push_back(temp);
		temp.clear();

		temp.push_back(29.04);
		result.push_back(temp);
		temp.clear();

		temp.push_back(29.88);
		result.push_back(temp);
		temp.clear();

		temp.push_back(30.06);
		result.push_back(temp);

		return result;
	};

	vector< vector<double> > Bases::books_grades_X(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(1);
		temp.push_back(0);
		temp.push_back(9);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(15);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(0);
		temp.push_back(10);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(16);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(4);
		temp.push_back(10);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(4);
		temp.push_back(20);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(11);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(4);
		temp.push_back(20);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(3);
		temp.push_back(15);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(0);
		temp.push_back(15);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(8);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(13);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(4);
		temp.push_back(18);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(10);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(0);
		temp.push_back(8);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(10);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(3);
		temp.push_back(16);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(0);
		temp.push_back(11);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(19);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(4);
		temp.push_back(12);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(4);
		temp.push_back(11);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(0);
		temp.push_back(19);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(15);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(3);
		temp.push_back(15);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(20);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(0);
		temp.push_back(6);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(3);
		temp.push_back(15);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(3);
		temp.push_back(19);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(14);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(13);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(3);
		temp.push_back(17);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(20);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(11);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(3);
		temp.push_back(20);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(4);
		temp.push_back(20);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(4);
		temp.push_back(20);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(3);
		temp.push_back(9);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(8);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(16);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(0);
		temp.push_back(10);
		result.push_back(temp);

		return result;
	};

	vector< vector<double> > Bases::books_grades_y(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(45);
		result.push_back(temp);
		temp.clear();

		temp.push_back(57);
		result.push_back(temp);
		temp.clear();

		temp.push_back(45);
		result.push_back(temp);
		temp.clear();

		temp.push_back(51);
		result.push_back(temp);
		temp.clear();

		temp.push_back(65);
		result.push_back(temp);
		temp.clear();

		temp.push_back(88);
		result.push_back(temp);
		temp.clear();

		temp.push_back(44);
		result.push_back(temp);
		temp.clear();

		temp.push_back(87);
		result.push_back(temp);
		temp.clear();

		temp.push_back(89);
		result.push_back(temp);
		temp.clear();

		temp.push_back(59);
		result.push_back(temp);
		temp.clear();

		temp.push_back(66);
		result.push_back(temp);
		temp.clear();

		temp.push_back(65);
		result.push_back(temp);
		temp.clear();

		temp.push_back(56);
		result.push_back(temp);
		temp.clear();

		temp.push_back(47);
		result.push_back(temp);
		temp.clear();

		temp.push_back(66);
		result.push_back(temp);
		temp.clear();

		temp.push_back(41);
		result.push_back(temp);
		temp.clear();

		temp.push_back(56);
		result.push_back(temp);
		temp.clear();

		temp.push_back(37);
		result.push_back(temp);
		temp.clear();

		temp.push_back(45);
		result.push_back(temp);
		temp.clear();

		temp.push_back(58);
		result.push_back(temp);
		temp.clear();

		temp.push_back(47);
		result.push_back(temp);
		temp.clear();

		temp.push_back(64);
		result.push_back(temp);
		temp.clear();

		temp.push_back(97);
		result.push_back(temp);
		temp.clear();

		temp.push_back(55);
		result.push_back(temp);
		temp.clear();

		temp.push_back(51);
		result.push_back(temp);
		temp.clear();

		temp.push_back(61);
		result.push_back(temp);
		temp.clear();

		temp.push_back(69);
		result.push_back(temp);
		temp.clear();

		temp.push_back(79);
		result.push_back(temp);
		temp.clear();

		temp.push_back(71);
		result.push_back(temp);
		temp.clear();

		temp.push_back(62);
		result.push_back(temp);
		temp.clear();

		temp.push_back(87);
		result.push_back(temp);
		temp.clear();

		temp.push_back(54);
		result.push_back(temp);
		temp.clear();

		temp.push_back(43);
		result.push_back(temp);
		temp.clear();

		temp.push_back(92);
		result.push_back(temp);
		temp.clear();

		temp.push_back(83);
		result.push_back(temp);
		temp.clear();

		temp.push_back(94);
		result.push_back(temp);
		temp.clear();

		temp.push_back(60);
		result.push_back(temp);
		temp.clear();

		temp.push_back(56);
		result.push_back(temp);
		temp.clear();

		temp.push_back(88);
		result.push_back(temp);
		temp.clear();

		temp.push_back(62);
		result.push_back(temp);

		return result;
	};

	vector< vector<double> > Bases::us_census_X(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(1);
		temp.push_back(1900);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1910);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1920);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1930);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1940);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1950);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1960);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1970);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1980);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1990);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2000);
		result.push_back(temp);

		return result;
	};

	vector< vector<double> > Bases::us_census_y(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(75.9950);
		result.push_back(temp);
		temp.clear();

		temp.push_back(91.9720);
		result.push_back(temp);
		temp.clear();

		temp.push_back(105.7110);
		result.push_back(temp);
		temp.clear();

		temp.push_back(123.2030);
		result.push_back(temp);
		temp.clear();

		temp.push_back(131.6690);
		result.push_back(temp);
		temp.clear();

		temp.push_back(150.6970);
		result.push_back(temp);
		temp.clear();

		temp.push_back(179.3230);
		result.push_back(temp);
		temp.clear();

		temp.push_back(203.2120);
		result.push_back(temp);
		temp.clear();

		temp.push_back(226.5050);
		result.push_back(temp);
		temp.clear();

		temp.push_back(249.6330);
		result.push_back(temp);
		temp.clear();

		temp.push_back(281.4220);
		result.push_back(temp);

		return result;
	};

	vector< vector<double> > Bases::example_X(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(1);
		temp.push_back(2.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(0.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2.2);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1.9);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(3.1);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2.3);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1.1);
		result.push_back(temp);

		return result;
	};

	vector< vector<double> > Bases::example_y(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(2.4);
		result.push_back(temp);
		temp.clear();

		temp.push_back(0.7);
		result.push_back(temp);
		temp.clear();

		temp.push_back(2.9);
		result.push_back(temp);
		temp.clear();

		temp.push_back(2.2);
		result.push_back(temp);
		temp.clear();

		temp.push_back(3.0);
		result.push_back(temp);
		temp.clear();

		temp.push_back(2.7);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1.6);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1.1);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1.6);
		result.push_back(temp);
		temp.clear();

		temp.push_back(0.9);
		result.push_back(temp);

		return result;
	};
	
	
	vector< vector<double> > Bases::iris_X(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(5.1);
		temp.push_back(3.5);
		temp.push_back(1.4);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.9);
		temp.push_back(3.0);
		temp.push_back(1.4);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.7);
		temp.push_back(3.2);
		temp.push_back(1.3);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.6);
		temp.push_back(3.1);
		temp.push_back(1.5);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.0);
		temp.push_back(3.6);
		temp.push_back(1.4);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.4);
		temp.push_back(3.9);
		temp.push_back(1.7);
		temp.push_back(0.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.6);
		temp.push_back(3.4);
		temp.push_back(1.4);
		temp.push_back(0.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.0);
		temp.push_back(3.4);
		temp.push_back(1.5);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.4);
		temp.push_back(2.9);
		temp.push_back(1.4);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.9);
		temp.push_back(3.1);
		temp.push_back(1.5);
		temp.push_back(0.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.4);
		temp.push_back(3.7);
		temp.push_back(1.5);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.8);
		temp.push_back(3.4);
		temp.push_back(1.6);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.8);
		temp.push_back(3.0);
		temp.push_back(1.4);
		temp.push_back(0.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.3);
		temp.push_back(3.0);
		temp.push_back(1.1);
		temp.push_back(0.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.8);
		temp.push_back(4.0);
		temp.push_back(1.2);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.7);
		temp.push_back(4.4);
		temp.push_back(1.5);
		temp.push_back(0.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.4);
		temp.push_back(3.9);
		temp.push_back(1.3);
		temp.push_back(0.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.1);
		temp.push_back(3.5);
		temp.push_back(1.4);
		temp.push_back(0.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.7);
		temp.push_back(3.8);
		temp.push_back(1.7);
		temp.push_back(0.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.1);
		temp.push_back(3.8);
		temp.push_back(1.5);
		temp.push_back(0.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.4);
		temp.push_back(3.4);
		temp.push_back(1.7);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.1);
		temp.push_back(3.7);
		temp.push_back(1.5);
		temp.push_back(0.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.6);
		temp.push_back(3.6);
		temp.push_back(1.0);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.1);
		temp.push_back(3.3);
		temp.push_back(1.7);
		temp.push_back(0.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.8);
		temp.push_back(3.4);
		temp.push_back(1.9);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.0);
		temp.push_back(3.0);
		temp.push_back(1.6);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.0);
		temp.push_back(3.4);
		temp.push_back(1.6);
		temp.push_back(0.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.2);
		temp.push_back(3.5);
		temp.push_back(1.5);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.2);
		temp.push_back(3.4);
		temp.push_back(1.4);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.7);
		temp.push_back(3.2);
		temp.push_back(1.6);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.8);
		temp.push_back(3.1);
		temp.push_back(1.6);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.4);
		temp.push_back(3.4);
		temp.push_back(1.5);
		temp.push_back(0.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.2);
		temp.push_back(4.1);
		temp.push_back(1.5);
		temp.push_back(0.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.5);
		temp.push_back(4.2);
		temp.push_back(1.4);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.9);
		temp.push_back(3.1);
		temp.push_back(1.5);
		temp.push_back(0.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.0);
		temp.push_back(3.2);
		temp.push_back(1.2);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.5);
		temp.push_back(3.5);
		temp.push_back(1.3);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.9);
		temp.push_back(3.1);
		temp.push_back(1.5);
		temp.push_back(0.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.4);
		temp.push_back(3.0);
		temp.push_back(1.3);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.1);
		temp.push_back(3.4);
		temp.push_back(1.5);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.0);
		temp.push_back(3.5);
		temp.push_back(1.3);
		temp.push_back(0.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.5);
		temp.push_back(2.3);
		temp.push_back(1.3);
		temp.push_back(0.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.4);
		temp.push_back(3.2);
		temp.push_back(1.3);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.0);
		temp.push_back(3.5);
		temp.push_back(1.6);
		temp.push_back(0.6);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.1);
		temp.push_back(3.8);
		temp.push_back(1.9);
		temp.push_back(0.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.8);
		temp.push_back(3.0);
		temp.push_back(1.4);
		temp.push_back(0.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.1);
		temp.push_back(3.8);
		temp.push_back(1.6);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.6);
		temp.push_back(3.2);
		temp.push_back(1.4);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.3);
		temp.push_back(3.7);
		temp.push_back(1.5);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.0);
		temp.push_back(3.3);
		temp.push_back(1.4);
		temp.push_back(0.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.0);
		temp.push_back(3.2);
		temp.push_back(4.7);
		temp.push_back(1.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.4);
		temp.push_back(3.2);
		temp.push_back(4.5);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.9);
		temp.push_back(3.1);
		temp.push_back(4.9);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.5);
		temp.push_back(2.3);
		temp.push_back(4.0);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.5);
		temp.push_back(2.8);
		temp.push_back(4.6);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.7);
		temp.push_back(2.8);
		temp.push_back(4.5);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.3);
		temp.push_back(3.3);
		temp.push_back(4.7);
		temp.push_back(1.6);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.9);
		temp.push_back(2.4);
		temp.push_back(3.3);
		temp.push_back(1.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.6);
		temp.push_back(2.9);
		temp.push_back(4.6);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.2);
		temp.push_back(2.7);
		temp.push_back(3.9);
		temp.push_back(1.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.0);
		temp.push_back(2.0);
		temp.push_back(3.5);
		temp.push_back(1.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.9);
		temp.push_back(3.0);
		temp.push_back(4.2);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.0);
		temp.push_back(2.2);
		temp.push_back(4.0);
		temp.push_back(1.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.1);
		temp.push_back(2.9);
		temp.push_back(4.7);
		temp.push_back(1.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.6);
		temp.push_back(2.9);
		temp.push_back(3.6);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.7);
		temp.push_back(3.1);
		temp.push_back(4.4);
		temp.push_back(1.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.6);
		temp.push_back(3.0);
		temp.push_back(4.5);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.8);
		temp.push_back(2.7);
		temp.push_back(4.1);
		temp.push_back(1.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.2);
		temp.push_back(2.2);
		temp.push_back(4.5);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.6);
		temp.push_back(2.5);
		temp.push_back(3.9);
		temp.push_back(1.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.9);
		temp.push_back(3.2);
		temp.push_back(4.8);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.1);
		temp.push_back(2.8);
		temp.push_back(4.0);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.3);
		temp.push_back(2.5);
		temp.push_back(4.9);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.1);
		temp.push_back(2.8);
		temp.push_back(4.7);
		temp.push_back(1.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.4);
		temp.push_back(2.9);
		temp.push_back(4.3);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.6);
		temp.push_back(3.0);
		temp.push_back(4.4);
		temp.push_back(1.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.8);
		temp.push_back(2.8);
		temp.push_back(4.8);
		temp.push_back(1.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.7);
		temp.push_back(3.0);
		temp.push_back(5.0);
		temp.push_back(1.7);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.0);
		temp.push_back(2.9);
		temp.push_back(4.5);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.7);
		temp.push_back(2.6);
		temp.push_back(3.5);
		temp.push_back(1.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.5);
		temp.push_back(2.4);
		temp.push_back(3.8);
		temp.push_back(1.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.5);
		temp.push_back(2.4);
		temp.push_back(3.7);
		temp.push_back(1.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.8);
		temp.push_back(2.7);
		temp.push_back(3.9);
		temp.push_back(1.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.0);
		temp.push_back(2.7);
		temp.push_back(5.1);
		temp.push_back(1.6);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.4);
		temp.push_back(3.0);
		temp.push_back(4.5);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.0);
		temp.push_back(3.4);
		temp.push_back(4.5);
		temp.push_back(1.6);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.7);
		temp.push_back(3.1);
		temp.push_back(4.7);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.3);
		temp.push_back(2.3);
		temp.push_back(4.4);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.6);
		temp.push_back(3.0);
		temp.push_back(4.1);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.5);
		temp.push_back(2.5);
		temp.push_back(4.0);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.5);
		temp.push_back(2.6);
		temp.push_back(4.4);
		temp.push_back(1.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.1);
		temp.push_back(3.0);
		temp.push_back(4.6);
		temp.push_back(1.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.8);
		temp.push_back(2.6);
		temp.push_back(4.0);
		temp.push_back(1.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.0);
		temp.push_back(2.3);
		temp.push_back(3.3);
		temp.push_back(1.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.6);
		temp.push_back(2.7);
		temp.push_back(4.2);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.7);
		temp.push_back(3.0);
		temp.push_back(4.2);
		temp.push_back(1.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.7);
		temp.push_back(2.9);
		temp.push_back(4.2);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.2);
		temp.push_back(2.9);
		temp.push_back(4.3);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.1);
		temp.push_back(2.5);
		temp.push_back(3.0);
		temp.push_back(1.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.7);
		temp.push_back(2.8);
		temp.push_back(4.1);
		temp.push_back(1.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.3);
		temp.push_back(3.3);
		temp.push_back(6.0);
		temp.push_back(2.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.8);
		temp.push_back(2.7);
		temp.push_back(5.1);
		temp.push_back(1.9);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.1);
		temp.push_back(3.0);
		temp.push_back(5.9);
		temp.push_back(2.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.3);
		temp.push_back(2.9);
		temp.push_back(5.6);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.5);
		temp.push_back(3.0);
		temp.push_back(5.8);
		temp.push_back(2.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.6);
		temp.push_back(3.0);
		temp.push_back(6.6);
		temp.push_back(2.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(4.9);
		temp.push_back(2.5);
		temp.push_back(4.5);
		temp.push_back(1.7);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.3);
		temp.push_back(2.9);
		temp.push_back(6.3);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.7);
		temp.push_back(2.5);
		temp.push_back(5.8);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.2);
		temp.push_back(3.6);
		temp.push_back(6.1);
		temp.push_back(2.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.5);
		temp.push_back(3.2);
		temp.push_back(5.1);
		temp.push_back(2.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.4);
		temp.push_back(2.7);
		temp.push_back(5.3);
		temp.push_back(1.9);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.8);
		temp.push_back(3.0);
		temp.push_back(5.5);
		temp.push_back(2.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.7);
		temp.push_back(2.5);
		temp.push_back(5.0);
		temp.push_back(2.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.8);
		temp.push_back(2.8);
		temp.push_back(5.1);
		temp.push_back(2.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.4);
		temp.push_back(3.2);
		temp.push_back(5.3);
		temp.push_back(2.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.5);
		temp.push_back(3.0);
		temp.push_back(5.5);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.7);
		temp.push_back(3.8);
		temp.push_back(6.7);
		temp.push_back(2.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.7);
		temp.push_back(2.6);
		temp.push_back(6.9);
		temp.push_back(2.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.0);
		temp.push_back(2.2);
		temp.push_back(5.0);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.9);
		temp.push_back(3.2);
		temp.push_back(5.7);
		temp.push_back(2.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.6);
		temp.push_back(2.8);
		temp.push_back(4.9);
		temp.push_back(2.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.7);
		temp.push_back(2.8);
		temp.push_back(6.7);
		temp.push_back(2.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.3);
		temp.push_back(2.7);
		temp.push_back(4.9);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.7);
		temp.push_back(3.3);
		temp.push_back(5.7);
		temp.push_back(2.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.2);
		temp.push_back(3.2);
		temp.push_back(6.0);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.2);
		temp.push_back(2.8);
		temp.push_back(4.8);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.1);
		temp.push_back(3.0);
		temp.push_back(4.9);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.4);
		temp.push_back(2.8);
		temp.push_back(5.6);
		temp.push_back(2.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.2);
		temp.push_back(3.0);
		temp.push_back(5.8);
		temp.push_back(1.6);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.4);
		temp.push_back(2.8);
		temp.push_back(6.1);
		temp.push_back(1.9);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.9);
		temp.push_back(3.8);
		temp.push_back(6.4);
		temp.push_back(2.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.4);
		temp.push_back(2.8);
		temp.push_back(5.6);
		temp.push_back(2.2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.3);
		temp.push_back(2.8);
		temp.push_back(5.1);
		temp.push_back(1.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.1);
		temp.push_back(2.6);
		temp.push_back(5.6);
		temp.push_back(1.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(7.7);
		temp.push_back(3.0);
		temp.push_back(6.1);
		temp.push_back(2.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.3);
		temp.push_back(3.4);
		temp.push_back(5.6);
		temp.push_back(2.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.4);
		temp.push_back(3.1);
		temp.push_back(5.5);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.0);
		temp.push_back(3.0);
		temp.push_back(4.8);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.9);
		temp.push_back(3.1);
		temp.push_back(5.4);
		temp.push_back(2.1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.7);
		temp.push_back(3.1);
		temp.push_back(5.6);
		temp.push_back(2.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.9);
		temp.push_back(3.1);
		temp.push_back(5.1);
		temp.push_back(2.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.8);
		temp.push_back(2.7);
		temp.push_back(5.1);
		temp.push_back(1.9);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.8);
		temp.push_back(3.2);
		temp.push_back(5.9);
		temp.push_back(2.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.7);
		temp.push_back(3.3);
		temp.push_back(5.7);
		temp.push_back(2.5);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.7);
		temp.push_back(3.0);
		temp.push_back(5.2);
		temp.push_back(2.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.3);
		temp.push_back(2.5);
		temp.push_back(5.0);
		temp.push_back(1.9);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.5);
		temp.push_back(3.0);
		temp.push_back(5.2);
		temp.push_back(2.0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6.2);
		temp.push_back(3.4);
		temp.push_back(5.4);
		temp.push_back(2.3);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(5.9);
		temp.push_back(3.0);
		temp.push_back(5.1);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();

		return result;
	};
	
	vector< vector<double> > Bases::iris_y(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(0);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();

		return result;
	};	

	vector< vector<double> > Bases::kmeans_example(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(1.9);
		temp.push_back(7.3);
		result.push_back(temp);
		temp.clear();

		temp.push_back(3.4);
		temp.push_back(7.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(2.5);
		temp.push_back(6.8);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1.5);
		temp.push_back(6.5);
		result.push_back(temp);
		temp.clear();

		temp.push_back(3.5);
		temp.push_back(6.4);
		result.push_back(temp);
		temp.clear();

		temp.push_back(2.2);
		temp.push_back(5.8);
		result.push_back(temp);
		temp.clear();

		temp.push_back(3.4);
		temp.push_back(5.2);
		result.push_back(temp);
		temp.clear();

		temp.push_back(3.6);
		temp.push_back(4);
		result.push_back(temp);
		temp.clear();

		temp.push_back(5);
		temp.push_back(3.2);
		result.push_back(temp);
		temp.clear();

		temp.push_back(4.5);
		temp.push_back(2.4);
		result.push_back(temp);
		temp.clear();
		
		temp.push_back(6);
		temp.push_back(2.6);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1.9);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(2.7);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1.9);
		temp.push_back(2.4);
		result.push_back(temp);
		temp.clear();

		temp.push_back(0.8);
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1.6);
		temp.push_back(1.8);
		result.push_back(temp);
		temp.clear();

		temp.push_back(1);
		temp.push_back(1);
		result.push_back(temp);
		
		return result;
	};
	
	/*]
	http://archive.ics.uci.edu/ml/datasets/seeds
	1. area A, 
	2. perimeter P, 
	3. compactness C = 4*pi*A/P^2, 
	4. length of kernel, 
	5. width of kernel, 
	6. asymmetry coefficient 
	7. length of kernel groove.
	*/
	vector< vector<double> > Bases::seeds_X(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(15.26);
		temp.push_back(14.84);
		temp.push_back(0.871);
		temp.push_back(5.763);
		temp.push_back(3.312);
		temp.push_back(2.221);
		temp.push_back(5.220);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.88);
		temp.push_back(14.57);
		temp.push_back(0.8811);
		temp.push_back(5.554);
		temp.push_back(3.333);
		temp.push_back(1.018);
		temp.push_back(4.956);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.29);
		temp.push_back(14.09);
		temp.push_back(0.905);
		temp.push_back(5.291);
		temp.push_back(3.337);
		temp.push_back(2.699);
		temp.push_back(4.825);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.84);
		temp.push_back(13.94);
		temp.push_back(0.8955);
		temp.push_back(5.324);
		temp.push_back(3.379);
		temp.push_back(2.259);
		temp.push_back(4.805);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.14);
		temp.push_back(14.99);
		temp.push_back(0.9034);
		temp.push_back(5.658);
		temp.push_back(3.562);
		temp.push_back(1.355);
		temp.push_back(5.175);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.38);
		temp.push_back(14.21);
		temp.push_back(0.8951);
		temp.push_back(5.386);
		temp.push_back(3.312);
		temp.push_back(2.462);
		temp.push_back(4.956);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.69);
		temp.push_back(14.49);
		temp.push_back(0.8799);
		temp.push_back(5.563);
		temp.push_back(3.259);
		temp.push_back(3.586);
		temp.push_back(5.219);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.11);
		temp.push_back(14.1);
		temp.push_back(0.8911);
		temp.push_back(5.42);
		temp.push_back(3.302);
		temp.push_back(2.700);
		temp.push_back(5.000);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.63);
		temp.push_back(15.46);
		temp.push_back(0.8747);
		temp.push_back(6.053);
		temp.push_back(3.465);
		temp.push_back(2.040);
		temp.push_back(5.877);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.44);
		temp.push_back(15.25);
		temp.push_back(0.888);
		temp.push_back(5.884);
		temp.push_back(3.505);
		temp.push_back(1.969);
		temp.push_back(5.533);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.26);
		temp.push_back(14.85);
		temp.push_back(0.8696);
		temp.push_back(5.714);
		temp.push_back(3.242);
		temp.push_back(4.543);
		temp.push_back(5.314);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.03);
		temp.push_back(14.16);
		temp.push_back(0.8796);
		temp.push_back(5.438);
		temp.push_back(3.201);
		temp.push_back(1.717);
		temp.push_back(5.001);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.89);
		temp.push_back(14.02);
		temp.push_back(0.888);
		temp.push_back(5.439);
		temp.push_back(3.199);
		temp.push_back(3.986);
		temp.push_back(4.738);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.78);
		temp.push_back(14.06);
		temp.push_back(0.8759);
		temp.push_back(5.479);
		temp.push_back(3.156);
		temp.push_back(3.136);
		temp.push_back(4.872);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.74);
		temp.push_back(14.05);
		temp.push_back(0.8744);
		temp.push_back(5.482);
		temp.push_back(3.114);
		temp.push_back(2.932);
		temp.push_back(4.825);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.59);
		temp.push_back(14.28);
		temp.push_back(0.8993);
		temp.push_back(5.351);
		temp.push_back(3.333);
		temp.push_back(4.185);
		temp.push_back(4.781);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.99);
		temp.push_back(13.83);
		temp.push_back(0.9183);
		temp.push_back(5.119);
		temp.push_back(3.383);
		temp.push_back(5.234);
		temp.push_back(4.781);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.69);
		temp.push_back(14.75);
		temp.push_back(0.9058);
		temp.push_back(5.527);
		temp.push_back(3.514);
		temp.push_back(1.599);
		temp.push_back(5.046);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.7);
		temp.push_back(14.21);
		temp.push_back(0.9153);
		temp.push_back(5.205);
		temp.push_back(3.466);
		temp.push_back(1.767);
		temp.push_back(4.649);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.72);
		temp.push_back(13.57);
		temp.push_back(0.8686);
		temp.push_back(5.226);
		temp.push_back(3.049);
		temp.push_back(4.102);
		temp.push_back(4.914);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.16);
		temp.push_back(14.4);
		temp.push_back(0.8584);
		temp.push_back(5.658);
		temp.push_back(3.129);
		temp.push_back(3.072);
		temp.push_back(5.176);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.11);
		temp.push_back(14.26);
		temp.push_back(0.8722);
		temp.push_back(5.52);
		temp.push_back(3.168);
		temp.push_back(2.688);
		temp.push_back(5.219);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.88);
		temp.push_back(14.9);
		temp.push_back(0.8988);
		temp.push_back(5.618);
		temp.push_back(3.507);
		temp.push_back(0.7651);
		temp.push_back(5.091);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.08);
		temp.push_back(13.23);
		temp.push_back(0.8664);
		temp.push_back(5.099);
		temp.push_back(2.936);
		temp.push_back(1.415);
		temp.push_back(4.961);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.01);
		temp.push_back(14.76);
		temp.push_back(0.8657);
		temp.push_back(5.789);
		temp.push_back(3.245);
		temp.push_back(1.791);
		temp.push_back(5.001);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.19);
		temp.push_back(15.16);
		temp.push_back(0.8849);
		temp.push_back(5.833);
		temp.push_back(3.421);
		temp.push_back(0.903);
		temp.push_back(5.307);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.02);
		temp.push_back(13.76);
		temp.push_back(0.8641);
		temp.push_back(5.395);
		temp.push_back(3.026);
		temp.push_back(3.373);
		temp.push_back(4.825);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.74);
		temp.push_back(13.67);
		temp.push_back(0.8564);
		temp.push_back(5.395);
		temp.push_back(2.956);
		temp.push_back(2.504);
		temp.push_back(4.869);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.11);
		temp.push_back(14.18);
		temp.push_back(0.882);
		temp.push_back(5.541);
		temp.push_back(3.221);
		temp.push_back(2.754);
		temp.push_back(5.038);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.45);
		temp.push_back(14.02);
		temp.push_back(0.8604);
		temp.push_back(5.516);
		temp.push_back(3.065);
		temp.push_back(3.531);
		temp.push_back(5.097);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.16);
		temp.push_back(13.82);
		temp.push_back(0.8662);
		temp.push_back(5.454);
		temp.push_back(2.975);
		temp.push_back(0.8551);
		temp.push_back(5.056);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.49);
		temp.push_back(14.94);
		temp.push_back(0.8724);
		temp.push_back(5.757);
		temp.push_back(3.371);
		temp.push_back(3.412);
		temp.push_back(5.228);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.09);
		temp.push_back(14.41);
		temp.push_back(0.8529);
		temp.push_back(5.717);
		temp.push_back(3.186);
		temp.push_back(3.92);
		temp.push_back(5.299);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.94);
		temp.push_back(14.17);
		temp.push_back(0.8728);
		temp.push_back(5.585);
		temp.push_back(3.15);
		temp.push_back(2.124);
		temp.push_back(5.012);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.05);
		temp.push_back(14.68);
		temp.push_back(0.8779);
		temp.push_back(5.712);
		temp.push_back(3.328);
		temp.push_back(2.129);
		temp.push_back(5.36); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.12);
		temp.push_back(15.00);
		temp.push_back(0.9000);
		temp.push_back(5.709);
		temp.push_back(3.485);
		temp.push_back(2.27);
		temp.push_back(5.443);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.2);
		temp.push_back(15.27);
		temp.push_back(0.8734);
		temp.push_back(5.826);
		temp.push_back(3.464);
		temp.push_back(2.823);
		temp.push_back(5.527);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(17.08);
		temp.push_back(15.38);
		temp.push_back(0.9079);
		temp.push_back(5.832);
		temp.push_back(3.683);
		temp.push_back(2.956);
		temp.push_back(5.484);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.8);
		temp.push_back(14.52);
		temp.push_back(0.8823);
		temp.push_back(5.656);
		temp.push_back(3.288);
		temp.push_back(3.112);
		temp.push_back(5.309);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.28);
		temp.push_back(14.17);
		temp.push_back(0.8944);
		temp.push_back(5.397);
		temp.push_back(3.298);
		temp.push_back(6.685);
		temp.push_back(5.001);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.54);
		temp.push_back(13.85);
		temp.push_back(0.8871);
		temp.push_back(5.348);
		temp.push_back(3.156);
		temp.push_back(2.587);
		temp.push_back(5.178);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.5);
		temp.push_back(13.85);
		temp.push_back(0.8852);
		temp.push_back(5.351);
		temp.push_back(3.158);
		temp.push_back(2.249);
		temp.push_back(5.176);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.16);
		temp.push_back(13.55);
		temp.push_back(0.9009);
		temp.push_back(5.138);
		temp.push_back(3.201);
		temp.push_back(2.461);
		temp.push_back(4.783);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.5);
		temp.push_back(14.86);
		temp.push_back(0.882);
		temp.push_back(5.877);
		temp.push_back(3.396);
		temp.push_back(4.711);
		temp.push_back(5.528);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.11);
		temp.push_back(14.54);
		temp.push_back(0.8986);
		temp.push_back(5.579);
		temp.push_back(3.462);
		temp.push_back(3.128);
		temp.push_back(5.18); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.8);
		temp.push_back(14.04);
		temp.push_back(0.8794);
		temp.push_back(5.376);
		temp.push_back(3.155);
		temp.push_back(1.56);
		temp.push_back(4.961);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.36);
		temp.push_back(14.76);
		temp.push_back(0.8861);
		temp.push_back(5.701);
		temp.push_back(3.393);
		temp.push_back(1.367);
		temp.push_back(5.132);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.99);
		temp.push_back(14.56);
		temp.push_back(0.8883);
		temp.push_back(5.57);
		temp.push_back(3.377);
		temp.push_back(2.958);
		temp.push_back(5.175);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.79);
		temp.push_back(14.52);
		temp.push_back(0.8819);
		temp.push_back(5.545);
		temp.push_back(3.291);
		temp.push_back(2.704);
		temp.push_back(5.111);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.86);
		temp.push_back(14.67);
		temp.push_back(0.8676);
		temp.push_back(5.678);
		temp.push_back(3.258);
		temp.push_back(2.129);
		temp.push_back(5.351);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.43);
		temp.push_back(14.4);
		temp.push_back(0.8751);
		temp.push_back(5.585);
		temp.push_back(3.272);
		temp.push_back(3.975);
		temp.push_back(5.144);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.78);
		temp.push_back(14.91);
		temp.push_back(0.8923);
		temp.push_back(5.674);
		temp.push_back(3.434);
		temp.push_back(5.593);
		temp.push_back(5.136);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.49);
		temp.push_back(14.61);
		temp.push_back(0.8538);
		temp.push_back(5.715);
		temp.push_back(3.113);
		temp.push_back(4.116);
		temp.push_back(5.396);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.33);
		temp.push_back(14.28);
		temp.push_back(0.8831);
		temp.push_back(5.504);
		temp.push_back(3.199);
		temp.push_back(3.328);
		temp.push_back(5.224);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.52);
		temp.push_back(14.6);
		temp.push_back(0.8557);
		temp.push_back(5.741);
		temp.push_back(3.113);
		temp.push_back(1.481);
		temp.push_back(5.487);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.03);
		temp.push_back(14.77);
		temp.push_back(0.8658);
		temp.push_back(5.702);
		temp.push_back(3.212);
		temp.push_back(1.933);
		temp.push_back(5.439);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.46);
		temp.push_back(14.35);
		temp.push_back(0.8818);
		temp.push_back(5.388);
		temp.push_back(3.377);
		temp.push_back(2.802);
		temp.push_back(5.044);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.92);
		temp.push_back(14.43);
		temp.push_back(0.9006);
		temp.push_back(5.384);
		temp.push_back(3.412);
		temp.push_back(1.142);
		temp.push_back(5.088);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.38);
		temp.push_back(14.77);
		temp.push_back(0.8857);
		temp.push_back(5.662);
		temp.push_back(3.419);
		temp.push_back(1.999);
		temp.push_back(5.222);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.11);
		temp.push_back(13.47);
		temp.push_back(0.8392);
		temp.push_back(5.159);
		temp.push_back(3.032);
		temp.push_back(1.502);
		temp.push_back(4.519);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.42);
		temp.push_back(12.86);
		temp.push_back(0.8683);
		temp.push_back(5.008);
		temp.push_back(2.85);
		temp.push_back(2.700);
		temp.push_back(4.607);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.23);
		temp.push_back(12.63);
		temp.push_back(0.884);
		temp.push_back(4.902);
		temp.push_back(2.879);
		temp.push_back(2.269);
		temp.push_back(4.703);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.36);
		temp.push_back(13.19);
		temp.push_back(0.8923);
		temp.push_back(5.076);
		temp.push_back(3.042);
		temp.push_back(3.22);
		temp.push_back(4.605);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.22);
		temp.push_back(13.84);
		temp.push_back(0.868);
		temp.push_back(5.395);
		temp.push_back(3.07);
		temp.push_back(4.157);
		temp.push_back(5.088);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.78);
		temp.push_back(13.57);
		temp.push_back(0.8716);
		temp.push_back(5.262);
		temp.push_back(3.026);
		temp.push_back(1.176);
		temp.push_back(4.782);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.88);
		temp.push_back(13.5);
		temp.push_back(0.8879);
		temp.push_back(5.139);
		temp.push_back(3.119);
		temp.push_back(2.352);
		temp.push_back(4.607);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.34);
		temp.push_back(14.37);
		temp.push_back(0.8726);
		temp.push_back(5.63);
		temp.push_back(3.19);
		temp.push_back(1.313);
		temp.push_back(5.15); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.01);
		temp.push_back(14.29);
		temp.push_back(0.8625);
		temp.push_back(5.609);
		temp.push_back(3.158);
		temp.push_back(2.217);
		temp.push_back(5.132);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(14.37);
		temp.push_back(14.39);
		temp.push_back(0.8726);
		temp.push_back(5.569);
		temp.push_back(3.153);
		temp.push_back(1.464);
		temp.push_back(5.300);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.73);
		temp.push_back(13.75);
		temp.push_back(0.8458);
		temp.push_back(5.412);
		temp.push_back(2.882);
		temp.push_back(3.533);
		temp.push_back(5.067);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(17.63);
		temp.push_back(15.98);
		temp.push_back(0.8673);
		temp.push_back(6.191);
		temp.push_back(3.561);
		temp.push_back(4.076);
		temp.push_back(6.06); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.84);
		temp.push_back(15.67);
		temp.push_back(0.8623);
		temp.push_back(5.998);
		temp.push_back(3.484);
		temp.push_back(4.675);
		temp.push_back(5.877);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(17.26);
		temp.push_back(15.73);
		temp.push_back(0.8763);
		temp.push_back(5.978);
		temp.push_back(3.594);
		temp.push_back(4.539);
		temp.push_back(5.791);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.11);
		temp.push_back(16.26);
		temp.push_back(0.9081);
		temp.push_back(6.154);
		temp.push_back(3.93);
		temp.push_back(2.936);
		temp.push_back(6.079);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.82);
		temp.push_back(15.51);
		temp.push_back(0.8786);
		temp.push_back(6.017);
		temp.push_back(3.486);
		temp.push_back(4.004);
		temp.push_back(5.841);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.77);
		temp.push_back(15.62);
		temp.push_back(0.8638);
		temp.push_back(5.927);
		temp.push_back(3.438);
		temp.push_back(4.92);
		temp.push_back(5.795);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(17.32);
		temp.push_back(15.91);
		temp.push_back(0.8599);
		temp.push_back(6.064);
		temp.push_back(3.403);
		temp.push_back(3.824);
		temp.push_back(5.922);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(20.71);
		temp.push_back(17.23);
		temp.push_back(0.8763);
		temp.push_back(6.579);
		temp.push_back(3.814);
		temp.push_back(4.451);
		temp.push_back(6.451);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.94);
		temp.push_back(16.49);
		temp.push_back(0.875);
		temp.push_back(6.445);
		temp.push_back(3.639);
		temp.push_back(5.064);
		temp.push_back(6.362);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(17.12);
		temp.push_back(15.55);
		temp.push_back(0.8892);
		temp.push_back(5.85);
		temp.push_back(3.566);
		temp.push_back(2.858);
		temp.push_back(5.746);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.53);
		temp.push_back(15.34);
		temp.push_back(0.8823);
		temp.push_back(5.875);
		temp.push_back(3.467);
		temp.push_back(5.532);
		temp.push_back(5.88); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.72);
		temp.push_back(16.19);
		temp.push_back(0.8977);
		temp.push_back(6.006);
		temp.push_back(3.857);
		temp.push_back(5.324);
		temp.push_back(5.879);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(20.2);
		temp.push_back(16.89);
		temp.push_back(0.8894);
		temp.push_back(6.285);
		temp.push_back(3.864);
		temp.push_back(5.173);
		temp.push_back(6.187);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.57);
		temp.push_back(16.74);
		temp.push_back(0.8779);
		temp.push_back(6.384);
		temp.push_back(3.772);
		temp.push_back(1.472);
		temp.push_back(6.273);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.51);
		temp.push_back(16.71);
		temp.push_back(0.878);
		temp.push_back(6.366);
		temp.push_back(3.801);
		temp.push_back(2.962);
		temp.push_back(6.185);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.27);
		temp.push_back(16.09);
		temp.push_back(0.887);
		temp.push_back(6.173);
		temp.push_back(3.651);
		temp.push_back(2.443);
		temp.push_back(6.197);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.88);
		temp.push_back(16.26);
		temp.push_back(0.8969);
		temp.push_back(6.084);
		temp.push_back(3.764);
		temp.push_back(1.649);
		temp.push_back(6.109);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.98);
		temp.push_back(16.66);
		temp.push_back(0.859);
		temp.push_back(6.549);
		temp.push_back(3.67);
		temp.push_back(3.691);
		temp.push_back(6.498);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(21.18);
		temp.push_back(17.21);
		temp.push_back(0.8989);
		temp.push_back(6.573);
		temp.push_back(4.033);
		temp.push_back(5.78);
		temp.push_back(6.231);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(20.88);
		temp.push_back(17.05);
		temp.push_back(0.9031);
		temp.push_back(6.45);
		temp.push_back(4.032);
		temp.push_back(5.016);
		temp.push_back(6.321);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(20.1);
		temp.push_back(16.99);
		temp.push_back(0.8746);
		temp.push_back(6.581);
		temp.push_back(3.785);
		temp.push_back(1.955);
		temp.push_back(6.449);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.76);
		temp.push_back(16.2);
		temp.push_back(0.8984);
		temp.push_back(6.172);
		temp.push_back(3.796);
		temp.push_back(3.12);
		temp.push_back(6.053);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.81);
		temp.push_back(16.29);
		temp.push_back(0.8906);
		temp.push_back(6.272);
		temp.push_back(3.693);
		temp.push_back(3.237);
		temp.push_back(6.053);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.59);
		temp.push_back(16.05);
		temp.push_back(0.9066);
		temp.push_back(6.037);
		temp.push_back(3.86);
		temp.push_back(6.001);
		temp.push_back(5.877);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.36);
		temp.push_back(16.52);
		temp.push_back(0.8452);
		temp.push_back(6.666);
		temp.push_back(3.485);
		temp.push_back(4.933);
		temp.push_back(6.448);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.87);
		temp.push_back(15.65);
		temp.push_back(0.8648);
		temp.push_back(6.139);
		temp.push_back(3.463);
		temp.push_back(3.696);
		temp.push_back(5.967);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.31);
		temp.push_back(16.59);
		temp.push_back(0.8815);
		temp.push_back(6.341);
		temp.push_back(3.81);
		temp.push_back(3.477);
		temp.push_back(6.238);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.98);
		temp.push_back(16.57);
		temp.push_back(0.8687);
		temp.push_back(6.449);
		temp.push_back(3.552);
		temp.push_back(2.144);
		temp.push_back(6.453);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.17);
		temp.push_back(16.26);
		temp.push_back(0.8637);
		temp.push_back(6.271);
		temp.push_back(3.512);
		temp.push_back(2.853);
		temp.push_back(6.273);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.72);
		temp.push_back(16.34);
		temp.push_back(0.881);
		temp.push_back(6.219);
		temp.push_back(3.684);
		temp.push_back(2.188);
		temp.push_back(6.097);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.41);
		temp.push_back(15.25);
		temp.push_back(0.8866);
		temp.push_back(5.718);
		temp.push_back(3.525);
		temp.push_back(4.217);
		temp.push_back(5.618);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(17.99);
		temp.push_back(15.86);
		temp.push_back(0.8992);
		temp.push_back(5.89);
		temp.push_back(3.694);
		temp.push_back(2.068);
		temp.push_back(5.837);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.46);
		temp.push_back(16.5);
		temp.push_back(0.8985);
		temp.push_back(6.113);
		temp.push_back(3.892);
		temp.push_back(4.308);
		temp.push_back(6.009);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.18);
		temp.push_back(16.63);
		temp.push_back(0.8717);
		temp.push_back(6.369);
		temp.push_back(3.681);
		temp.push_back(3.357);
		temp.push_back(6.229);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.95);
		temp.push_back(16.42);
		temp.push_back(0.8829);
		temp.push_back(6.248);
		temp.push_back(3.755);
		temp.push_back(3.368);
		temp.push_back(6.148);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.83);
		temp.push_back(16.29);
		temp.push_back(0.8917);
		temp.push_back(6.037);
		temp.push_back(3.786);
		temp.push_back(2.553);
		temp.push_back(5.879);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.85);
		temp.push_back(16.17);
		temp.push_back(0.9056);
		temp.push_back(6.152);
		temp.push_back(3.806);
		temp.push_back(2.843);
		temp.push_back(6.200);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(17.63);
		temp.push_back(15.86);
		temp.push_back(0.88);
		temp.push_back(6.033);
		temp.push_back(3.573);
		temp.push_back(3.747);
		temp.push_back(5.929);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.94);
		temp.push_back(16.92);
		temp.push_back(0.8752);
		temp.push_back(6.675);
		temp.push_back(3.763);
		temp.push_back(3.252);
		temp.push_back(6.55); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.55);
		temp.push_back(16.22);
		temp.push_back(0.8865);
		temp.push_back(6.153);
		temp.push_back(3.674);
		temp.push_back(1.738);
		temp.push_back(5.894);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.45);
		temp.push_back(16.12);
		temp.push_back(0.8921);
		temp.push_back(6.107);
		temp.push_back(3.769);
		temp.push_back(2.235);
		temp.push_back(5.794);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.38);
		temp.push_back(16.72);
		temp.push_back(0.8716);
		temp.push_back(6.303);
		temp.push_back(3.791);
		temp.push_back(3.678);
		temp.push_back(5.965);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.13);
		temp.push_back(16.31);
		temp.push_back(0.9035);
		temp.push_back(6.183);
		temp.push_back(3.902);
		temp.push_back(2.109);
		temp.push_back(5.924);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.14);
		temp.push_back(16.61);
		temp.push_back(0.8722);
		temp.push_back(6.259);
		temp.push_back(3.737);
		temp.push_back(6.682);
		temp.push_back(6.053);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(20.97);
		temp.push_back(17.25);
		temp.push_back(0.8859);
		temp.push_back(6.563);
		temp.push_back(3.991);
		temp.push_back(4.677);
		temp.push_back(6.316);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.06);
		temp.push_back(16.45);
		temp.push_back(0.8854);
		temp.push_back(6.416);
		temp.push_back(3.719);
		temp.push_back(2.248);
		temp.push_back(6.163);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.96);
		temp.push_back(16.2);
		temp.push_back(0.9077);
		temp.push_back(6.051);
		temp.push_back(3.897);
		temp.push_back(4.334);
		temp.push_back(5.75); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(19.15);
		temp.push_back(16.45);
		temp.push_back(0.889);
		temp.push_back(6.245);
		temp.push_back(3.815);
		temp.push_back(3.084);
		temp.push_back(6.185);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.89);
		temp.push_back(16.23);
		temp.push_back(0.9008);
		temp.push_back(6.227);
		temp.push_back(3.769);
		temp.push_back(3.639);
		temp.push_back(5.966);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(20.03);
		temp.push_back(16.9);
		temp.push_back(0.8811);
		temp.push_back(6.493);
		temp.push_back(3.857);
		temp.push_back(3.063);
		temp.push_back(6.32); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(20.24);
		temp.push_back(16.91);
		temp.push_back(0.8897);
		temp.push_back(6.315);
		temp.push_back(3.962);
		temp.push_back(5.901);
		temp.push_back(6.188);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.14);
		temp.push_back(16.12);
		temp.push_back(0.8772);
		temp.push_back(6.059);
		temp.push_back(3.563);
		temp.push_back(3.619);
		temp.push_back(6.011);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.17);
		temp.push_back(15.38);
		temp.push_back(0.8588);
		temp.push_back(5.762);
		temp.push_back(3.387);
		temp.push_back(4.286);
		temp.push_back(5.703);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.43);
		temp.push_back(15.97);
		temp.push_back(0.9077);
		temp.push_back(5.98);
		temp.push_back(3.771);
		temp.push_back(2.984);
		temp.push_back(5.905);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.99);
		temp.push_back(14.89);
		temp.push_back(0.9064);
		temp.push_back(5.363);
		temp.push_back(3.582);
		temp.push_back(3.336);
		temp.push_back(5.144);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.75);
		temp.push_back(16.18);
		temp.push_back(0.8999);
		temp.push_back(6.111);
		temp.push_back(3.869);
		temp.push_back(4.188);
		temp.push_back(5.992);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.65);
		temp.push_back(16.41);
		temp.push_back(0.8698);
		temp.push_back(6.285);
		temp.push_back(3.594);
		temp.push_back(4.391);
		temp.push_back(6.102);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(17.98);
		temp.push_back(15.85);
		temp.push_back(0.8993);
		temp.push_back(5.979);
		temp.push_back(3.687);
		temp.push_back(2.257);
		temp.push_back(5.919);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(20.16);
		temp.push_back(17.03);
		temp.push_back(0.8735);
		temp.push_back(6.513);
		temp.push_back(3.773);
		temp.push_back(1.91);
		temp.push_back(6.185);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(17.55);
		temp.push_back(15.66);
		temp.push_back(0.8991);
		temp.push_back(5.791);
		temp.push_back(3.69);
		temp.push_back(5.366);
		temp.push_back(5.661);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.3);
		temp.push_back(15.89);
		temp.push_back(0.9108);
		temp.push_back(5.979);
		temp.push_back(3.755);
		temp.push_back(2.837);
		temp.push_back(5.962);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(18.94);
		temp.push_back(16.32);
		temp.push_back(0.8942);
		temp.push_back(6.144);
		temp.push_back(3.825);
		temp.push_back(2.908);
		temp.push_back(5.949);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.38);
		temp.push_back(14.9);
		temp.push_back(0.8706);
		temp.push_back(5.884);
		temp.push_back(3.268);
		temp.push_back(4.462);
		temp.push_back(5.795);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.16);
		temp.push_back(15.33);
		temp.push_back(0.8644);
		temp.push_back(5.845);
		temp.push_back(3.395);
		temp.push_back(4.266);
		temp.push_back(5.795);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.56);
		temp.push_back(14.89);
		temp.push_back(0.8823);
		temp.push_back(5.776);
		temp.push_back(3.408);
		temp.push_back(4.972);
		temp.push_back(5.847);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.38);
		temp.push_back(14.66);
		temp.push_back(0.899);
		temp.push_back(5.477);
		temp.push_back(3.465);
		temp.push_back(3.600);
		temp.push_back(5.439);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(17.36);
		temp.push_back(15.76);
		temp.push_back(0.8785);
		temp.push_back(6.145);
		temp.push_back(3.574);
		temp.push_back(3.526);
		temp.push_back(5.971);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.57);
		temp.push_back(15.15);
		temp.push_back(0.8527);
		temp.push_back(5.92);
		temp.push_back(3.231);
		temp.push_back(2.64);
		temp.push_back(5.879);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(15.6);
		temp.push_back(15.11);
		temp.push_back(0.858);
		temp.push_back(5.832);
		temp.push_back(3.286);
		temp.push_back(2.725);
		temp.push_back(5.752);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(16.23);
		temp.push_back(15.18);
		temp.push_back(0.885);
		temp.push_back(5.872);
		temp.push_back(3.472);
		temp.push_back(3.769);
		temp.push_back(5.922);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.07);
		temp.push_back(13.92);
		temp.push_back(0.848);
		temp.push_back(5.472);
		temp.push_back(2.994);
		temp.push_back(5.304);
		temp.push_back(5.395);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.32);
		temp.push_back(13.94);
		temp.push_back(0.8613);
		temp.push_back(5.541);
		temp.push_back(3.073);
		temp.push_back(7.035);
		temp.push_back(5.44); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.34);
		temp.push_back(13.95);
		temp.push_back(0.862);
		temp.push_back(5.389);
		temp.push_back(3.074);
		temp.push_back(5.995);
		temp.push_back(5.307);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.22);
		temp.push_back(13.32);
		temp.push_back(0.8652);
		temp.push_back(5.224);
		temp.push_back(2.967);
		temp.push_back(5.469);
		temp.push_back(5.221);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.82);
		temp.push_back(13.4);
		temp.push_back(0.8274);
		temp.push_back(5.314);
		temp.push_back(2.777);
		temp.push_back(4.471);
		temp.push_back(5.178);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.21);
		temp.push_back(13.13);
		temp.push_back(0.8167);
		temp.push_back(5.279);
		temp.push_back(2.687);
		temp.push_back(6.169);
		temp.push_back(5.275);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.43);
		temp.push_back(13.13);
		temp.push_back(0.8335);
		temp.push_back(5.176);
		temp.push_back(2.719);
		temp.push_back(2.221);
		temp.push_back(5.132);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.49);
		temp.push_back(13.46);
		temp.push_back(0.8658);
		temp.push_back(5.267);
		temp.push_back(2.967);
		temp.push_back(4.421);
		temp.push_back(5.002);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.7);
		temp.push_back(13.71);
		temp.push_back(0.8491);
		temp.push_back(5.386);
		temp.push_back(2.911);
		temp.push_back(3.26);
		temp.push_back(5.316);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(10.79);
		temp.push_back(12.93);
		temp.push_back(0.8107);
		temp.push_back(5.317);
		temp.push_back(2.648);
		temp.push_back(5.462);
		temp.push_back(5.194);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.83);
		temp.push_back(13.23);
		temp.push_back(0.8496);
		temp.push_back(5.263);
		temp.push_back(2.84);
		temp.push_back(5.195);
		temp.push_back(5.307);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.01);
		temp.push_back(13.52);
		temp.push_back(0.8249);
		temp.push_back(5.405);
		temp.push_back(2.776);
		temp.push_back(6.992);
		temp.push_back(5.27); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.26);
		temp.push_back(13.6);
		temp.push_back(0.8333);
		temp.push_back(5.408);
		temp.push_back(2.833);
		temp.push_back(4.756);
		temp.push_back(5.36); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.18);
		temp.push_back(13.04);
		temp.push_back(0.8266);
		temp.push_back(5.22);
		temp.push_back(2.693);
		temp.push_back(3.332);
		temp.push_back(5.001);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.36);
		temp.push_back(13.05);
		temp.push_back(0.8382);
		temp.push_back(5.175);
		temp.push_back(2.755);
		temp.push_back(4.048);
		temp.push_back(5.263);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.19);
		temp.push_back(13.05);
		temp.push_back(0.8253);
		temp.push_back(5.25);
		temp.push_back(2.675);
		temp.push_back(5.813);
		temp.push_back(5.219);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.34);
		temp.push_back(12.87);
		temp.push_back(0.8596);
		temp.push_back(5.053);
		temp.push_back(2.849);
		temp.push_back(3.347);
		temp.push_back(5.003);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.13);
		temp.push_back(13.73);
		temp.push_back(0.8081);
		temp.push_back(5.394);
		temp.push_back(2.745);
		temp.push_back(4.825);
		temp.push_back(5.22); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.75);
		temp.push_back(13.52);
		temp.push_back(0.8082);
		temp.push_back(5.444);
		temp.push_back(2.678);
		temp.push_back(4.378);
		temp.push_back(5.31); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.49);
		temp.push_back(13.22);
		temp.push_back(0.8263);
		temp.push_back(5.304);
		temp.push_back(2.695);
		temp.push_back(5.388);
		temp.push_back(5.31); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.54);
		temp.push_back(13.67);
		temp.push_back(0.8425);
		temp.push_back(5.451);
		temp.push_back(2.879);
		temp.push_back(3.082);
		temp.push_back(5.491);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.02);
		temp.push_back(13.33);
		temp.push_back(0.8503);
		temp.push_back(5.35);
		temp.push_back(2.81);
		temp.push_back(4.271);
		temp.push_back(5.308);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.05);
		temp.push_back(13.41);
		temp.push_back(0.8416);
		temp.push_back(5.267);
		temp.push_back(2.847);
		temp.push_back(4.988);
		temp.push_back(5.046);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.55);
		temp.push_back(13.57);
		temp.push_back(0.8558);
		temp.push_back(5.333);
		temp.push_back(2.968);
		temp.push_back(4.419);
		temp.push_back(5.176);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.14);
		temp.push_back(12.79);
		temp.push_back(0.8558);
		temp.push_back(5.011);
		temp.push_back(2.794);
		temp.push_back(6.388);
		temp.push_back(5.049);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.1);
		temp.push_back(13.15);
		temp.push_back(0.8793);
		temp.push_back(5.105);
		temp.push_back(2.941);
		temp.push_back(2.201);
		temp.push_back(5.056);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.44);
		temp.push_back(13.59);
		temp.push_back(0.8462);
		temp.push_back(5.319);
		temp.push_back(2.897);
		temp.push_back(4.924);
		temp.push_back(5.27); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.15);
		temp.push_back(13.45);
		temp.push_back(0.8443);
		temp.push_back(5.417);
		temp.push_back(2.837);
		temp.push_back(3.638);
		temp.push_back(5.338);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.35);
		temp.push_back(13.12);
		temp.push_back(0.8291);
		temp.push_back(5.176);
		temp.push_back(2.668);
		temp.push_back(4.337);
		temp.push_back(5.132);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.24);
		temp.push_back(13.00);
		temp.push_back(0.8359);
		temp.push_back(5.09);
		temp.push_back(2.715);
		temp.push_back(3.521);
		temp.push_back(5.088);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.02);
		temp.push_back(13.00);
		temp.push_back(0.8189);
		temp.push_back(5.325);
		temp.push_back(2.701);
		temp.push_back(6.735);
		temp.push_back(5.163);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.55);
		temp.push_back(13.1);
		temp.push_back(0.8455);
		temp.push_back(5.167);
		temp.push_back(2.845);
		temp.push_back(6.715);
		temp.push_back(4.956);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.27);
		temp.push_back(12.97);
		temp.push_back(0.8419);
		temp.push_back(5.088);
		temp.push_back(2.763);
		temp.push_back(4.309);
		temp.push_back(5.000);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.4);
		temp.push_back(13.08);
		temp.push_back(0.8375);
		temp.push_back(5.136);
		temp.push_back(2.763);
		temp.push_back(5.588);
		temp.push_back(5.089);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(10.83);
		temp.push_back(12.96);
		temp.push_back(0.8099);
		temp.push_back(5.278);
		temp.push_back(2.641);
		temp.push_back(5.182);
		temp.push_back(5.185);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(10.8);
		temp.push_back(12.57);
		temp.push_back(0.859);
		temp.push_back(4.981);
		temp.push_back(2.821);
		temp.push_back(4.773);
		temp.push_back(5.063);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.26);
		temp.push_back(13.01);
		temp.push_back(0.8355);
		temp.push_back(5.186);
		temp.push_back(2.71);
		temp.push_back(5.335);
		temp.push_back(5.092);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(10.74);
		temp.push_back(12.73);
		temp.push_back(0.8329);
		temp.push_back(5.145);
		temp.push_back(2.642);
		temp.push_back(4.702);
		temp.push_back(4.963);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.48);
		temp.push_back(13.05);
		temp.push_back(0.8473);
		temp.push_back(5.18);
		temp.push_back(2.758);
		temp.push_back(5.876);
		temp.push_back(5.002);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.21);
		temp.push_back(13.47);
		temp.push_back(0.8453);
		temp.push_back(5.357);
		temp.push_back(2.893);
		temp.push_back(1.661);
		temp.push_back(5.178);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.41);
		temp.push_back(12.95);
		temp.push_back(0.856);
		temp.push_back(5.09);
		temp.push_back(2.775);
		temp.push_back(4.957);
		temp.push_back(4.825);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.46);
		temp.push_back(13.41);
		temp.push_back(0.8706);
		temp.push_back(5.236);
		temp.push_back(3.017);
		temp.push_back(4.987);
		temp.push_back(5.147);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.19);
		temp.push_back(13.36);
		temp.push_back(0.8579);
		temp.push_back(5.24);
		temp.push_back(2.909);
		temp.push_back(4.857);
		temp.push_back(5.158);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.65);
		temp.push_back(13.07);
		temp.push_back(0.8575);
		temp.push_back(5.108);
		temp.push_back(2.85);
		temp.push_back(5.209);
		temp.push_back(5.135);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.89);
		temp.push_back(13.77);
		temp.push_back(0.8541);
		temp.push_back(5.495);
		temp.push_back(3.026);
		temp.push_back(6.185);
		temp.push_back(5.316);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.56);
		temp.push_back(13.31);
		temp.push_back(0.8198);
		temp.push_back(5.363);
		temp.push_back(2.683);
		temp.push_back(4.062);
		temp.push_back(5.182);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.81);
		temp.push_back(13.45);
		temp.push_back(0.8198);
		temp.push_back(5.413);
		temp.push_back(2.716);
		temp.push_back(4.898);
		temp.push_back(5.352);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(10.91);
		temp.push_back(12.8);
		temp.push_back(0.8372);
		temp.push_back(5.088);
		temp.push_back(2.675);
		temp.push_back(4.179);
		temp.push_back(4.956);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.23);
		temp.push_back(12.82);
		temp.push_back(0.8594);
		temp.push_back(5.089);
		temp.push_back(2.821);
		temp.push_back(7.524);
		temp.push_back(4.957);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(10.59);
		temp.push_back(12.41);
		temp.push_back(0.8648);
		temp.push_back(4.899);
		temp.push_back(2.787);
		temp.push_back(4.975);
		temp.push_back(4.794);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(10.93);
		temp.push_back(12.8);
		temp.push_back(0.839);
		temp.push_back(5.046);
		temp.push_back(2.717);
		temp.push_back(5.398);
		temp.push_back(5.045);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.27);
		temp.push_back(12.86);
		temp.push_back(0.8563);
		temp.push_back(5.091);
		temp.push_back(2.804);
		temp.push_back(3.985);
		temp.push_back(5.001);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.87);
		temp.push_back(13.02);
		temp.push_back(0.8795);
		temp.push_back(5.132);
		temp.push_back(2.953);
		temp.push_back(3.597);
		temp.push_back(5.132);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(10.82);
		temp.push_back(12.83);
		temp.push_back(0.8256);
		temp.push_back(5.18);
		temp.push_back(2.63);
		temp.push_back(4.853);
		temp.push_back(5.089);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.11);
		temp.push_back(13.27);
		temp.push_back(0.8639);
		temp.push_back(5.236);
		temp.push_back(2.975);
		temp.push_back(4.132);
		temp.push_back(5.012);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.8);
		temp.push_back(13.47);
		temp.push_back(0.886);
		temp.push_back(5.16);
		temp.push_back(3.126);
		temp.push_back(4.873);
		temp.push_back(4.914);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.79);
		temp.push_back(13.53);
		temp.push_back(0.8786);
		temp.push_back(5.224);
		temp.push_back(3.054);
		temp.push_back(5.483);
		temp.push_back(4.958);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.37);
		temp.push_back(13.78);
		temp.push_back(0.8849);
		temp.push_back(5.32);
		temp.push_back(3.128);
		temp.push_back(4.67);
		temp.push_back(5.091);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.62);
		temp.push_back(13.67);
		temp.push_back(0.8481);
		temp.push_back(5.41);
		temp.push_back(2.911);
		temp.push_back(3.306);
		temp.push_back(5.231);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.76);
		temp.push_back(13.38);
		temp.push_back(0.8964);
		temp.push_back(5.073);
		temp.push_back(3.155);
		temp.push_back(2.828);
		temp.push_back(4.83); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.38);
		temp.push_back(13.44);
		temp.push_back(0.8609);
		temp.push_back(5.219);
		temp.push_back(2.989);
		temp.push_back(5.472);
		temp.push_back(5.045);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.67);
		temp.push_back(13.32);
		temp.push_back(0.8977);
		temp.push_back(4.984);
		temp.push_back(3.135);
		temp.push_back(2.300);
		temp.push_back(4.745);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.18);
		temp.push_back(12.72);
		temp.push_back(0.868);
		temp.push_back(5.009);
		temp.push_back(2.81);
		temp.push_back(4.051);
		temp.push_back(4.828);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.7);
		temp.push_back(13.41);
		temp.push_back(0.8874);
		temp.push_back(5.183);
		temp.push_back(3.091);
		temp.push_back(8.456);
		temp.push_back(5.000);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.37);
		temp.push_back(13.47);
		temp.push_back(0.8567);
		temp.push_back(5.204);
		temp.push_back(2.96);
		temp.push_back(3.919);
		temp.push_back(5.001);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.19);
		temp.push_back(13.2);
		temp.push_back(0.8783);
		temp.push_back(5.137);
		temp.push_back(2.981);
		temp.push_back(3.631);
		temp.push_back(4.87); 
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.23);
		temp.push_back(12.88);
		temp.push_back(0.8511);
		temp.push_back(5.14);
		temp.push_back(2.795);
		temp.push_back(4.325);
		temp.push_back(5.003);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(13.2);
		temp.push_back(13.66);
		temp.push_back(0.8883);
		temp.push_back(5.236);
		temp.push_back(3.232);
		temp.push_back(8.315);
		temp.push_back(5.056);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(11.84);
		temp.push_back(13.21);
		temp.push_back(0.8521);
		temp.push_back(5.175);
		temp.push_back(2.836);
		temp.push_back(3.598);
		temp.push_back(5.044);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(12.3);
		temp.push_back(13.34);
		temp.push_back(0.8684);
		temp.push_back(5.243);
		temp.push_back(2.974);
		temp.push_back(5.637);
		temp.push_back(5.063);
		result.push_back(temp);
		temp.clear();
		

		
		return result;
	};
	
	
	/*
	http://archive.ics.uci.edu/ml/datasets/seeds
	1 : Kama
	2 : Rosa 
	3 : Canadian
	*/
	vector< vector<double> > Bases::seeds_y(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		

		return result;
	};	
	
	
	/*
	http://archive.ics.uci.edu/ml/datasets/Lenses
	1. age of the patient: (1) young, (2) pre-presbyopic, (3) presbyopic 
	2. spectacle prescription: (1) myope, (2) hypermetrope 
	3. astigmatic: (1) no, (2) yes 
	4. tear production rate: (1) reduced, (2) normal
	*/
	vector< vector<double> > Bases::lenses_X(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(2);
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(1);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(2);
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();

		
		return result;
	};
	
	
	/*
	http://archive.ics.uci.edu/ml/datasets/Lenses
	1 : the patient should be fitted with hard contact lenses, 
	2 : the patient should be fitted with soft contact lenses, 
	3 : the patient should not be fitted with contact lenses. 
	*/
	vector< vector<double> > Bases::lenses_y(){
		vector< vector<double> > result;
		vector<double> temp;

		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(1);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(2);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();
		
		
		temp.push_back(3);
		result.push_back(temp);
		temp.clear();


		return result;
	};		
	
	
}
