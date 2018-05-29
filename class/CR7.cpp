#include<fstream>
#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std;
string name;
string	user="Leo",pass="leo";
int nolines();
void view(int n);
void registration(int classno);
void record();
void init();
void logout();
void login();
int auth=0;
void rmv();
int main()
{
	cout<<"\033[2J";	
	cout<<"\n\n\t\t\t_________________________________________________________________________________________________\n\t\t\t";
	cout<<"||---------------------------------------------------------------------------------------------||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                    class room allocation system                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
        cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                                                             ||\n\t\t\t";
	cout<<"||                                                               			      ||\n\t\t\t";
	cout<<"||_____________________________________________________________________________________________||\n\n\n\t";
	cout<<"\n\n\n\n\n\n";
	menu:
	cout<<"Press Enter to continue...";	
	getchar();
	cout<<"\033[2J";
	int a,b;
        char c;
	cout<<"\n\t\t\t\t-------------------------------MAIN MENU-----------------------------------\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
        cout<<"|                      	                                                 |\n\t\t\t\t"; 
   	cout<<"|                                                                         |\n\t\t\t\t";
   	cout<<"|                        			                         |\n\t\t\t\t";
   	cout<<"|                                                                         |\n\t\t\t\t";
   	cout<<"|                                                                         |\n\t\t\t\t";
   	cout<<"|                     1. Allocate a class                                 |\n\t\t\t\t";
   	cout<<"|                                                                         |\n\t\t\t\t";
   	cout<<"|                     2. View class  details                              |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
	cout<<"|                     3. Clear  entire details                            |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
	if(auth==0)
	cout<<"|                     4. Login                                            |\n\t\t\t\t";
	else
	cout<<"|                     4. Logout                                           |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
	cout<<"|                     5. Exit                                             |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
	cout<<"|            Note: Exiting program casues logout automatically            |\n\t\t\t\t";
	cout<<"|                                                                         |\n\t\t\t\t";
   	cout<<"|                                                                         |\n\t\t\t\t";
   	cout<<"---------------------------------------------------------------------------\n\n\n\t\t";
	cout<<"\n\n\n\n\n\n";
	redo:	
	cout<<"Enter your option:";
	cin>>a;
	char x;
	switch(a)
{
	      	case 1:     	if(auth==0)
				{
					cout<<"Please Login to continue..";
					getchar();
					goto menu;
				}
				else
				{
				cout<<"\033[2J";
				cout<<"\n\t\t\t\t----------------------------Allocation of  Class--------------------------------\n";
			        c=nolines();				
				registration(c);
				getchar(); 	
				goto menu; 
			    	break;
				}
        	
		case 2:     	cout<<"\033[2J";
			    	cout<<"\n\t\t\t\t----------------------------details of allocated classes--------------------------------\n";
				record();
				getchar();	
				goto menu;
				break;
		
				
		case 3:		if(auth==0)
				{
					cout<<"Please Login to continue...";
					getchar();
					goto menu;
				}
				else
				{
				remove("f2.txt");
				init();
				getchar();
				cout<<"Data removed successfully...";
				goto menu;
				}
		case 4:		cout<<"\033[2J";
				cout<<"\n\t\t\t\t----------------------------Login Portal--------------------------------\n";
				if(auth==0)
				login();
				else
				logout();
				getchar();
				goto menu;
   		case 5  :         cout<<"\033[2J";
				exit(0);
				break;
}
	return 0;
}
void init()
{
	string line;
	string head="class no.	          branch		 capacity of class		";
	fstream a;
	a.open("f1.txt",ios::in);
	getline(a,line);
	if(line!=head)
	{
		a.close();
		a.open("f2.txt",ios::out|ios::app);
		a<<head<<endl;
	}
	a.close();
}
void registration(int classno)
{
	string branch;
	int no,code,capacity;
	fstream a;
	a.open("f2.txt",ios::out | ios::app);
	cout<<"Enter class no.";
	cin>>no;
        a<<no<<"\t\t\t\t";
        cout<<"enter branch   ";
        cin>>branch;
        a<<branch<<"\t\t\t\t";
        cout<<"enter capacity of class";
        cin>>capacity;
        a<<capacity<<"\t\t\t\t";
	a<<endl;
	a.close();
}

void view(int n)
{
	int i;
	string line;
	fstream a;
	a.open("f2.txt",ios::in);
	for(i=0;i<n;i++)
	{
		getline(a,line);
	}
	
	if(!getline(a,line))
	cout<<" ";
	cout<<line<<endl;
	a.close();
}

void record()
{
	string line;
	fstream a;
	a.open("f2.txt",ios::in);
	while(getline(a,line))
	cout<<line<<endl;
	a.close();	
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
	cout<<"Logged in successfully :-D ...";
	}
	else
	cout<<"enterd user name or password is wrong\ntry again :-( .....";
}

void logout()
{
	auth=0;
	cout<<"Logged out successfully :-D ...";
}

void rmv()
{
	fstream a,b;
	string line;
        int no;
	cout<<"Enter classno.:";
	cin>>no;
	a.open("display.txt",ios::in);
	b.open("f3.txt",ios::out);
	while(getline(a,line))
	{
		if(!(line.find(no)!=string::npos))
		{
		b<<line<<endl;
		}
	}
	a.close();
	b.close();
	remove("f2.txt");
	rename("f3.txt","display.txt");
        }

int nolines()
{	
	int nlines=0;
	string line;
	fstream a;
	a.open("f3.txt",ios::in);
	while(getline(a,line))
	nlines++;
	return nlines;
}
