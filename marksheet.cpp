#include<iostream>
using namespace std;
int main(){
	float total_marks, obtain_marks,per;

	cout<<"Enter the Total Marks : ";
	cin>>total_marks;

	cout<<"Enter the Obtain Marks : ";
	cin>>obtain_marks;

	if( total_marks>0){
		per = (obtain_marks/total_marks)*100;
		cout<<"\n--Result--\n";
		cout<<"Total marks : "<<total_marks<<endl;
		cout<<"Obtain marks : "<<obtain_marks<<endl;
		cout<<"Percantage : "<<per<<"%"<<endl;
		
	}	
	return 0;
} 
