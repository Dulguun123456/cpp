#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,x;
	cout<<"tseejleh hvrdee oruulna uu: ";
	cin>>a;
	for(x=1;x<=10;x++)
	{
		cout<<setw(5)<<x;
		int hvrd=a*x;
		cout<<setw(5)<<hvrd<<endl;
		
	}
}
