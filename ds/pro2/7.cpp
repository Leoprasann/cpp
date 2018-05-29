#include<iostream>
#include<math.h>
using namespace std;
class ground{
	private:
		int rad,speed,sec;
		float cir;
	public:
		void getdata();
		void display();
};
void ground::getdata(){
	ac:
	cout<<"Enter the radius of ground:";
	cin>>rad;
	if(rad<0)
	{
		cout<<"Invalid Input..."<<endl<<endl;
		goto ac;
	}
	bc:
	cout<<"Enter the speed of bike in m/s:";
	cin>>speed;
	if(speed<0)
	{
		cout<<"Invalid Input..."<<endl<<endl;
		goto bc;
	}
	
}
void ground::display()
{
	cir=(float)rad*2*3.14;
	sec=ceil(cir/speed);
	cout<<" time to compleate Ride "<<sec<<" seconds ";
	
}
int main()
{
	ground x;
	x.getdata();
	x.display();
}

