#include<iostream>
using namespace std;
int main(){
	//Login Facebook: Username, Email , Password 
	string name,email,pass;
	cout<<"Enter Username: ";cin>>name;
	cout<<"Enter Email: ";cin>>email;
	cout<<"Enter Password: ";cin>>pass;
	if(name == "Sok"){
		if(email == "sok@gmail.com"){
			if(pass=="Sok123"){
				cout<<"Login Success !!!";
			}
			else{
				cout<<"Incorrect Password!!!";
			}
		}
		else{
			cout<<"Incorrect Email!!!";
		}
	}
	else{
		cout<<"Incorrect name!!!";
	}
	
	return 0;
}