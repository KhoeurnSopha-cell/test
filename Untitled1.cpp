// Input: Khmer , Maths , Biology , Physic ,History
// total = Khmer+Maths+Biology+Physic+History
// average = total/5;
// 100 - 90
// if (average <= 100 && average >=90) print Grade A
// 80 - 89
// else if (average < 90 && average >=80) print Grade B
// else if (average < 80 && average >=70) print Grade C
// else if (average < 70 && average >=60) print Grade D
// else if (average < 60 && average >=50) print Grade E
// else print Grade F

#include<iostream>
using namespace std;
int main(){
	float khmer,maths,biology,physic,history;
	float total,average;
	cout<<"======== Enter Score ========="<<endl;
	cout<<"Enter Khmer: ";cin>>khmer;
	cout<<"Enter Maths: ";cin>>maths;
	cout<<"Enter Biolgy: ";cin>>biology;
	cout<<"Enter Physic: ";cin>>physic;
	cout<<"Enter History: ";cin>>history;
	total = khmer+maths+biology+physic+history;
	average = total / 5;
	cout<<"======== Result =========="<<endl;
	cout<<"Total: "<<total<<endl;
	cout<<"Average: "<<average<<endl;
	// 100 - 90
	if(average <=100 && average>=90){
		cout<<"Grade A"<<endl;
	}
	// 89 - 80
	else if(average <90 && average>=80){
		cout<<"Grade B"<<endl;
	}
	// 79 - 70
	else if(average <80 && average>=70){
		cout<<"Grade C"<<endl;
	}
	// 69 - 60
	else if(average<70 && average>=60){
		cout<<"Grade D"<<endl;
	}
	// 59 - 50
	else if(average < 60 && average>=50){
		cout<<"Grade E"<<endl;
	}
	// average < 50
	else{
		cout<<"Grade F";
	}
	return 0;
}

