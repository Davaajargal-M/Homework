#include<iostream>

using namespace std;
/*
1  5 hurtelh sondgoi toonii niilberiig ol
1+3+5= 
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
		return 0;
	}
	if(a%2==1){
		return a + tSum(a+1, b);
	}else{
		return tSum(a+1, b);
	}
	
	//return tSum();
}
