#include<iostream>

using namespace std;

//Dictionary

int main(){
	string words[2000][3] = {{"Book","Nom","Kniga"},{"Pencil","Kharandaa","Karandash"},{"Flower","Tsetseg","Tsweti"},{"Rosa","Sarnai","Roza"}};
	int numwords=0;
	string English;
	string Mongolia;
	string Russia;
	int choice;

	//finding how many words
	while(words[numwords][0] != "\0"){
		numwords++;
		}
		while(1){
		cout<<"1.Ugiin sang nem\n2.Ugiin sangaas hasah\n3.Ugiin sang hewleh\n4.Programmaas garah\nTa songoltiin umnuh dugaariig oruulna uu: ";
		cin>>choice;
		cout<<endl;
			if(choice==4){
				break;
			}else if(choice==3){  // print words of dictionary
				cout<<"English"<<"\t\tMongolia"<<"\t\tRussia"<<endl;
				cout<<"-----------------------------------"<<endl<<endl;				
				for(int i = 0; i<numwords; i++){
					cout<<i+1<<"."<<words[i][0]<<"\t\t"<<words[i][1]<<"\t\t"<<words[i][2]<<endl;
				}
				cout<<endl;
			}else if(choice==2){  //deleting words from dictionary
				int numtodelete;
				cout<<"Hasahiig hussen orhuulgiin umnuh dugaariig oruulna uu!: ";
				cin>>numtodelete;
				for(int i = numtodelete -1; i<numwords;i++){
					words[i][0]= words[i+1][0];
					words[i][1]= words[i+1][1];
					words[i][2]= words[i+1][2];
				/*	for(int j = 0; j<2;j++){
						words[i][j] = words[i+1][j];
					} */
					words[numwords-1][0]=="\0";
					words[numwords-1][1]=="\0";
					words[numwords-1][2]=="\0"; 
				}
				numwords--;
				cout<<endl<<"-----------------------------------------"<<endl;
			}else if(choice==1){  // add words to dictionary
				cout<<"English: ";
				cin>>English;
				cout<<"Mongolia: ";
				cin>>Mongolia;
				cout<<"Russia: ";
				cin>>Russia;
				words[numwords][0] = English;
				words[numwords][1] = Mongolia;
				words[numwords][2] = Russia;
				numwords++;
			}else{
				cout<<"Tanii oruulsan songolt buruu bna! Ta dahin oroldono uu."<<endl;
			}	
	}
	cout<<"Manai toli bichgiin programmiig ashiglasand bayarlalaa ^-^ "<<endl;


	return 0;
}
