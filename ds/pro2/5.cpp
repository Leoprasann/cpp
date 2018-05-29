#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int o,e,n,d,h;
	cout<<"\nenter the date in april : ";
	cin>>d;
	cout<<"\n no. of holidays : ";
	cin>>h;
	if(h+d<=30)
	cout<<"the date of reopening"<<d+h<<"/4";
	if(h+d>30 && h+d<=61)
	cout<<"the date of reopening"<<d+h-30<<"/5";
	if(h+d>61 && h+d<=91)
	cout<<"the date of reporting"<<h+d-61<<"/6"<<endl;
	else if(h+d>91)
	cout<<"If You take that many 'HOLIDAYS', Better to not come to school \n Enter valid date "<<endl;
}

   
    
	
	
