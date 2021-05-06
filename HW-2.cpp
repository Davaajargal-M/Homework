#include<iostream>
#include<string>

using namespace std; 

int main(){
	string text = "Easy and fast service, very accurate and powerful.";
	string text1 = "I have been looking for a quick solution to check my IELTS essays for few weeks now.";
	
	
	for(int i =0; i<text.length(); i++){
		text1 = text1 + text[i];
	}
	cout<<text1<<endl;
	cout<<"Sum texts count:"<<text.length()<<"-----"<<text1.length();
	
	return 0; 
}

