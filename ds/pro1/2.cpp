#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter the Year";
cin>>a;
if(a%4==0||a%400==0&&a%100!=0)
cout<<a<<"  is a leap Year";

else
cout<<a<<"  is not a leap year";
return 0;

}
