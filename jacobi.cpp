#include<iostream>

using namespace std;

int main(void){
	int iteraciones = 4;
	double x1, x2, x3;
	double x, y, z;
	x1 = x2 = x3 = 0;
	
	while(iteraciones--){
		
		x = (-35 - x2 + x3) / -9;
		y = (7 - 2 * x1 - 2 * x3) / -17;
		z = (118 - x1 + 2 * x2) / 13;

		cout << "x1 : " << x << endl;
		cout << "x2 : " << y << endl;
		cout << "x3 : " << z << endl;
		
		x1 = x;
		x2 = y;
		x3 = z;

	}
	
	return 0;
}
