#include<iostream>
using namespace std;
// Pass by Reference
void Swap(int &a,int &b){
	int temp = a;
	a = b;
	b = temp;
}
int main(){
    int a=10,b=20;
    cout<<"Before Swap : "<<endl;
    cout<<"a= "<<a<<",b= "<<b<<endl;
    Swap(a,b);
    cout<<"After Swap : "<<endl;
    cout<<"a= "<<a<<",b= "<<b<<endl;
	return 0;
}
