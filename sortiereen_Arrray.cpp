#include<iostream>	
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
srand( (unsigned)time( NULL ) );		//Zufallsgenerator											

int i=0, feldende, max=0;
cout<<"Eingabe Wert Feldende zwischen 2 und 100: ";
cin>>feldende;
int b_sort[feldende];
while (i<feldende)
{

if (feldende<101)
	{
		b_sort[i]=rand()%100;			//zufallswert von 0 bis 99
		cout<<b_sort[i]<<" ";
		i++;
		
	}
	
}
else
{
	cout<<"Machs nochmal, Arschloch!";
cout<<endl;
i=0;

while(i<feldende)
{
	if(b_sort[i]>max)	
	{
		max=b_sort[i];
	}
	i++;
}
cout<<"Max-Wert: "<<max<<endl;				
return 0;	
}

