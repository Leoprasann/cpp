import java.util.Scanner;
class p8
{
public static void main(String []x)
{
char ch;
Scanner s = new Scanner(System.in);
System.out.print("Enter character ");
ch = s.next().charAt(0);
if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
{
System.out.print("This is a Vowel");
}
else
{
System.out.print("This is a consonant");
}
}
}