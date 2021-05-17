#include<iostream>
using namespace std;

string getDayofWeek(int dayNum){
	string dayName;

	switch(dayNum){
	case 0:	
		dayName="Sunday";
		break;
	case 1:
		dayName="Monday";
		break;
	case 2:
		dayName="Tuesday";
		break;
	case 3:
		dayName="Wednesday";
		break;
	case 4:
		dayName="Thursday";
		break;
	case 5:
		dayName="Friday";
		break;
	case 6:
		dayName="Saturday";
		break;
	default:
		dayName="Invalid Day Nuber";

	}	
	
	return dayName;

}

int main()
{
	cout<<getDayofWeek(0);
	
	return 0;
}

