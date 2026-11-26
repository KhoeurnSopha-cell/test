#include<iostream>
using namespace std;
int main(){
	string names[10];
	cout<<"======== Input ========"<<endl;
	for(int i=0;i<3;i++){
		cout<<"Enter Name["<<i<<"]=";cin>>names[i];
	}
	
	cout<<"======== Output ======="<<endl;
	for(int i=0;i<3;i++){
		if(i == 1){
			cout<<"Name["<<i<<"] = "<<names[i];
		}
	}
	
	return 0;
}