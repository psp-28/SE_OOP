#include<iostream>
using namespace std;
class personal
{	public:
	int age;
	char a[10],b[9];
	void get_data()
	{
		
		cout<<"\nenter name of a person";
		cin>>a;
		cout<<"\nenter age of a person";
		cin>>age;
		cout<<"\nenter mobile number of a person";
		cin>>b;
	}
		
	void display()
	{	
		cout<<"\n.....................\n1) Personal Details";
		cout<<"\nName :"<<a;
		cout<<"\nAge :"<<age;
		cout<<"\nMobile Number :"<<b;
	}
};
	
class prof
{
	public:
	char I[10],P[15];
	int Y;

	void get_data()
	{
	
		cout<<"Enter Employee ID:";
		cin>>I;
		cout<<"Enter post:";
		cin>>P;
		cout<<"Experiance of employee";
		cin>>Y;
	}
	void display()
	{	cout<<"\n.....................\n2) Professional Details";
		cout<<"\nEmplyee ID :"<<I;
		cout<<"\nPost :"<<P;
		cout<<"\nExperiance :"<<Y<<" years";
		
	}
};

class acadmic
{
	public:
	int ssc,hsc,deg;
	
	void get_data()
	{
	
		cout<<"Enter Qualifications for SSC,HSC And Degree:";
		cin>>ssc>>hsc>>deg;
		
	}
	void display()
	{	cout<<"\n.....................\n3) Acadmic Details";
		cout<<"\nSSC="<<ssc<<"%"<<"\nHSC="<<hsc<<"%"<<"\nPG="<<deg<<"%";
		
	}
};
class biodata : public personal,public prof,public acadmic
{	public:
	void display()
	{	
		cout<<"\n**********BIODATA********";
	}
};


int main()
{
	biodata a1;
	a1.personal::get_data();
	a1.prof::get_data();
	a1.acadmic::get_data();
	a1.display();
	a1.personal::display();
	a1.prof::display();
	a1.acadmic::display();
	return 0;
}



