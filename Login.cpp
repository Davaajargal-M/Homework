#include<iostream>

using namespace std;

int main(){
	string registration[500][3]={{"Davaajargal","Davaahai","1234"},{"Sanchir","Saagii","qwer"},{"Boldoo","Bold12","6783dh"}};
	int numreg=0;
	string name;
	string username;
	string password;
	int choice;
		
	while(registration[numreg][0] != "\0")
		numreg++;
		cout<<"Total members: "<<numreg<<endl;
	
	while(1){
		cout<<"1.New member add\n2.Remove to member\n3.Print members list\n4.Out from programm\nEnter for you number of before choice number: ";
		cin>>choice;
		cout<<endl;
		if(choice==4){
			break;
		}else if(choice==3){
				cout<<"Name"<<"\t\t\t"<<"Username"<<"\t\t"<<"Password"<<endl<<endl;
				for(int i=0; i<numreg; i++){
					cout<<i+1<<"."<<registration[i][0]<<"\t\t"<<registration[i][1]<<"\t\t"<<registration[i][2]<<endl;
				}
				cout<<endl;
				}else if(choice==2){
					int numtodel;
					cout<<"Enter for number of delete registration: ";
					cin>>numtodel;
					for(int i=numtodel-1; i<numreg; i++){
						for(int j = 0; j<3; j++){
							registration[i][j] = registration[i+1][j];
							registration[numreg-1][0]="\0";
							registration[numreg-1][1]="\0";
							registration[numreg-1][2]="\0";
						}
						numreg--;
						cout<<endl;		
					}
					
				}else if(choice==1){
					cout<<"Name: ";
					cin>>name;
					cout<<"User name: ";
					cin>>username;
					cout<<"Password: ";
					cin>>password;
					registration[numreg][0] = name;
					registration[numreg][1] = username;
					registration[numreg][2] = password;	
					numreg++;	
					cout<<endl;
				}else{	
					cout<<"You entered wrong number. Could you try again.";
				}			
	}
	
	cout<<"Thank you for visit to my web\n ^-^";
	
	return 0;
}
