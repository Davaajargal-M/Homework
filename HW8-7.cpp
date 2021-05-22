#include<iostream>
#include<string>

using namespace std; 

int main(){
	string text = "I have been looking for a quick solution to check my IELTS essays for few weeks now.";
	string textRev = "";
	
	for(int i =0; i<text.length(); i++){
		if(text[i]>='a' && text[i]<='z'){
			textRev[i] = text[i] - 32;
			textRev = textRev + textRev[i];
			}
		else if(text[i]>='A' && text[i]<='Z'){
			textRev[i] = text[i] + 32;
			textRev = textRev + textRev[i];	
		}else{
			textRev[i] = text[i];
			textRev = textRev + textRev[i];
			}
		}
	cout<<textRev;
	
	return 0; 
}

