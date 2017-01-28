#include<iostream>

using namespace std;

double a0, a1;

void minimosCuadrados(int n, double *x, double *y){
	double Sx = 0.0, Sx2 = 0.0, Sy = 0.0, Sxy = 0.0;
	for(int i = 0; i < n; i++){
		Sx += x[i];
		Sx2 = Sx2 + x[i] * x[i];
		Sy += y[i];
		Sxy = Sxy + x[i] * y[i];
	}
	a1 = (n * Sxy - Sx * Sy) / (n * Sx2 - Sx * Sx);
	a0 = (Sy - a1 * Sx) / n;
	
	cout << "a0 = " << a0 << " , a1 = " << a1 << endl;
}


int main(void){
	double x[10] = {12, 6.4, 95, 159, 120, 40, 73, 98, 112, 200};
	double y[10] = {3, 2, 15, 40, 32, 0.8, 12, 15, 30, 48};
	
	minimosCuadrados(10, x, y);
	
	return 0;
}
