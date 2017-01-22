#include<iostream>
#include<cmath>
#define E 2.71828182846
#define PI 3.14159265359

using namespace std;

double f(double x){
	//return x - pow(3, -x);
	//return 4 * pow(x, 2) - pow(E , x);
	//return x - pow(log(x), x);
	return pow(x,3) - 2 * pow(x,2) - 4 * x + 3;
}

int main(void){
	int iteraciones = 3;
	double x0 = 0.1, xi = 0.2;
	cout << "x = " << xi << endl;
	while(iteraciones--){
		xi = xi - (xi - x0) * f(xi) / (f(xi) - f(x0));
		cout << "x = " << xi << endl;
	}
	return 0;
}