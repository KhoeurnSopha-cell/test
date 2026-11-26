#include <iostream>
using namespace std;

int main() {
	int option;
	int id;
	string name;
    do{
    	cout<<"========= Option ========"<<endl;
    	cout<<"========= 1.Input ======="<<endl;
    	cout<<"========= 2.Output ======"<<endl;
    	cout<<"Choose Option: ";cin>>option;
    	switch(option){
    		case 1:{
    			cout<<"Enter ID: ";cin>>id;
    			cout<<"Enter Name: ";cin>>name;
				break;
			}
			case 2:{
    			cout<<"ID: "<<id<<endl;
    			cout<<"Name: "<<name;
				break;
			}
		}
    	
        	
	}while(option != 0);

    return 0;
}