#include<iostream>
using namespace std;
int main(){
	//do while + switch case
	// 1.Input
	// 2.Output
	int option;
	int id;
	string name;
	int age;
	string gender;
	do{
		cout<<"======  Option   ====="<<endl;
		cout<<"======  1.Input  ====="<<endl;
		cout<<"======  2.Output ====="<<endl;
		cout<<"======  0.Exit   ====="<<endl;
		cout<<"Choose Option: ";cin>>option;
		switch(option){
			case 1:{
				cout<<"Enter ID: ";cin>>id;
				cin.ignore();
				cout<<"Enter Name: ";getline(cin,name);
				cout<<"Enter Age: ";cin>>age;
				cout<<"Enter Gender: ";cin>>gender;
				break;
			}
			
			case 2:{
				cout<<"ID: "<<id<<endl;
				cout<<"Name: "<<name<<endl;
				cout<<"Age: "<<age<<endl;
				cout<<"Gender: "<<gender<<endl;
				break;
			}
			
			default:{
				cout<<"Choose Again !!!"<<endl;
				break;
			}
			
		}
		
	}while(option != 0);
	 
    
	return 0;
}