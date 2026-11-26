#include<iostream>
using namespace std;
int main(){
   //Syntax:
   //dataType arrayName[size] = {value1,value2,...,valueN};
   string names[5] = {"Dara","Sok","Lita","Maly","Net"};
   for(int i=0;i<5;i++){
   	    if(i==0 || i==2 || i==4){
   	 		continue;
	    }
		cout<<"Name["<<i<<"] = "<<names[i]<<endl;
    }
	return 0;
}