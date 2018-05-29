class Employee
{
int emp_id;
String name;
int salary;
void set(int emp_id,String name,int salary)
{
this.emp_id=emp_id;
this.name=name;
this.salary=salary;
}
void get()
{
System.out.println("Employee id    : " +emp_id);
System.out.println("Employee name  : " +name);
System.out.println("Salary         : " +salary);
}
}
class p3
{
public static void main(String []x)
{
Employee e= new Employee();
e.set(15,"Madhav",100000000);
e.get();
}
}