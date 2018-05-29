class area
{
void areas(double r)
{
double A=3.14*r*r;
System.out.println("The area of the circle is " +A);
}
void areas(double l,double b)
{
double A= l*b;
System.out.println("The area of the rectangle is " +A);
}
void areas(int a)
{
double A= a*a;
System.out.println("The area of the square is " +A);
}
}

class p1
{
public static void main(String []x)
{
area a= new area();
a.areas(2.0);
a.areas(2);
a.areas(4.5,3);
}
}