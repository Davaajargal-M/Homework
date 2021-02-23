#include<iostream>

using namespace std; 

int zeregt(int, int);

int main(){
	int base, power;
	cout<<"Base: ";
	cin>>base;
	cout<<"Power: ";
	cin>>power;
	
	
	int hariu = zeregt(base, power);
	cout<<base<<"^"<<power<<" = " <<hariu;

	return 0; 
}

int zeregt(int suuri, int zereg){
	int hariu = 1;
	for(int i=0; i<zereg; i++){
		hariu = hariu*suuri;
	}
	return hariu;
	
}
