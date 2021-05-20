#include<iostream>
using namespace std;
int main()
{	
	float ph,ch,m,co,tg;
	cout<<"physics: ";
	cin>>ph;
	cout<<"chemistry: ";
	cin>>ch;
	cout<<"mathematic: ";
	cin>>m;
	cout<<"computer: ";
	cin>>co;
	tg=(ph+ch+m+co)/4;
	cout<<"Total average grade : "<<tg<<"%"<<endl;
	if(tg>=90){
		cout<<"Tanii dundaj vnelgee A buyu "<<tg<<"% tand bayr hvrgey";
	}else if(tg>=80){
		cout<<"Tanii dundaj vnelgee B buyu "<<tg<<"% tand bayr hvrgey";
	}else if(tg>=70){
		cout<<"Tanii dundaj vnelgee C buyu "<<tg<<"% ta hicheegeerei";
	}else if(tg>=60){
		cout<<"Tanii dundaj vnelgee D buyu "<<tg<<"% ta hicheegeerei";
	}else 
		cout<<"Tanii dundaj vnelgee F buyu "<<tg<<"% ta hicheegeerei";
	
	
	
	
	return 0;
		
}
