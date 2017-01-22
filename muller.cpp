#include<iostream>
#include<cmath>
#define E 2.71828182846
#define PI 3.14159265359

using namespace std;

double f(double x){
	//return x - pow(3, -x);
	//return 4 * pow(x, 2) - pow(E , x);
	//return pow(x,3) - x - 1;
	//return 16 * pow(x, 4) - 40 * pow(x , 3) + 5 * pow(x, 2) + 20 * x + 6;
	return pow(x, 4) - 2 * pow(x, 2) + 3 * x - 5;
}

int main(void){
	int iteraciones = 2;
	double h0, h1, a, b, c, xr, fx0x1, fx1x2;
	double x0 = -0.5, x1 = 0.0, x2 = 0.5;
	cout << "x0 = " << x0 << endl;
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
	while(iteraciones--){
		h0 = x1 - x0;
		h1 = x2 - x1;
		fx0x1 = (f(x1) - f(x0))/(h0);
		fx1x2 = (f(x2) - f(x1))/(h1);
		a = (fx1x2 - fx0x1) / (x2 - x0);
		b = fx1x2 - a * (x1 + x2);
		c = f(x2) - x2 * (fx1x2 - a * x1);
		cout << "a: " << a << " b: "<< b << " c: " << c<< endl; 
		if(abs(b + sqrt(b * b - 4 * a * c)) > abs(b - sqrt(b * b - 4 * a * c)))
		xr = (- b + sqrt(b * b - 4 * a * c)) / 2 * a;
		cout << xr << endl;
		xr = (- b - sqrt(b * b - 4 * a * c)) / 2 * a;
		cout << xr << endl;
		x0 = x1;
		x1 = x2;
		x2 = xr;
		cout << "x0 = " << x0 << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	return 0;
}
