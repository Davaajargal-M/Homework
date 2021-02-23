#include<iostream>

using namespace std; 
void ssquire(int);
void esquire(int);
void triangles(int);
void trianglee(int);
void ltriangles(int);
void ltrianglee(int);


int main(){
	cout<<"Welcome ^-^ Which are you wanna to print shapes?\n1. Square with star\n2. Square with empty\n3. Right downward triangle with star\n4. Right downward triangle with empty\n5. Left downward triangle with star\n6. Left downward triangle with empty"<<endl;
	cout<<"Enter to number of choice for prior: ";
	int choice; 
	cin>>choice;
	int Size;
	cout<<"Enter you size of shapes: ";
	cin>>Size;
	switch(choice){
		case 1: 
			ssquire(Size);
			break;
		case 2: 
			esquire(Size);
			break;
		case 3: 
			triangles(Size);
			break;
		case 4: 
			trianglee(Size);
			break;
		case 5: 
			ltriangles(Size);
			break;	
		case 6: 
			ltrianglee(Size);
			break;
		default:;
			cout<<"You entered valid number!";
	}
	
	
	return 0;
}

void ssquire(int hemjee){
	for(int i=0; i<hemjee; i++){
		for(int j=0; j<hemjee; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void esquire(int hemjee){
	for(int i=0; i<hemjee; i++){  
		for(int j=0; j<hemjee; j++){
			if(i==0 ||i==hemjee-1||j==hemjee-1|| j==0){
				cout<<"^";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

void triangles(int hemjee){
	for(int i=0; i<hemjee; i++){
		for(int j=0; j<hemjee; j++){
			if(i>=j){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

void trianglee(int hemjee){
	for(int i=0; i<hemjee; i++){		
		for(int j=0; j<hemjee; j++){
			if(j==0||j==i||i==hemjee-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

void ltriangles(int hemjee){
	for(int i=0; i<hemjee; i++){
		for(int k=i+1; k<hemjee; k++){
			cout<<" ";
		}
		for(int j=0; j<i+1; j++){
			cout<<"*";
		}
		cout<<endl;	
	}
}

void ltrianglee(int hemjee){
	for(int i=0; i<hemjee; i++){		
		for(int j=0; j<hemjee; j++){
			if(i==hemjee-j-1||j==hemjee-1||i==hemjee-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}


