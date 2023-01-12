#include <iostream>
using namespace std;
double div (double d, double e); //Funktion muss genauso wie unten definiert werden, sonst wird die Funktion nicht erkannt!
int main ()

{

double a,b,c;	//Definition nur der in "int main ()" genutzten Variablen, KEINE Funktionen hier definieren


cout <<"Eingabe Variable A: ";
cin>>a;
cout <<"Eingabe Variable B: ";
cin>>b;
c=div(a,b);

cout<<"Ergebnis der Division: "<<c<< endl;
return 0;
}

double div (double d, double e)

{
double f;	//d,e sind bereits in Z.3 definiert 
f=d/e;
return f;
}
