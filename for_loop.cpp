#include<iostream>
using namespace std;
int main(){
	//Syntax:
	//for(start;stop;step){
	     //Loop Statements
	//}or
	
	//start;
	//for(;stop;){
	//   //Loop Statements
	     //Step;
	//}
	for(int i=0;i<5;i++){
		cout<<i+1<<".Hello"<<endl;
	}
	cout<<"==================="<<endl;
	int j=0;
	for(;j<5;){
		cout<<j+1<<".Hello World"<<endl;
		j++;
	}
	
	
	
	return 0;
}