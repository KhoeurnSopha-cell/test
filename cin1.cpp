// id , name , gender, age , phone ,address

#include<iostream>
using namespace std;
int main(){
	int id;
	string name;
	char gender;
	int age;
	string phone;
	string address;
	cout<<"=======Input========="<<endl;
	cout<<"Enter ID: ";
	cin>>id;
	cout<<"Enter Name: ";cin>>name;
	cout<<"Enter Gender: ";cin>>gender;
	cout<<"Enter Age: ";cin>>age;
	cout<<"Enter Phone Number : ";cin>>phone;
	cout<<"Enter Address: ";cin>>address;
	
	cout<<endl;
	cout<<"======Output========="<<endl;
	cout<<"ID : "<<id<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Gender : "<<gender<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Phone Number : "<<phone<<endl;
	cout<<"Address : "<<address<<endl;
	
	return 0;
}