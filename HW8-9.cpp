#include<iostream>
#include<string>

using namespace std; 

int main(){
	string text = "The code includes definitions for 128 characters: most of these are the printable characters of the alphabet such as abc, ABC, 123, and ?&!.";
	int words = 0;
	
	for(int i = 0; i<=text.length(); i++){
		if(text[i]==' ' || text[i]=='\0'){
			words++;
		}
	}
	cout<<"Total words of this text: "<<words;
	
	
	return 0; 
}

