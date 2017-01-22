#include<iostream>
#include<cmath>
#define E 2.71828182846

using namespace std;

double g(double x){
	//return pow(3, -x);
	//return sqrt(pow(E,x) / 4);
	//return pow(E,x) / (4 * x);
	//return (-2 * pow(x, 2) + x + 3) / pow(x , 3);
	//return sqrt( sqrt( -2 * pow(x, 2) + x + 3) );
	//return -(pow(E,x) - pow(x, 2) - 2) / 3;
	return (pow(x,3) - 2 * pow(x,2) + 3) / 4;
}

int main(void){
	int iteraciones = 7;
	double x = 0.5;
	cout << "x = " << x << endl;
	while(iteraciones--){
		x = g(x);
		cout << "x = " << x << endl;
	}
	return 0;
}
