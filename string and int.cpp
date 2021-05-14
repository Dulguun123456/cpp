#include<iostream>
using namespace std;
int main()
{	
	
	int age;
	string name,sex,yn;
	bool	bt;
	char er;
	float bodytempratur;
	cout<<"Sain bna uu erhmee tanii ner hen be:";
	cin>>name;
	cout<<"Erhem hvndet "<<name<<" tanii nas hed we(too bichne vv): ?";
	cin>>age;
	if(age<6)
	{
		cout<<name<< " ta"<<" tesetserlegt yawdag uu?(tiim/vgvi) ."<<endl;
	}
		
	else if(age<12)
	{
		cout<<name<<" ta"<<"  baga surguulid surdag uu?(tiim/vgvi)."<<endl;
		
	}
	
	else if(age<16)
	{
		cout<<name<<" ta "<<"  dund surguuliin suragch uu ?(tiim/vgvi)"<<endl;
	}
	else if (age<=18)
	{		
		 cout<<name<<" ta "<<"  ahlah surguuliin suragch uu ?(tiim/vgvi)"<<endl;
	}
	else if(age<=22)
	{
		cout<<name<<" ta "<<" oyutan uu ?(tiim/vgvi)"<<endl;
	}
	
	else if(age<54)
	{
		cout<<name<<" ta "<<" hudulmur erheldeg hvn vv ?(tiim/vgvi)"<<endl;
	}
	
	else if(age>55)
	{
		cout<<name<<" ta "<<" ta undur nastan uu vv ?(tiim/vgvi)"<<endl;
	}
	
	cin>>yn;
	
	cout<<"ta bieiin haluunaa vzvvlsen vv (vgvi=0;tiim=1)";
	cin>>bt;
	if(bt<1)
	{
		cout<<"ta bieiin haluunaa vzvvlne vv?"<<endl;
	}
	else
	{
		cout<<"tanii bieiin haluun hed bsn be?(toogoor bichne vv) ";
	}
	
	cin>>bodytempratur;
	
	if(bodytempratur>=37)
	{
		cout<<"Ta biee emchid vzvvlne vv?";		
	}	
	else
	{
		cout<<"ta manai hvleen awah ajilchintai ochij uulzana uu tand bayrlalaa";
	}
	
	
	
	

		
	return 0;
}
