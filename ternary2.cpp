#include<iostream>
using namespace std;
int main(){
	// ?(if) , :(else)
	// a=10 , b=20 (a<b) , (a==b) , (a>b)
	
	// variable =  (a<b) ? a<b
	//            :(a==b)? a==b
	//            :a>b  
	
	int a,b;
	cout<<"Enter a = ";cin>>a;
	cout<<"Enter b = ";cin>>b;
	string result = (a<b) ? "a<b"
	               :(a==b)? "a==b"
	               :"a>b";
	cout<<"Result : "<<result;
	return 0;
}