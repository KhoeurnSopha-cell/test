// Option (1,2,3,4)
// input Option (1,2,3,4) (int)
// Menu(1,2,3,4)
// Result
// case 1 : Number1
// case 2 : Number2
// case 3 : Number3
// case 4 : Number4
// default : Don't have in case
   


#include<iostream>
using namespace std;
int main(){
	//string option;
	//Input = x
	//Syntax:
   	//switch(option){
   	    //case x:{
   	        //Block Statements
   	        //break;
   	    //}
   	    //case y:{
   	        //Block Statements
   	        //break;
   	    //}
   	    //default:
   	        //Block Statements
    //}
    
    float number1,number2;
    cout<<"======== Calculate ========="<<endl;
    cout<<"Enter Number1 = ";cin>>number1;
    cout<<"Enter Number2 = ";cin>>number2;
    char option;
    cout<<"Enter Option(+,-,*,/) : ";cin>>option;
    switch(option){
    	case '+':{
    		cout<<number1<<"+"<<number2<<" = "<<(number1+number2);
    		break;
		}
		case '-':{
    		cout<<"Number1 - Number2 = "<<(number1-number2);
			break;
		}
		case '*':{
    		cout<<"Number1 * Number2 = "<<(number1*number2);
			break;
		}
		case '/':{
    		cout<<"Number1 / Number2 = "<<(number1/number2);
			break;
		}
		default:
			cout<<"Please try again !!!";
	}
	return 0;
}


