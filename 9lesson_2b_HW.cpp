#include<iostream>

using namespace std;

double multi(int);

int main(){
	int r;
	cout<<"Enter radius of a circle: ";
	cin>>r;
	
	cout<<"Circumference:2*r*pi ";
	cout<<multi(r);
	
	return 0;
}

double multi(int r){
	cout<<"Function in C: ";
	return 2*3.14*r;
}
