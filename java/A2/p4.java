import java.util.Scanner;
import java.lang.Math;
class p4
{
public static void main(String []x)
{
Scanner s = new Scanner(System.in);
double a[][] = new double[3][3];
double b[][] = new double[3][3];
double c[][] = new double[3][3];
System.out.println("Enter elements of matrix A");
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
{
a[i][j]=s.nextDouble();
}
System.out.println("Enter elements of matrix B");
for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
{
b[i][j]=s.nextDouble();
}
System.out.println();
System.out.println();

System.out.println("Elements of matrix A are ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
System.out.print(a[i][j]);
System.out.print("  ");
}
System.out.println();
}
System.out.println();
System.out.println();

System.out.println("Elements of matrix B are ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
System.out.print(b[i][j]);
System.out.print("  ");
}
System.out.println();
}
System.out.println();
System.out.println();

System.out.println("Sum of A and B matrices is ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
System.out.print(a[i][j]+b[i][j]);
System.out.print("  ");
}
System.out.println();
}
System.out.println();
System.out.println();


System.out.println("Difference of A and B matrices is ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
System.out.print(Math.abs(a[i][j]-b[i][j]));
System.out.print("  ");
}
System.out.println();
}
System.out.println();
System.out.println();


for(int i=0;i<3;i++)
for(int j=0;j<3;j++)
{
c[i][j]=0;
for(int k=0;k<3;k++)
{
c[i][j]+=a[i][k]*b[k][j];
}
}
System.out.println();
System.out.println();


System.out.println("Multiplication of A and B matrices is ");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
System.out.print(c[i][j]);
System.out.print("  ");
}
System.out.println();
}

}
}
