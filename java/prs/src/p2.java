import java.lang.Math;
class p2
{
public static void main(String []x)
{
int a[]=new int[10];
int i,n,N,sum=0;
for(i=0;i<10;i++)
{
a[i]= Integer.parseInt(x[i]);
}
for(i=0;i<10;i++)
{
sum+=a[i];
}
n=a[0];
N=a[0];
for(i=0;i<9;i++)
{
n=Math.max(a[i],a[i+1]);
}
for(i=0;i<9;i++)
{
N=Math.min(a[i],a[i+1]);
}
System.out.println("The biggest of the given numbers is " +n);
System.out.println("The smallest of the given numbers is " +N);
System.out.println("The average of the given numbers is " +(sum/10));
}
}
