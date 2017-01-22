#include<iostream>
#include<cmath>
#define E 2.71828182846

using namespace std;

double f(double x){
	//return cos(x) - log(x);
	//return pow(E, x) - pow(x, 2) + 3 * x - 2;
	return 2 * x * cos(2 * x) - pow((x + 1), 2);
}

int main(void){
	int iteraciones = 7;
	double a = -3.0,b = -2.0,m;
	while(iteraciones--){
		m = (a + b) / 2;
		
		cout << "\na = " << a << "\nb = " << b << "\nm = " << m << "\nf(m) = " 
		<< f(m) << "\nf(a) = " << f(a) << "\nf(b) = " << f(b) <<endl;
		
		if(f(m) != 0){
			if((f(m) * f(b)) < 0){
				a = m;
			}
			if((f(m) * f(a)) < 0){
				b = m;
			}
		}
	}
	return 0;
}
