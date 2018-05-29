class p7
{
public static void main(String []x)
{
String s=x[0],r="",k;
int i,j;
char c1[]=new char[s.length()];
for(i=0;i<s.length();i++)
c1[i]=s.charAt(i);
for(i=s.length()-1;i>=0;i--)
{
r+=c1[i];
}
if(s.equalsIgnoreCase(r))
System.out.println("The given string is a palindrome");
else
System.out.println("The given string is not a palindrome");
}
}