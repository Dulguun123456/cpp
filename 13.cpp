#include<iostream>
using namespace std;
int main()
{
	int money,nTavanzuu,nZuu,nTavi,nHory,nArav,nTav,nNeg;
	int tavanzuu=500;
	int zuu=100;
	int tavi=50;
	int hory=20;
	int arav=10;
	int tav=5;
	int neg=1;
	cout<<"Enter number of money: "<<endl;
	cin>>money;
	cout<<"The following is a break down of the least possible number of money."<<endl;
	if(money>0){
		nTavanzuu=money/tavanzuu;
		money=money%tavanzuu;
		
		nZuu=money/zuu;
		money=money%zuu;
		
		nTavi=money/tavi;
		money=money%tavi;
		
		nHory=money/hory;
		money=money%hory;
		
		nArav=money/arav;
		money=money%arav;
		
		nTav=money/tav;
		money=money%tav;
		
		nNeg=money/neg;
		money=money%neg;
		
	if(nTavanzuu !=0 and nTavanzuu>1){
		
		cout<<"500: "<<nTavanzuu<<" shirheg"<<endl;
		}else if(nTavanzuu==1){
		
		cout<<"500: "<<nTavanzuu<<" shirheg"<<endl;
		}else{
		cout<<"500: "<<"0"<< " shirheg"<<endl;
	}
	
	if(nZuu !=0 and nZuu>1){
		
		cout<<"100: "<<nZuu<<" shirheg"<<endl;
		}else if(nZuu==1){
		
		cout<<"100: "<<nZuu<<" shirheg"<<endl;
		}else{
		cout<<"100: "<<"0"<< " shirheg"<<endl;
	}
	
	if(nTavi !=0 and nTavi>1){
		
		cout<<"50: "<<nTavi<<" shirheg"<<endl;
		}else if(nTavi==1){
		
		cout<<"50: "<<nTavi<<" shirheg"<<endl;
		}else{
		cout<<"50: "<<"0"<< " shirheg"<<endl;
	}
	
	if(nHory !=0 and nHory>1){
		
		cout<<"20: "<<nHory<<" shirheg"<<endl;
		}else if(nHory==1){
		
		cout<<"20: "<<nHory<<" shirheg"<<endl;
		}else{
		cout<<"20: "<<"0"<< " shirheg"<<endl;
	}
	
	if(nArav !=0 and nArav>1){
		
		cout<<"10: "<<nArav<<" shirheg"<<endl;
		}else if(nArav==1){
		
		cout<<"10: "<<nArav<<" shirheg"<<endl;
		}else{
		cout<<"10: "<<"0"<< " shirheg"<<endl;
	}
	
	
	if(nTav !=0 and nTav>1){
		
		cout<<"5: "<<nTav<<" shirheg"<<endl;
		}else if(nTav==1){
		
		cout<<"5: "<<nTav<<" shirheg"<<endl;
		}else{
		cout<<"5: "<<"0"<< " shirheg"<<endl;
	}
	
	if(nNeg !=0 and nNeg>1){
		
		cout<<"1: "<<nNeg<<" shirheg"<<endl;
		}else if(nNeg==1){
		
		cout<<"1: "<<nNeg<<" shirheg"<<endl;
		}else{
		cout<<"1: "<<"0"<< " shirheg"<<endl;
	}
	}else{
		
		cout<<"invalid number!"<<endl;
	}
	
	system("pause");
	
	
		
		
		
	return 0;
}
