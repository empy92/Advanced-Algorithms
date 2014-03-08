#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define PI 3.14159265
#define NPOINTS 1000
#define MAX_ERROR 0.0

int main ()
{
	cout << "x ;"<< " sen(x) " << endl;

	for(int i=0; i<NPOINTS; i++){
		double x = ((double)i/NPOINTS) * 2.0 * PI; //divide 0--2PI in NPOINTS parts
		cout << x << " ; " << sin(x) + MAX_ERROR*((2.0* rand()/RAND_MAX) -1.0) << endl; //sinX + (random number from +1.0 to -1.0)*MAX_ERROR
	}
	return 0;
}