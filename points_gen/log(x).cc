#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define EPLSILON 0.00000000001
#define RANGE 100
#define NPOINTS 1000
#define MAX_ERROR 0.0

int main ()
{
	cout << "x ;"<< " log(x) " << endl;

	for(int i=0; i<NPOINTS; i++){
		double x = ((double)i/NPOINTS)*RANGE + EPLSILON; //divide 0--RANGE in NPOINTS parts
		cout << x << " ; " << log(x) + MAX_ERROR*((2.0* rand()/RAND_MAX) -1.0) << endl; //logX + (random number from +1.0 to -1.0)*MAX_ERROR
	}
	return 0;
}