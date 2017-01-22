#include<iostream>

using namespace std;

int main(void){
	int iteraciones = 4;
	double x1, x2, x3;
	x1 = x2 = x3 = 0;
	
	while(iteraciones--){
		
		x1 = (-35 - x2 + x3) / -9;
		x2 = (7 - 2 * x1 - 2 * x3) / -17;
		x3 = (118 - x1 + 2 * x2) / 13;
		/*
		x1 = (-5 - 2 * x2 - x3) / 7;
		x2 = (11 - x1 - 2 * x3) / 9;
		x3 = (4 - x1) / 5;
*/
		cout << "x1 : " << x1 << endl;
		cout << "x2 : " << x2 << endl;
		cout << "x3 : " << x3 << endl;

	}
	
	return 0;
}
