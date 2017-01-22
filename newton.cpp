#include<iostream>
#include<cmath>
#define E 2.71828182846
#define PI 3.14159265359

using namespace std;

double f(double x){
	//return 0.25 * pow(x, 3) + pow(x, 2) - 2.5;
	//return sqrt(x) - cos(x);
	//return x * pow(E, x) - 2 * pow(x, 3) + 4 * x - 15;
	//return pow(E , x) - pow(x, 2) + 3 * x -2;
	return pow(E,-x) + sin(x);
}

double df(double x){
	//return 0.75 * pow(x, 2) + 2 * x;
	//return (1 / (2 * sqrt(x))) + sin(x);
	//return - 6 * pow(x ,2) + pow(E, x) * (x + 1) +4;
	//return -2 * x + pow(E, x) + 3;
	return -pow(E, -x) + cos(x);
}

int main(void){
	int iteraciones = 5;
	double x = 0;
	cout << "x = " << x << endl; 
	while(iteraciones--){
		x = x - f(x) / df(x);
		cout << "x = " << x << endl; 
	}
	return 0;
}