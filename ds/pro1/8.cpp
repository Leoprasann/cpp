#include<iostream>
using namespace std;
int main()
{
	int b,t,basket,tennis,opt,te,ba,mny;
	cout<<"How many basketball and tennis balls you want to buy :";
	cin>>b>>t;
	basket=b*4;
	tennis=t*8;
	cout<<"\nTotal cost for basket ball is:"<<basket<<endl;
	cout<<"\nTotal cost for tennis ball is:"<<tennis;
	cout<<"\nHow much money you had"<<endl;
	cin>>mny;
	ba=mny/4;
	cout<<"\nyou can buy minimum basketballs is"<<ba<<endl;
	te=mny/8;
	cout<<"\nyou can buy minimum tennisball is:"<<te<<endl;
}
