#include<iostream>
using namespace std;
void Calculate(float num1,float num2,char option){
	switch(option){
		case '+':{
			cout<<num1<<"+"<<num2<<"= "<<(num1+num2);
			break;
		}
		case '-':{
			cout<<num1<<"-"<<num2<<"= "<<(num1-num2);
			break;
		}
		case '*':{
			cout<<num1<<"*"<<num2<<"= "<<(num1*num2);
			break;
		}
		case '/':{
			cout<<num1<<"/"<<num2<<"= "<<(num1/num2);
			break;
		}
	}
}

int main(){
	float num1,num2;
	char op;
	cout<<"Enter Num1: ";cin>>num1;
	cout<<"Enter Num2: ";cin>>num2;
	cout<<"Choose Option(  +,-,*,/) : ";cin>>op;
	
	Calculate(num1,num2,op);
	
	return 0;
}