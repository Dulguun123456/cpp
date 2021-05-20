#include<iostream>
using namespace std;
int main()
{
	int ts1,ts2,ts3;
	cout<<"Input first side:";
	cin>>ts1;
	cout<<"Input second side:";
	cin>>ts2;
	cout<<"Input thirth side:";
	cin>>ts3;
	if(ts1+ts2>ts3 and ts1+ts3>ts2 and ts3+ts2>ts1){
		
		cout<<"Triangle is valid"<<endl;
	}else{
		cout<<"Triangle is not valid"<<endl;
	}
	
	
	return 0;
}
