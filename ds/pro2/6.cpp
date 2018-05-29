#include<iostream>
using namespace std;
class seven{
	private:
		int a[50],n,i;
	public:
		void getdata();
		void display();
};
void seven::getdata()
{
	bc:
	cout<<"enter the no.of numbers:";
	cin>>n;
	if(n<0)
	{
		cout<<"Invalid Input..."<<endl<<endl;
		goto bc;
	}
	cout<<"Enter the elements:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			cout<<"INvalid input..."<<endl<<endl;
			i--;
		}
	}
}
void seven::display()
{
	int j=0;
	
	for(i=0;i<n;i++)
	{
		if(a[i]%7==0)
		{
			j++;
		}		
	}
	cout<<"\nThe multiples of seven are "<<j<<" \nThe non-multiples of seven are "<<(n-j);

}
int main()
{
	seven x;
	x.getdata();
	x.display();
}
