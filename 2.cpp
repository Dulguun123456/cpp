#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Ta gurvan too oruulna uu: (ih bagiign oloh bolno)"<<endl;
	cout<<"First number:";
	cin>>num1;
	cout<<"Second number: ";
	cin>>num2;
	cout<<"Thirth number: ";
	cin>>num3;
	if(num1>num2||num1>num3){
		
		cout<<"Maximum="<<num1;
	}else if(num2>num1||num2>num3){
		cout<<"Maximum="<<num2;
	}else{
		cout<<"Maximum="<<num3;
	}
	return 0;  
}
