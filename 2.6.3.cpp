#include<iostream>

using namespace std;
/*
1  5 hurtelh tegsh toonuudiin urjweriig ol
2*4 = 
*/
int tSum(int, int);

int main(){
	int sum, x, y;
	cin>>x>>y;
	sum=tSum(x, y); // 1, 5
	cout<<sum;
	
	return 0;
}

int tSum(int a, int b){
	if(a>b){
		return 1;
	}
	if(a%2==0){
		return a * tSum(a+1, b);
	}else{
		return tSum(a+1, b);
	}
	
	//return tSum();
}
