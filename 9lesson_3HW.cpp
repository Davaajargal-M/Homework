#include<iostream>

using namespace std;

int multi(double m);
int multi(int n);

int main(){
	double m; 
	int n;
	
	cout<<"max number of collection: ";
	cout<<multi(m)<<endl;
	
	cout<<"min number of collection: ";
	cout<<multi(n)<<endl;
	
	return 0;
}

int multi(double m){
	double collection[100]={12, 124, -56, 2344, 678, 0, 13.6, 190.23, 23, 34, 3l};
	m = collection[0]; 
	
	if(collection[1]>m){
		m =collection[1];
	}
	
	for(int i=2; i<100; i++){
		if(collection[i]>m){
			m =collection[i];
		}	
	}
	return m;
}

int multi(int n){
	double collection[100]={12, 124, -56, 2344, 678, 0, 13.6, 190.23, 23, 34, 3l};
	n = collection[0];
	
	if(collection[1]<n){
		n = collection[1];
	}
	for(int i=2; i<100; i++){
		if(collection[i]<n){
			n = collection[i];
		}
	}
	return n;
}


