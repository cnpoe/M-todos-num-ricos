#include<iostream>
#include<cmath>

using namespace std;

double f1(double x, double y){
	return (2 - 2 * y * x)/(x * x +1);
}

double f2(double x, double y){
	return 1 + sin(x * y); 
}

double f3(double x, double y){
	return 1 + ((x - y) * (x - y)); 
}

void euler(double (*f)(double, double), double x, double y, double h){
	double fxy, y_;
	int n = 6;
	for(int i = 0; i < n; i++){
		fxy = f(x,y);
		cout << "x" << i << "= " << x << "\ty" << i << "= " << y << "\tf(x,y)= " << fxy << endl;
		y_ = y + h * fxy;
		y = y + (h / 2) * (fxy + f(x + h, y_));
		x += h;
	}
}


int main(void){
	double h = 0.2;
	double (*ptrf1) (double, double);
	double (*ptrf2) (double, double);
	double (*ptrf3) (double, double);
	ptrf1 = f1;
	ptrf2 = f2;
	ptrf3 = f3;
	euler(ptrf1, double(0), double(1), h);
	cout << endl;
	euler(ptrf2, double(0), double(0), h);
	cout << endl;
	euler(ptrf3, double(2), double(1), h);
	return 0;
}
