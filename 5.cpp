#include<iostream>
using namespace std;
int main( )
{	
	int num1,result;
	cout<<"Tanii oruulsan toog eyreg suruguurn yalgah bolno."<<endl;
	cout<<"number: ";
	cin>>num1;
	result=num1%2;
	if(result>0){
		cout<<"Tanii oruulsan too sondgoi baina.";
	}else{
		cout<<"Tanii oruulsan too tegsh baina.";
	} 
	
	return 0;
}
