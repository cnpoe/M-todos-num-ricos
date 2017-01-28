#include<iostream>
#include<cmath>

using namespace std;

double f1(double x, double y){
	return x * y * y - y / x;
}

double f1_1(double x, double y){
	return 2*x*x*y*y*y - 2*y*y + 2*y/x*x;
}

double f2(double x, double y){
	return x * y + sqrt(y);
}

double f2_1(double x, double y){
	return y + x*x*y + x*sqrt(y)/2 - 1/2;
}

void taylor(double (*f)(double, double), double (*f_1)(double, double), double x, double y, double h){
	for(int i = 0; i < 4; i++){
		cout << "x"<< i << " = " << x << " y" << i << " = " << y << endl;
		y = y + h * f(x, y) + f_1(x, y) * h * h / 2;
		x += h;
	}
}

int main(void){
	double h = 0.1;
	double (*ptrf11) (double, double);
	double (*ptrf12) (double, double);
	ptrf11 = f1;
	ptrf12 = f1_1;
	
	double (*ptrf21) (double, double);
	double (*ptrf22) (double, double);
	ptrf21 = f2;
	ptrf22 = f2_1;
	
	taylor(ptrf11, ptrf12, double(1), double(1), h);
	cout << endl;
	taylor(ptrf21, ptrf22, double(0), double(1), h);
	return 0;
}
