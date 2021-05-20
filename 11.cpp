#include<iostream>
using namespace std;
int main()
{
/*	int day;
	cout<<" Enter day number:(1--7) ";
	cin>>day;

	if(day==1){
		cout<<day<<" is Monday";
	}else if(day==2){
		cout<<day<<" is Tuesday";
	}else if(day==3){
		cout<<day<< " is Wednesday";
	}else if(day==4){
		cout<<day<<" is Thursday";
	}else if(day==5){
		cout<<day<<" is Friday";
	}else if(day==6){
		cout<<day<<" is Saturday";
	}else if(day==7){
		cout<<day<<" is Sunday";
	}else{
		cout<<day<<" wrong input";
	}
	 */
	
	int day;
	cout<<"enter day number: ";
	cin>>day;
	switch(day){
		case 1:
			cout<<" Monday";
			break;
		case 2:
			cout<<" Tuesday";
			break;
		case 3:
			cout<<" Wednesday";
			break;
		case 4:
			cout<<" Thursaday";
			break;
		case 5:
			cout<<" Friday";
			break;
		case 6:
			cout<< " Saturday";
			break;
		case 7:
			cout<<" Sunday";
			break;
		default:
			cout<<"wrong input";				
			
				
	}
	
	return 0;
}
