#include<iostream>

using namespace std;

void prime(int);

int main(){
	cout<<"Enter range x to y"<<endl;    
    int x, y;
    cout<<"Enter min x: ";
    cin>>x;
    cout<<"Enter max y: ";
	cin>>y;
	cout<<endl;
    cout<<"Prime numbers between "<<x<< " and "<<y<<" are: "<<endl;

    for(int i=x;i<=y;i++)
        prime(i);

    return 0;
}
 
 
void prime(int num){
	int a=0; //huwaagch too
		for(int i=1; i<=num; i++){
            if(num%i==0)
                a++;
        	}	
        if(a==1||a==2)
            cout<<num<<", ";
    	}
