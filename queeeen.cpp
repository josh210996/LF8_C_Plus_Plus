    #include<iostream>
	#include<stdio.h>
    #include<conio.h>
    #include<math.h>
    using namespace std;
    int a[30],count=0;
    int place(int pos) {
    	int i;
    	for (i=1;i<pos;i++) {
    		if((a[i]==a[pos])||((abs(a[i]-a[pos])==abs(i-pos))))
    		   return 0;
    	}
    	return 1;
    }
    void print_sol(int n) {
    	int i,j;
    	count++;
    	cout<<"Loesung "<<count<<" :"<<endl;
    	for (i=1;i<=n;i++) {
    		for (j=1;j<=n;j++) {
    			if(a[i]==j)
    			    cout<<(" Q "); else
    			    cout<<(" * ");
    		}
    		cout<<endl;
    	}
    }
    void queen(int n) {
    	int k=1;
    	a[k]=0;
    	while(k!=0) {
    		a[k]=a[k]+1;
    		while((a[k]<=n)&&!place(k))
    		   a[k]++;
    		if(a[k]<=n) {
    			if(k==n)
    			    print_sol(n); else {
    				k++;
    				a[k]=0;
    			}
    		} else
    		   k--;
    	}
    }
    int main() {
    	int i,n;
    	system("CLS");
    	cout<<"Anzahl der Koeniginen: ";
    	cin>>n;
    	queen(n);
    	cout<<"Anzahl der Loesungen: "<<count<<endl;
    	return 0;
    }
