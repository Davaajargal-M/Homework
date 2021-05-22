#include<iostream>
#include<string>

using namespace std; 

int main(){
	string text = "Easy and fast service, very accurate and powerful.";
	string text1 = "I have been looking for a quick solution to check my IELTS essays for few weeks now.";
	
	cout<<"Sum texts long:"<<endl<<"Text: "<<text.length()<<endl<<"Text1: "<<text1.length()<<endl;
	
	if(text.length()>text1.length()){
		cout<<"Text more than text1";
	}else{
		cout<<"Text1 more than text";
	}
	
	
	
	return 0; 
}

