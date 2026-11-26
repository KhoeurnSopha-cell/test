// 70 - 79 => C
// 60 - 69 => D
// 50 - 59 => E
// 49 - 0 => F

#include<iostream>
using namespace std;
int main(){
	//Input score 
	float s1,s2,s3,s4,s5;
	cout<<"Enter Score 1 = ";cin>>s1;
	cout<<"Enter Score 2 = ";cin>>s2;
	cout<<"Enter Score 3 = ";cin>>s3;
	cout<<"Enter Score 4 = ";cin>>s4;
	cout<<"Enter Score 5 = ";cin>>s5;
	//Total Score
	float total_score = s1+s2+s3+s4+s5;
	//Averrage
	float avg = total_score / 5;
	cout<<"Total Score = "<<total_score<<endl;
	cout<<"Averrage = "<<avg<<endl;
	//Fine Grade with Condition
	if(avg>=90 && avg<=100){
		cout<<"Grade A"<<endl;
	}
	else if(avg>=80 && avg<90){
		cout<<"Grade B"<<endl;
	}
	return 0;
}

