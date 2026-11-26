#include<iostream>
using namespace std;
//Return Function with Parameter
//Syntax:
//dataType functionName(para1,para2,...,paraN){
//   Block Statements
//}

int Sum(int a,int b){
	return a+b;
}

//Create a Function (Result)
//Have Paramter 3 = Khmer(float) , Math(float) , Physic(float)
//Total(float) = Khmer + Math + Physic
//Average(float) = Total / 3;
//return Average;

// => Main:
//    float result = Result(Argu1 , Argu2, Argu3);
//if  result<=100 && result>=90 print Grade A
//else if result <90 && result>=80 print Grade B
//else if result <80 && result>=70 print Grade C
//else if result <70 && result>=60 print Grade D
//else if result <60 && result>=50 print Grade E
//else print Grade F



int main(){
	cout<<"Sum = "<<Sum(10,7.8);
	
	return 0;
}