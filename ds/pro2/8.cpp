#include<iostream>
using namespace std;
class even{
	private:
		int a;
		int sum=0;
	public:
		void getdata();
		int count(int n);
		int display();
};
void even::getdata(){
	ac:
	cout<<"Enter the no.of even numbers:";
	cin>>a;
	a=2*a;
	if(a<0)
	{
		cout<<a/2<<" is invalid input "<<endl<<endl;
		goto ac;
	}
}
int even::display()
{
	sum=count(a);
	cout<<"the total sum of "<<a/2<<" even numbers is "<<sum;
}
int even::count(int n){
	if(n==2)
	{
		return 2;
	}
	else if(n==0)
	{
		return 0;
	}
	else
	{
		return n*count(n-2);
	}
	
}
int main()
{
	even x;
	x.getdata();
	x.display();
}
