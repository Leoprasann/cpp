#include<iostream>
using namespace std;
int main()

{
 int m,n,p,c;
float a,b,t;
	cout<<"enter the no of 25 paise coins:  ";
	cin>>m;
	cout<<"enter the no of 50 paise coins:  ";
	cin>>n;
	cout<<"enter the no 1 rupee coins:  ";
	cin>>p;
	
	a=m*0.25;
	b=n*0.50;
	c=p*1;
	cout<<"\nthe value of 25 paise coins: "<<a;
	cout<<"\nthe value of 50 paise coins: "<<b;
	cout<<"\nthe value of 1 rupee coins: "<<c;
t=a+b+c;
cout<<"\n the piggy bank collection:  "<<t;
return 0;
 


}

