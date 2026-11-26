#include<iostream>
using namespace std;
//Non Return no Parametor:
//Syntax:
//void FunctionName(){
//  block Code 
//}
void Show(){
	cout<<"Hello World"<<endl;
}

void Sum(){
	int a=10,b=20;
	int sum = a+b;
	cout<<"Sum: "<<sum<<endl;
}

void multi(){
	int num;
	cout<<"Enter Num: ";cin>>num;
	for(int i=1;i<=10;i++){
		cout<<num<<"x"<<i<<"= "<<(num*i)<<endl;
	}
}

void Sum1(){
	int n;int sum=0;
	cout<<"Enter Size to Sum: ";cin>>n;
	for(int i=1;i<=n;i++){
		sum+=i;
		cout<<i<<"+";
	}
	cout<<"\b = "<<sum;
}
int main(){
	Show();
	Show();
	Sum();
	multi();
	Sum1();
	return 0;
}

