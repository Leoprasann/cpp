class p4
{
public static void main(String []x)
{
int i=0;
double c,a=1,b=1;
System.out.println("The fibanicco series is ");
System.out.print(a +" " +b +" ");
while(i<98)
{
c=a+b;
System.out.print(c +"  ");
a=b;
b=c;
i++;
}
}
}