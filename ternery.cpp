#include<iostream>
using namespace std;
int main(){
	// Syntax (if-else) Ternary:
	//string Varable = (condition) ? statementTrue : statementFalse;
	//a=10 , b=20 ,(a<b) true => a<b , false => a==b or a>b
	//note= ?(if) , :(else)
	int a=10,b=20;
	string result = (a<b) ? "a<b" : "a==b or a>b";
	cout<<"Result = "<<result;
	return 0;
}