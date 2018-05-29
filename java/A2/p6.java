import java.util.Scanner;
class Students
{
public static void main(String []x)
{
Scanner s = new Scanner(System.in);
int m[]=new int[5];
int a[]=new int[5];
char c[]=new char[5];
int sum = 0;
double gradesum=0;
System.out.println("Enter 5 subject marks");
for(int i=0;i<5;i++)
{
m[i]=s.nextInt();
if(m[i]==0){a[i]=0; c[i]='-';}
else if(m[i]>91 && m[i]<=100) {a[i]=10;c[i]='A';}
else if(m[i]>81) {a[i]=9;c[i]='B';}
else if(m[i]>71) {a[i]=8;c[i]='C';}
else if(m[i]>61) {a[i]=7;c[i]='D';}
else if(m[i]>51) {a[i]=6;c[i]='E';}
else if(m[i]<=51) {a[i]=5;c[i]='F';}
sum+=m[i];
gradesum+=a[i];
}
System.out.println("\n\n\n\n\tSubject\t\tMarks\t\tGrade\t\tPoints\n");
System.out.println("\t-------\t\t-----\t\t-----\t\t------\n\n");
for(int i=0;i<5;i++){
	System.out.println("\t SUB-" +(i+1) +"\t\t" +m[i] +"\t\t" +c[i] +"\t\t" +a[i]);}
	System.out.println("\n\n\t\t\tThe total is : " +(sum) +"\n");
	System.out.println("\n\n\t\t\tThe CGPA is : " +(gradesum/6) +"\n");
}
}