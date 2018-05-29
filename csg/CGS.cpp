#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h>
using namespace std;
string user="LeO",pass="leo";
int a=0;
void calculate()
{
float math,cp,hum,it,dd,roll,s1,s2,s3,s4,s5;
string grade;
float result,numerator,denominator;
string name;
fstream file;
ifstream myfile;
myfile.open("credits.txt");
file.open("studentinfo.txt",ios::out|ios::app|ios::ate);
myfile>>s1;
myfile>>s2;
myfile>>s3;
myfile>>s4;
myfile>>s5;
cout<<"enter the name :\n";
cin>>name;
cout<<"enter the roll number\n";
cin>>roll;
cout<<"enter the grade of the mathematics\n";
cin>>math;
cout<<"enter the grade of the c programming\n";
cin>>cp;
cout<<"enter the grade of the humanities\n";
cin>>hum;
cout<<"enter the grade of the ITworkshop\n";
cin>>it;
cout<<"enter the grade of the digital design\n";
cin>>dd;
if(math<2||cp<2||hum<2||it<2||dd<2)
{
grade="fail";
}
else
{
grade="pass";
}
numerator=(s1*math)+(s2*cp)+(s3*hum)+(s4*it)+(s5*dd);
denominator=s1+s2+s3+s4+s5;
result=(numerator)/(denominator);
cout<<"\n";
file<<"\nName of the student: "<<name<<"\n"<<"Roll no             :"<<roll<<"\n";
file<<"grade of the mathematics: "<<math<<"\n";
file<<"grade of the c programming: "<<cp<<"\n";
file<<"grade of the humanities: "<<hum<<"\n";
file<<"grade of the ITworkshop: "<<it<<"\n";
file<<"grade of the digital design: "<<dd<<"\n"<<"GPA is:  "<<result<<"\n"<<"grade: "<<grade<<"\n";
file.close();
}
void credits()
{
 fstream myfile;
 float s1,s2,s3,s4,s5;
 myfile.open("credits.txt");
 cout<<"\nenter the credits of mathematics  ";
 cin>>s1;
 myfile<<"credits of mathematics  "<<s1<<"\n";
 cout<<"\nenter the credits of c programming  ";
 cin>>s2;
 myfile<<"credits of c programming  "<<s2<<"\n";
 cout<<"\nenter the credits of humanities  ";
 cin>>s3;
 myfile<<"credits of humanities  "<<s3<<"\n";
 cout<<"\nenter the credits of ITworkshop  ";
 cin>>s4;
 myfile<<"credits of ITworkshop  "<<s4<<"\n";
 cout<<"\nenter the credits of digital design  ";
 cin>>s5;
 myfile<<"creditsof digital design  "<<s5<<"\n";
 myfile.close();
}
void login()
{
	string uentered,pentered;
	cout<<"Enter username:";
	cin>>uentered;
	cout<<"Enter password:";
	cin>>pentered;
	if(uentered==user&&pentered==pass)
	{
	a=1;	
	cout<<"Logged in successfully :-...";
	}
	else{
	cout<<"Something went wrong :-( .....";
            }
        cout<<"press enter to continue\n";
        getchar();
       
}
void logout()
{
	a=0;
	cout<<"Logged out successfully :- ...";
}
void viewdetails()
{string line;
ifstream myfile;
myfile.open("studentinfo.txt");
while(getline(myfile,line))
	cout<<line<<endl;
	myfile.close();
}

void viewcredits()
{
string line;
ifstream myfile;
myfile.open("credits.txt");
while(getline(myfile,line))
	cout<<line<<endl;
	myfile.close();
}
int main()
{
        cout<<"\033[2J";
	cout<<"\n\n\t\t\t_________________________________________________________________________________________________\n\t\t\t";
	cout<<"|*---------------------------------------------------------------------------------------------*|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                   course grading system                                     *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
        cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                       By                    *|\n\t\t\t";
	cout<<"|*                                                                                             *|\n\t\t\t";
	cout<<"|*                                                                        LeO                  *|\n\t\t\t";
	cout<<"|*                                                                  	 		      *|\n\t\t\t";
	cout<<"|*_____________________________________________________________________________________________*|\n\n\n\t";
	cout<<"\n\n\n\n\n\n";
        cout<<"press enter to continue................"<<endl;
        getchar();
        menu:
        int m;
cout<<"\033[2J";
cout<<"\n\t\t\t\t-------------------------------MAIN MENU-----------------------------------\n\t\t\t\t";
	cout<<"                                                                         \n\t\t\t\t";
        if(a==0)
	cout<<"                     1. Login(only for faculty members)                  \n\t\t\t\t";
	else
	cout<<"                     1. Logout                                           \n\t\t\t\t";
	cout<<"                                                                         \n\t\t\t\t";
	cout<<"                     2. view credits                                     \n\t\t\t\t";
	cout<<"                                                                         \n\t\t\t\t";
        cout<<"                     3. View grades of students   	                 \n\t\t\t\t";
        cout<<"                                                                         \n\t\t\t\t";
        cout<<"                     4. Exit(exit without logout logsout automatically)  \n\t\t\t\t";
   	cout<<"                        			                         \n\t\t\t\t";
   	cout<<"                                                                         \n\t\t\t\t";
	cout<<"\n\n\n\n\n";
        cout<<"enter the option you choose=";
        cin>>m;
        switch(m)
       { 
        case 1: cout<<"\033[2J";
                                cout<<"logging in........please wait..........";
                                cout<<"\033[2J";
				cout<<"\n\t\t\t\t----------------------------Login Portal--------------------------------\n";
				if(a==0){
				login();
                                if(a==0){goto menu;}
                                getchar();
				goto menu1;}
				else{
				logout();
				getchar();
				goto menu;}
        case 2:
               cout<<"the credits are assigned as...\n";
               getchar();
               viewcredits();
               getchar();
               goto menu;
        case 3:cout<<"press enter to continue..\n";
               getchar();
               viewdetails();
               getchar();
               goto menu;
        case 4:cout<<"\033[2J";
               exit(0);
               break;
       }
        menu1:
        int m1;
        cout<<"\033[2J";
        cout<<"\n\t\t\t\t-------------------------------CONTENTS OF MENU-----------------------------\n\t\t\t\t";
	                        cout<<"                                                                         |\n\t\t\t\t";
				cout<<"                                                                         |\n\t\t\t\t";
				cout<<"                     1.change the credits                                |\n\t\t\t\t";
				cout<<"                                                                         |\n\t\t\t\t";
      			        cout<<"                     2.save & calculate GPA of students                  |\n\t\t\t\t";
   				cout<<"                        			                         |\n\t\t\t\t";
   				cout<<"                     3.go to main menu                                   |\n\t\t\t\t";
   				cout<<"                                                                         |\n\t\t\t\t";
        cout<<"enter the option:";
        cin>>m1;
        switch(m1)
       {
        case 1: credits();
                getchar();
                goto menu1;
        case 2: calculate();
                getchar();
                goto menu1;
        case 3: goto menu;
       }

return 0;
}

