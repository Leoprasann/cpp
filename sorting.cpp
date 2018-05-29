#include <iostream>
using namespace std;
int main()
//this cheaks a leap year//
{
	int n=10;
	int a[n]={9,2,6,4,8,3,7,5,1,0};
	int exchanged=1;
	while(exchanged)
  {
	exchanged=0;
	for(int i=0;i<n-1;i++)
     {

	if (a[i]>a[i+1])
        {
	int temp;
	temp=a[i];T
	a[i]=a[i+1];
	a[i+1]=temp;
	exchanged=1;
	}
     }
  }
}
