#include<iostream>
using namespace std;
int main()
{	
	float fs,ss,ts,et;
	
	cout<<"tegsh untsugt Gurvaljin boloh esehiig todorhoiliy: "<<endl;
	cout<< "input first side:";
	cin>>fs;
	cout<< "input second side:";
	cin>>ss;
	cout<<"input thirth side:";
	cin>>ts;
	et=fs*fs+ss*ss-ts*ts;//equilateral triangle
	if(et==0){
		cout<<"Triangle is equilateral triangle";
	}else{
		cout<<"Triangle is not equilateral triangle";
	}
	
	
	
	
	return 0;
}
