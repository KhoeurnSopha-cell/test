#include<iostream>
using namespace std;
//getline()  , cin.ignore()
int main(){
	int id;
	char name2[20];
	cout<<"Enter ID= ";cin>>id;
	cin.ignore();
	cout<<"Enter Name2= ";cin.getline(name2,20);
	cout<<"ID= "<<id<<endl;
	cout<<"Name2 = "<<name2;
    
	return 0;
}