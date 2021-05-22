#include<iostream>

using namespace std; 

int main(){
	string text = "Able was I ere I saw Elba";
	string change = " ";

	for(int i = 0; i<=text.length(); i++){
		if(text[i]==' '){
			text[i] = text[i+1];
		}else{
			change += text[i];
		}
	}
	cout<<change<<endl<<"------------------------"<<endl;

	for(int i = 0; i<=change.length(); i++){
		if(change[i]>='A' && change[i]<='Z'){
			change[i] = change[i]+32;
		}else{
			change[i] = change[i];
		}
	}
	
	cout<<"Total string number: "<<change.length()<<endl<<"Reverse to same font: "<<change<<endl<<endl;
	
	for(int j=1; j<=change.length()/2; j++){
		if(change[j]==change[change.length()-1-j]){
			cout<<change[j]<<"  ";
			cout<<"That is palondrome string"<<endl;
		}else{
			cout<<change[j]<<"  ";
			cout<<"That is not palondrome string"<<endl;
		}
	}
	
	return 0;
}
