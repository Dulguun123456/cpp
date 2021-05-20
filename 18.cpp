#include<iostream>
using namespace std;
int main()
{
	float cp,sp,p;
	cout<<"baraanii ashig aldagliig todorhoiliy:"<<endl;
	
	cout<<"input cost price:";
	cin>>cp;
	cout<<"input selling price:";
	cin>>sp;
	p=sp-cp;
	if(p>0){
		cout<<"baraanii ashig "<<p;
	}else if(p=0){
		cout<<"baraa ashiggvi "<<p;
	}else {
		cout<<"baraa aldagdaltai "<<p;
	}
	
}
