#include<iostream>
using namespace std;
int main()
{
	int year,result;
	cout<<"Enter year: ";
	cin>>year;
	/*
	result=year%4;  //4 jild 1 udaa undur jil boldog 2020 ond bolson.
	if(result>0){
		cout<<"Undur jil bish baina.";
	}else{
		cout<<"Undur jil baina.";
	}
	*/
	if(year%4==0){
		cout<<year<<" is leap year.";
	}else{
		cout<<year<<" is not leap year.";
	}
	
	
	return 0;
}
