#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Ta 1 shirheg utga oruulna uu (alphabet, number, character)  ";
	cin>>c;
	if(c>='A' and c<='Z'){
		cout<<c<<" it is a alphabet.";
	}else if(c>='a' and c<='z'){
		cout<<c<<" it is a alphabet.";	
	}else if(c=='0'or c=='1'or c=='2'or c=='3'or c=='4'or c=='5'or c=='6'or c=='7'or c=='8'or c=='9'){
			cout<<c<<" it is a number.";	
	}else {
		cout<<c<<" it is a character. ";
	}
	
		
	
	return 0;
}
