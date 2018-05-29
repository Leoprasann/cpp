#include<iostream>
using namespace std;
int main()
{
	static int i=0;
	i++;
	cout<<i;
	cout<<" this is a test program \n";
	main();
	return 0;

}
