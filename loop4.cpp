#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter Size: ";cin>>size;
	for(int i=1;i<=size;i++){
	    int j=1;
		for(j ;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}