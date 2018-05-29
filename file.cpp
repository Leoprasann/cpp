#include<iostream>
using namespace std;
int main()
{	
	int row,colums,print,number;
	cout<<"enter the number";
	cin>>number;
	for(row=1;row<=number;row++)
	{
		for(print=0;print<row;print++)
		
		for(colums=0;colums<(print-row);colums++)
		cout<<number;
		
		cout<<endl;

	}
return 0;

}

