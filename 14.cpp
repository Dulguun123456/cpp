#include<iostream>
using namespace std;
int main()
{	
	int fs,ss,ts,triangle;
	cout<<"Gurvaljingiin 3 untsgiig oruul: "<<endl;
	cout<<"input first angle "<<endl;
	cin>>fs;
	cout<<"input second angle "<<endl;
	cin>>ss;
	cout<<"input thirth angle "<<endl;
	cin>>ts;
	
	triangle=fs+ss+ts;
	
	if(triangle=180){
		cout<<"triangle is valid"<<endl;
	}else
		cout<<"triangle is not valid"<<endl;
	
	
	return 0;
}
