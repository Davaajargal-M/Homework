#include<iostream>

using namespace std;

int multi(int);
int r;

int main(){
	int r;
	cout<<"Enter radius of a circle: ";
	cin>>r;
	
	cout<<"Diametr:2*r ";
	cout<<multi(r);
	
	return 0;
}

int multi(int r){
	cout<<"Function in D: ";
	return 2*r; 
	cout<<endl;
	
}
