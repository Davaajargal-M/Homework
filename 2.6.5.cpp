#include<iostream>

using namespace std; 
int tMul(int, int);

int main(){
	int Mul, a, b;
	cin>>a>>b;
	
	Mul = tMul(a, b);
	cout<<Mul;
	
	return 0;
}

int tMul(int x, int y){
	if(x>y){
		return 1; 
	}
	if(x%2==1){
		return x * tMul(x+1, y);
	}else{
		return tMul(x+1, y);
	}	
}
