#include <iostream>
using namespace std;

int main()
{
    int Z1, Z2, Z3, H;
	cout <<"Eingabe Z1: ";	
	cin>>Z1;
	cout <<"Eingabe Z2: ";
	cin>>Z2;
	cout <<"Eingabe Z3: ";
	cin>>Z3;
	if(Z1>Z2) 
	{
		H=Z1;
		Z1=Z2;
		Z2=H;
	}
	if(Z1>Z3)
		{
		H=Z1;
		Z1=Z3;
		Z3=H;
	}
	if(Z2>Z3)
		{
		H=Z2;
		Z2=Z3;
		Z3=H;
	}
	cout<<"Sort. Z1= "<<Z1<< " ""Sort. Z2= "<<Z2<< " " "Sort. Z3= "<<Z3<<endl;
	
return 0;	
}
