#include<iostream>
#include<string>

using namespace std; 

int main(){
	string text = "Easy and fast service, very accurate and powerful.";
	string textRe = " ";
	
	for(int i = text.length()-1; i>=0; i--){
		textRe = textRe + text[i];
			text[i]--;
	}
	
	cout<<"Reverse text: "<<textRe;
	
	return 0; 
}

