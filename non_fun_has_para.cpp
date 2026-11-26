#include<iostream>
using namespace std;
//Non return with parameter
//Syntax:
//void FunctionName(parameter1,parameter2,...,parameterN){
//   Block Code
//}

void sum(int a,int b){ //Parameter
	cout<<"Sum= "<<(a+b)<<endl;
}

void sub(int a,int b,int c,int d){
	cout<<"Sub = "<<(a-b-c-d)<<endl;
}
void fullName(string firstName,string lastName){
	cout<<"Full Name: "<<firstName<<" "<<lastName<<endl;
}

int main(){
	string firstName,lastName;
	cout<<"Enter First Name: ";cin>>firstName;
	cout<<"Enter Last Name: ";cin>>lastName;
	fullName(firstName,lastName);
	
	return 0;
}