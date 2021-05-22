#include<iostream>
#include<string>

using namespace std; 

int main(){
	string text = "Easy and fast service, very accurate and powerful.";
	int vowels = 0, consonants = 0; 
	
	for(int i =0; i<=text.length(); i++){
		if(text[i]>='a' && text[i]<='z' ||text[i]>='A' && text[i]<='Z'){
			if(text[i]=='a' || text[i]=='A' || text[i]=='e' || text[i]=='E' || text[i]=='o' || text[i]=='O' || text[i]=='u' || text[i]=='U' || text[i]=='y' || text[i]=='Y' || text[i]=='i' || text[i]=='I'){
				vowels++;
			}else{
				consonants++;	
			}
		}
	}
	cout<<"Total vowels: "<<vowels<<endl<<"Total consonants: "<<consonants;
	
	
	return 0; 
}

