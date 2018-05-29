class fact
{
int factorial(int n)
{
int k;
if(n==0)
return 1;
else
k=n*factorial(n-1);
return k;
}
}
class p6
{
public static void main(String []x)
{
fact f1= new fact();
int a=Integer.parseInt(x[0]);
int i;
for(i=0;i<=a;i++)
{
System.out.println("The factorial of " +i +" is " +f1.factorial(i));
}
}
}