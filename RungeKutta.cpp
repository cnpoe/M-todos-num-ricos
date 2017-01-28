#include<iostream>
#include<cmath>

using namespace std;

double f1(double x, double y){
	return x * y * y - y / x;
}

double f2(double x, double y){
	return x * y + sqrt(y);
}

void rungekutta(double (*f)(double, double), double x, double y, double h){
	double k1, k2, k3, k4;
	for(int i = 0; i < 4; i++){
		k1 = f(x, y);
		k2 = f(x + h/2, y + k1*h/2);
		k3 = f(x + h/2, y + k2*h/2);
		k4 = f(x + h, y + h * k3);
		cout << "x"<< i << " = " << x << " y" << i << " = " << y << endl;
		y = y + (h/6) * (k1 + 2*k2 + 2*k3 + k4);
		x += h;
	}
}

int main(void){
	double h = 0.1;
	double (*ptrf1) (double, double);
	double (*ptrf2) (double, double);
	ptrf1 = f1;
	ptrf2 = f2;
	
	rungekutta(ptrf1, double(1), double(1), h);
	cout << endl;
	rungekutta(ptrf2, double(0), double(1), h);
	return 0;
}
