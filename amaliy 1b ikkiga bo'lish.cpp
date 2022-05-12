#include<bits/stdc++.h>
using namespace std;
float f(float a){
	return (2-a)*exp(a) - 1;
}
float const e = 0.001;
int main(){
	float a = -2, b = 0, c;
	while(b-a  > e){
		c = (a+b)/2;
		if(f(a)*f(c) < 0) b = c;
		else a = c;
	}
	cout << (a+b)/2;
	return 0;
}