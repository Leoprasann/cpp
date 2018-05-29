class p1
{
public static void main(String []x)
{
int a[]=new int[10];
int i,n,N;
for(i=0;i<10;i++)
{
a[i]= Integer.parseInt(x[i]);
}
n=a[0];
N=a[0];
for(i=1;i<10;i++)
{
if(n<a[i])
n=a[i];
}
for(i=1;i<10;i++)
{
if(N>a[i])
N=a[i];
}
System.out.println("The biggest of the given numbers is " +n);
System.out.println("The smallest of the given numbers is " +N);
}
}
