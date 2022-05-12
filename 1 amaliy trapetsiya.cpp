#include<bits/stdc++.h>
using namespace std;
float f(float x){
	return x*x + 2*x + 1;
}
int main(){
	float a = 0, b = 2, n = 1, h, res = 0;
	h = (b-a)/n;
	while(n){
		res += (f(a)+f(a+h))*h/2;
		a += h;
		n--;
	}
	cout << res;
	return 0;
}