#include<iostream>

using namespace std;
int check(int);

int main(){
	int number;
	
	check(number);
	cout<<"Used to function!. Thank you ^-^";
	
	return 0; 
}

int check(int number){
	cout<<"Enter number: "<<endl;
	cin>>number;
	
	while(1){
		if(number%2==0){
			cout<<"Even number"<<endl;
		}else{
			cout<<"Odd number"<<endl;
		}
	
	return 0;
	}
	
}
