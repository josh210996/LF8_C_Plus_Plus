#include <iostream>
using namespace std;


int main()
{
int w,me,rechts=9,links=0, sorti[10]={2,5,7,9,12,43,44,67,87,99};
cout<<"Eingabe des Suchwertes: ";
cin>>w;
while(links<rechts)
{
me=(rechts+links)/2;
	if(w==sorti[me])
	{
		rechts=-10;		//Abbruchbedingung
	}
	else
	{
		if(w<sorti[me])
		{
			rechts=me-1;
		}
		else
		{
			links=me+1;
		}
	}

}
if(rechts==-10)
{
cout<<"Element an der Stelle "<<me+1<<" gefunden"<<endl;
}
else
{
cout<<"kein Ergebnis"<<endl;
}
return 0;
}
