#include <iostream>
#include <stdlib.h>
# include<stdlib.h>
# include<time.h>
using namespace std;

int main()						//Hauptfunktion
{
char ip[40];

char hex;										
int i=0,x,y,n=0, zw, in=2;
srand( (unsigned)time( NULL ) );


cout<<"IPv6 per Zufall erstellen :"<<endl;




cout<<"IPv6-Adresse:  			";
	
		for(x=0;x<8;x++)
		{
			for(y=n;y<(n+4);y++)
			{
			zw=rand()%16;
			if(zw==0)hex='0';
			if(zw==1)hex='1';
			if(zw==2)hex='2';
			if(zw==3)hex='3';
			if(zw==4)hex='4';
			if(zw==5)hex='5';
			if(zw==6)hex='6';
			if(zw==7)hex='7';
			if(zw==8)hex='8';
			if(zw==9)hex='9';
			if(zw==10)hex='A';
			if(zw==11)hex='B';
			if(zw==12)hex='C';
			if(zw==13)hex='D';
			if(zw==14)hex='E';
			if(zw==15)hex='F';

			ip[y]= hex;	cout<<ip[y];
			
			}
			n=n+4;
			if(n<39) ip[n]=':';cout<<ip[n];
			n++;			
		}


return 0;
}
