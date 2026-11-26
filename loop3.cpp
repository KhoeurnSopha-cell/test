#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n=5;
	string name;
	float score1,score2,score3;
	float total,avg;
	for(int i=1;i<=n;i++){
		cout<<"==== Student["<<i<<"] ====="<<endl;
		cout<<"Enter Name : ";getline(cin,name);
		cout<<"Score1 = ";cin>>score1;
		cout<<"Score2 = ";cin>>score2;
		cout<<"Score3 = ";cin>>score3;
		total=score1+score2+score3;
		avg=total/3;
		cout<<"Total Score = "<<total<<endl;
		cout<<"Averrage = "<<avg<<endl;
		cout<<"========================="<<endl;
		cout<<endl;
	}
	
	
	return 0;
}