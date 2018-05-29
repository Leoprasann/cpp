class member
{
char name[15];
char Accno[10];
double balance;
void createAcc(char name[15],char Accno[10],double balance)
{
this.name=name;
this.Accno=Accno;
this.balance=balance;
}
void dispAcc()
{
System.out.println("Account no         : " +Accno);
System.out.println("Account holder name: " +name);
}
}
class interest extends member
{
double principle,rate;
int years;
void Simple()
{
double SI= 
}