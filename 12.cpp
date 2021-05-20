#include<iostream>
using namespace std;
int main()
{
	int month;
	cout<<"enter day month: ";
	cin>>month;
	switch(month){
		case 1:
			cout<<" January contains 31 days. ";
			break;
		case 2:
			cout<<" February contains 28 days.  ";
			break;
		case 3:
			cout<<" March contains 31 days.";
			break;
		case 4:
			cout<<" April contains 30 days.";
			break;
		case 5:
			cout<<" May contains 31 days.";
			break;
		case 6:
			cout<< " June contains 30 days.";
			break;
		case 7:
			cout<<" July contains 31 days.";
			break;
		case 8:
			cout<<" August contains 31 days.";
			break;	
		case 9:
			cout<<" September contains 30 days.";
			break;
		case 10:
			cout<<" October contains 31 days.";
			break;
		case 11:
			cout<<" November contains 30 days.";
			break;
		case 12:
			cout<<" December contains 30 days.";
			break;							
		default:
			cout<<"wrong input";				
			
				
	}
	
	return 0;
}
	
	

