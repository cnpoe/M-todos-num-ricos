#include<iostream>
#include<cmath>
#define E 2.71828182846
 
using namespace std;
 
double f (double x){
	//return x - pow(3,-x);
	//return 4 * pow(x,2) - pow(E, x);
	return x - pow(log(x) , x);
	//return pow(x, 3) - 2 * pow(x,2) - 4 * x + 3; 
}
 
int main(void)
{
	double a,b,xi;
	int i;

	i = 3;
	a = 3.7; b = 5.0;
	 
	while(i--){
		if(f(a) == 0){
			cout << "La raiz es: " << a << endl;
			break;
		}
		if(f(b) == 0){
			cout << "La raiz es: " << b << endl;
			break;
		}
		 
		xi = (b * f(a) - a * f(b)) / ( f(a) - f(b));
		 
		cout <<"a = " << a <<" b = "<< b <<" xi = " << xi << endl
		<<"f(a) = " <<f(a) << " f(b) = " << f(b) << " f(xi) = " << f(xi)<< endl;
		 
		if( f(a) * f(xi) < 0 ){
			b = xi;
		}
		else{
			a = xi;
		}
	} 
}
