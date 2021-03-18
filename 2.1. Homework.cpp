#include<iostream>

using namespace std;

int wordCount(string); 

int main(){
	string sentence;
	getline(cin, sentence);
	int word;
	word = wordCount(sentence);
	cout<<"Word count: "<<word;

	return 0;
}

int wordCount(string str){
	int count=1;
	for(int i=0; str[i] != '\0'; i++){
		if(str[i] == ' '){	
			count++;
		}	
	}
	return count;
}
