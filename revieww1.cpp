//input number Note: Nested if
//number > 0
    // number < 10
        // output: number > 0 && number <10

#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter number = ";cin>>number;
	if(number > 0){
		if(number < 10){
			cout<<"number > 0 && number <10";
		}
		else{
			cout<<"Please input number < 10";
		}
	}
	else{
		cout<<"Please input number > 0";
	}

	
	
	return 0;
}