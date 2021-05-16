#include<iostream>
using namespace std;
void sayHi(string name,int age)
{
	cout<<"Hello "<<name<<" you are "<<age<<" years old."<<endl;
}
int main()
{
	
	sayHi("Mike",60);
	sayHi("Tom",45);
	sayHi("Sara",30);
	
	return 0;
}
