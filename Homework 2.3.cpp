#include<iostream>
#include<string>

using namespace std; 

int main(){
	string str = "The Bogey Beast by Flora Annie Steel. A woman finds a pot of treasure on the road while she is returning from work.";
	string del ="";  
	cout<<"First version: "<<endl<<str<<endl<<endl;
	cout<<"A, a alphabetics delete version: "<<endl;
	 
	for(int i=0; i<str.size(); i++){
		if(str[i]=='a'||str[i]=='A'){
			str[i]=str[i+1];
		}else{
			cout<<str[i];
			}
		}
		
	return 0;
}
