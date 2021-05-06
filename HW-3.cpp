#include<iostream>
#include<string>

using namespace std; 

int main(){
	string text = "Easy and fast service, very accurate and powerful.";
	string text1 = "I have been looking for a quick solution to check my IELTS essays for few weeks now.";
	
	for(int i =0; i<text.length(); i++){
		if(text[i]>='a' && text[i]<='z'){
			text[i] = text[i] - 32;
		}
	}
	for(int i =0; i<text1.length(); i++){
		if(text1[i]>='A' && text1[i]<='Z'){
			text1[i] = text1[i] + 32;
		}
	}
	cout<<text<<endl<<endl<<text1;
	
	return 0; 
}

