class p5
{
public static void main(String []x)
{
int i,r,f=1;
System.out.println("The prime no.s below 100 are ");
for(i=1;i<=100;i++)
{
for(r=2;r<i;r++)
{
if(i%r==0)
{  
f=3;
break;
}
} 
if(f==1)
{
System.out.print(" " +i);
}
f=1;
}
}
}