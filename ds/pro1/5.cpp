#include<iostream>
using namespace std;
int main()
{
	int a[50][50];
	cout<<"\nEnter the square matrix size:\n";
	int n;
	int i,j;
	cin>>n;
	cout<<"Enter the elemnets:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	int zero=0;
	int nonz=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				zero++;
			}
			else
			{
				nonz++;
			}
		}
	}
	cout<<"\nzeros "<<zero<<endl<<"\nnon zeros "<<nonz<<endl;
	if(zero>=nonz)
	{
		cout<<"It's a sparse matrix";
	}
	else
	{
		cout<<"It's not a sparse matrix";
	}
}
