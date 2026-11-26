#include<iostream>
using namespace std;
//Return Function no Para:
//Syntax:
//dataType FunctionName(){
//    return value;
//}

//a=19.99 , b=8.5;
// => a+b
float Sum(){
	float a=19.99,b=8.5;
	return a+b;
}

string FullName(){
	string firstName = "Sok";
	string lastName = "Dara";
	string fullName = firstName+" "+lastName;
	return fullName;
}
int main(){
	string delete1 = FullName().erase(6,1);
	cout<<"Full Name(delete) = "<<delete1<<endl;
	
	string insert = delete1.insert(6,"r");
	cout<<"Full Name(insert): "<<insert;
	return 0;
}

