#include<iostream>
using namespace std;
int main(){
	//Syntax:
	//DataType ArrayName[size] = {value1,value2,...,valueN};
	//Exercise:
	//Array + Do while loop + Switch Case
	
	int numbers[20];
	int option,size = 0;
	
	do{
		cout<<"\n";
		cout<<"======== Option ========"<<endl;
		cout<<"======== 1.Input ======="<<endl;
		cout<<"======== 2.Output ======"<<endl;
		cout<<"======== 3.Search ======"<<endl;
		cout<<"======== 4.Update ======"<<endl;
		cout<<"======== 5.Delete ======"<<endl;
		cout<<"======== 0.Exit ========"<<endl;
		cout<<"\n";
		cout<<"Choose Option : ";cin>>option;
		switch(option){
			case 1:{
				cout<<"\n";
				cout<<"Enter Size you want: ";cin>>size;
				for(int i=0;i<size;i++){
					cout<<"Number["<<i<<"] = ";cin>>numbers[i];
				}
				break;
			}
			case 2:{
				cout<<"\n";
				for(int i=0;i<size;i++){
					cout<<"Number["<<i<<"] = "<<numbers[i]<<endl;
				}
				break;
			}
			
			case 3:{
				cout<<"\n";
			    int search;
			    bool check = false;
			    cout<<"Enter number you want to search: ";cin>>search;
			    for(int i=0;i<size;i++){
			    	if(search == numbers[i]){
			    		cout<<"Search is found: "<<endl;
			    		cout<<"Number["<<i<<"] = "<<numbers[i]<<endl;
			    		check = true;
					}
				}
				if(!check){
					cout<<"Search not found !!!"<<endl;
				}
				break;
			}
		}
		
	}while(option != 0);
	
	return 0;
}