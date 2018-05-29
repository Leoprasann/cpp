 #include<iostream>
using namespace std;
int main()
{
	int x1,x2,a,b,y1,y2,c;
	cout<<"\nEnter the values x1 and x2 : \n";
	cin>>x1>>x2;
	cout<<"\nEnter the values of y1 and y2 :\n "<<endl;
	cin>>y1>>y2;
	a=y2-y1;
	b=x2-x1;
	c=a/b;
	cout<<"\nSlope of a line is"<<c<<endl;
}
