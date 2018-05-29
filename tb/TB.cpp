#include<fstream>
#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std;
string	user="LeO",pass="leo";
void logout();
void login();
int auth=0;
void booking();
void viewinfo();
void viewhistory();
int main()
{
string line;
cout<<"\033[2J";
cout<<"\n\n\t\t\t_________________________________________________________________________________________________\n\t\t\t";
	cout<<"||---------------------------------------------------------------------------------------------||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                  COMPUTER TERMINAL BOOKING SYSTEM                           ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||---------------------------------------------------------------------------------------------||\n\t\t\t";
	cout<<"___________________________________________________________________________________________________\n\t\t\t";
menu:
	cout<<"Press enter to continue...";

	getchar();
	int a,b,c;
	cout<<"*********************************************************************************************************************************************** \n";
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"------------------------------------------------------------------------- MAIN MENU------------------------------------------------------------ \n";
	cout<<"						  						       	   \n";	
	if(auth==0)
	cout<<"						  		 1.LOGIN       			           \n";
	else
	cout<<"						 		 1.LOGOUT			           \n";
	cout<<"								                               	           \n";
	cout<<"						 		 2.INFO			       	           \n";
	cout<<"						 					       	           \n";
	cout<<"						 		 3.BOOK A TERMINAL	                   \n";
	cout<<"						 					        	   \n";
	cout<<"						 	         4.VIEW THE BOOKINGS          	           \n";
	cout<<"						 			 			           \n";
	cout<<"						 		 5.EXIT	                	           \n";
	cout<<"						 			 	  	       		   \n";
	cout<<"						 				               		   \n";
	cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------\n";
cout<<""<<endl;
	cout<<"***********************************************************************************************************************************************\n\n\n\n\n";
      again:
	cout<<"Enter your option:";
	cin>>a;
	switch(a)
{
		case 1:         cout<<"\n\n\n\n\n";
				cout<<"\n\t\t\t\t ---------------------------   LOGIN   ---------------------------------------\n";
				if(auth==0)
				login();
				else
				logout();
				getchar();
				goto menu;
	      	case 2:     	cout<<"\n\n\n\n\n";
				if(auth==0)
				{
					cout<<"Please Login to continue..\n";
					getchar();
cout<<"\033[2J";
					goto menu;
				}
				else
				cout<<"\n -----------------------------INFO ---------------------------------- \n";
				viewinfo();
				goto menu;
			    	break;
        	case 3:         cout<<"\n\n\n\n\n";
				cout<<"\n\t\t\t\t --------------------------- Book a Terminal  ------------------------------\n";
				booking();
				getchar();
		            	goto menu;
			        break;
		case 4:     	cout<<"\n\n\n\n\n";
			    	cout<<"\n\t\t\t\t---------------------------- View the bookings ----------------------------\n";
				viewhistory();
				getchar();
		            	goto menu;
			        break;
                case 5:        
				exit(0);
				break;
default:
cout<<" Entered option is invalid \n";
cout<<" Choose correct option  \n";
goto again; 
}
}

int lines(int n)
{
	ifstream a;
	int i=0;
	string b;
	if(n==1)
	a.open("file1.txt");
	else if(n==2)
	a.open("file2.txt");
	else if(n==3)
	a.open("file3.txt");
	else if(n==4)
	a.open("file4.txt");
	while(getline(a,b))
	i++;
	return i;
}

void booking()
{
	long long phno;
	string name;
	int session,l;
	cout<<" Enter the session number \n";
	cin>>session;
	fstream a;
	if(session>0&&session<=4)
	{
	l=lines(session);
	if(l<102)
	{
	if(session==1)
	a.open("file1.txt",ios::out|ios::app);
	else if(session==2)
	a.open("file2.txt",ios::out|ios::app);
	if(session==3)
	a.open("file3.txt",ios::out|ios::app);
	if(session==4)
	a.open("file4.txt",ios::out|ios::app);
	cout<<" Enter the phone number"<<"\n";
	cin>>phno;
        cout<<" Enter the name of the student"<<"\n";
	cin>>name;
	cout<<"\n You have booked successfully  ";
	cout<<name<<endl<<phno<<endl<<name;
	a<<name<<"\t";
	a<<phno<<"\t"<<endl;
	a.close();
	}
	else
	cout<<"No vacany \n";
	}
	else
	{
 	cout<<"Wrong details entered \n";
	}
}
void viewinfo()
{
	string line;
	fstream c;			
        c.open("file1.txt",ios::in);			
        while(getline(c,line))
	cout<<line<<endl;
	c.close();
}
void viewhistory()
{
	string line;
	int session;
	cout<<" Enter the session number\n";
	cin>>session;
	if(session>4)
	{
 	cout<<"Wrong Session number\n";
	}
	if (session==1)
	{
	fstream c;
	c.open("file1.txt",ios::in);
	while(getline(c,line))
	cout<<line<<endl;
	c.close();
	}
	if (session==2)
	{
	fstream c;
	c.open("file2.txt",ios::in);
	while(getline(c,line))
	cout<<line<<endl;
	c.close();
	}
	if (session==3)
	{
	fstream c;
	c.open("file3.txt",ios::in);
	while(getline(c,line))
	cout<<line<<endl;
	c.close();
	}
	if (session==4)
	{
	fstream c;
	c.open("file4.txt",ios::in);
	while(getline(c,line))
	cout<<line<<endl;
	c.close();
	}
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
	auth=1;	
	cout<<"Logged in successfully    \n";
	}
	else
	cout<<" invalid    \n\n";
}
void logout()
{
	auth=0;
	cout<<"Logged out successfully     \n\n";
}



