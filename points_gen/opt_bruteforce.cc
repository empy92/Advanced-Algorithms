#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
using namespace std;

void stamp(vector<double> v);

int main ()
{
	int min;
	int max;
	char* file = new char[100];
	char text[100];
	int npoints;
	double val;
	vector<double> x;
	vector<double> y;
	double minERROR = 99999999999999;
	double bmin;
	cout << "Your file to otp (name.csv): ";
	cin >> file;
	cout << "min val: ";
	cin >> min;
	cout << "max val: ";
	cin >> max;
	cout << "number of points: ";
	cin >> npoints;
	ifstream in;
	in.open(file);
	in >> text;
	in >> text;
	in >> text;
	cout << text << endl;
	while(!in.eof()){
		in >> text;
		val = atof(text);
		x.push_back(val);
		in >> text;
		in >> text;
		val = atof(text);
		y.push_back(val);		
	}
	in.close();
	stamp(x);
	stamp(y);



	for(int i=0; i<=npoints; i++){
		double ERROR = 0;
		double b = (double)((abs(max-min)/(double)npoints)*(double)i+(double)min);
		for(int j=0; j<x.size()-1; j++){

			ERROR+= (b-y[j])*(b-y[j]);

		}
		if(ERROR < minERROR){
			minERROR = ERROR;
			bmin = b;
		}
	}
	cout << "y = " << bmin << endl;
	return 0;
}

void stamp(vector<double> v){
	for(int i=0; i<v.size()-1; i++){
		cout << v[i] << endl;
	}
}