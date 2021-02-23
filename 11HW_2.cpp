#include<iostream>

using namespace std;
bool check(int);

int main(){
	int i, number;
	
	check(number);
	cout<<"Used to function!. Thank you ^-^"<<number;
	
	return 0; 
}

bool check(int number){
	int i;
	cout<<"Enter number: "<<endl;
	cin>>number;

	while(1){
	for(int i=0; i<=number; i++){
		if(i%2==0){
			cout<<"Even number: "<<i<<endl;
			}
		}
		break;	
	}	
}

