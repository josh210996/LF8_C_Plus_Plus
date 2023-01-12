
#include<iostream>
using namespace std;

int main()
{	
double *zei1,*zei2,*feld[5], z, y;
double x;

cin>>x;
cin>>y;
zei1=&x;
zei2=&y;
z= x+y;
cout<<"Wert an der Adresse von x: "<<*zei1<<endl;
cout<<"Wert an der Adresse von y: "<<*zei2<<endl<<endl;
cout<<"Adresse von Zeiger 1: "<<&zei1<<endl;
cout<<"Adresse von Zeiger 2: "<<&zei2<<endl<<endl;
cout<<"Adresse von Zeiger 2: "<<&zei2<<endl<<endl;
cout<<"x+y : "<<z<<endl;
for(int i=0;i<5;i++)
	cout<<&feld[i]<<endl;
cout<<endl<<endl;
cout<<"Adresse von Zeiger 1: "<<&zei1<<endl;
*zei1=*zei1+ *zei2;
cout<<"Wert hinter Zeiger 1: "<<*zei1<<endl<<endl;
cout<<"X: "<<x<<endl;
system("PAUSE");
return 0;
}
