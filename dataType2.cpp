#include<iostream>
using namespace std;
int main(){
	//id , name , gender , khmer,maths,history ,Total Score , Averrage
	int id = 10;
	string name= "Sok Dara";
	char gender= 'M';
	float khmer = 99.5;
	float maths = 80;
	float history = 70;
	
	float total_score = khmer+maths+history;
	float avg = total_score / 3;
	
	bool check = 1;
	
	cout<<"<======Student Information======>"<<endl;
	cout<<"ID= "<<id<<endl;
	cout<<"Name= "<<name<<endl;
	cout<<"Gender= "<<gender<<endl;
	cout<<"Khmer= "<<khmer<<endl;
	cout<<"Maths= "<<maths<<endl;
	cout<<"History= "<<history<<endl;
	cout<<"Total Score= "<<total_score<<endl;
	cout<<"Averrage= "<<avg<<endl;
	
	cout<<"Check = "<<check;
	return 0;
}