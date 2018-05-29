#include<iostream>
using namespace std;
int main()
{    
    
     int s[10],points,sum=0,CGPA,i;
     
	for(i=1;i<=6;i++)
	{   
	      
		cout<<"Enter subject "<< i <<" marks"<<endl;
		cin>>s[i];
		if(s[i]>=91&&s[i]<=100)
		{
			cout<<"Grade = S"<<endl;
			points=10;
			cout<<"Points = "<<points<<endl;
		}
		else if(s[i]>=81&&s[i]<=90)
		{
			cout<<"Grade = A"<<endl;
			points=9;
			cout<<"Points = "<<points<<endl;
		}
		else if(s[i]>=71&&s[i]<=80)
		{
			cout<<"Grade = B"<<endl;
			points=8;
			cout<<"Points = "<<points<<endl;
		}
		else if(s[i]>=61&&s[i]<=70)
		{
			cout<<"Grade = C"<<endl;
			points=7;
			cout<<"Points = "<<points<<endl;
		}
		else if(s[i]>=51&&s[i]<=60)
		{
			cout<<"Grade = D"<<endl;
			points=6;
			cout<<"Points = "<<points<<endl;
		}
		else if(s[i]<50)
		{
			cout<<"Grade = F"<<endl;
			points=5;
			cout<<"Points = "<<points<<endl ;
		}
		else
		{
            cout<<"Invalid	marks";
			 break;
		}			
	   
	   sum=sum+points;
   }
   CGPA=sum/6;
   cout<<"                     CGPA = "<<CGPA;
}


