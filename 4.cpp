#include<iostream>
using namespace std;
int main()
{
	int num1,a,b;
	cout<<"Tanii oruulsan toog 11 bolon 5 d huwaagddag esehiig shalgay."<<endl;
	cout<< "number: ";
	cin>>num1;
	a=num1%5;
	b=num1%11;
	if(a==0 && b==0){
		cout<<" 5 ba 11 d huwaagddag too baina.";
	}else{
		cout<<"5 ba 11 d huwaagddag too bish baina.";
	}
	
	return 0;
}
