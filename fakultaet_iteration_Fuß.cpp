#include <iostream>
using namespace std;

int main ()
{
double i,w,fak;							//Datentyp double -> Kommazahlen
char wdh;								//Datentyp char -> Zeichen abc 0123...
do
{
system("CLS");

cout<<"Eingabe Wert zur Fakultaetsberechnung: ";
cin>>fak;
i=fak;
w=fak-1;

do
{
	fak=fak*w;
	w--;
}while(w>1);

cout<<"Ergebnis der Fakultaet von: "<<i<<" = "<<fak<<endl;

cout<<"Wiederholung j/n: ";
cin>>wdh;
}while(wdh=='j');
return 0;
}
