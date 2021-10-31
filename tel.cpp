#include<iostream>
#include<string.h>
using namespace std;

class telno
{
  public:
  char name[30];
  int i;
  long no,no1;
  static int cnt;
  int insert();
  int display();
  static int count();
};

int telno::insert()
{
  cout<<"\n\t Enter the Name : \n";
  cin>>name;
  cout<<"\n\t Entert the Telephone No\n";
  cin>>no;
}

int telno::display()
{
  cout<<"\n\t"<<this->name;
  cout<<"\t"<<this->no;
}

int telno::cnt=0;
int telno::cout()
{
  cnt++;
  return cnt;
}

int main()
{
  int ch,ch1,i,n=0,op,flag=0;
  long no,no1;
  telno ob[50];
  char name[15];
  
  do
  {
	cout<<"\n\t\t Menu";
  	cout<<"\n\n1) Insert\n2)Display\n3)Search Name Record\n4)Search Phone Record\n5)Update\n";
	cout<<"\n\nEnter your choice";
	cin>>ch;
	switch(ch)
	{
	 case 1:
		cout<<"\n New Record? Enter 1 for new record";
		cin>>ch1;
		ob[n].insert();
		n=telno::count();
		break;

	 case 2:
		for(i=0;i<n;i++)
	 	{
		 ob[i].display();
		}	
		break;
 
	 case 3:
		cout<<"\n\n Enter the name to be searched";
		cin>>name;
		for(i=0;i<n;i++)
		{
		 if(strcmp(name,obj[i].name)==0)
			{
			 flag=1;
			 ob[i].display;
			 break;
			}
		}
		if(flag==0)
		{
		 cout<<"\nNo Record found";
		}
		break;

		case 4:
	cout<<"\nEnter The Telephone No To Be Searched\n";
	cin>>no;
	
	for(i=0;i<n;i++)
	{
	if(no==ob[i].no)
		{
		flag=1;
		ob[i].display();
		break;
		};
	}
	if(flag==0)
	{
	cout<<"\n\tOhh.. No Record found";
	}
	break;

	case 5:
 	cout<<"\nEnter The Name\nl";
	cin>>name;

	cout<<"\nEnter The No. to be Update\n";
	cin>>no1;

	for(i=0;i<n;i++)
	{
	if(strcmp(name,ob[i].name)==0)
		{
		ob[i].no=no1;
		}
	}
	break;
}

 	cout<<"\n\tCONTINUE--";
	cin>>op;
}while(op!=0);
 return 0;
}
