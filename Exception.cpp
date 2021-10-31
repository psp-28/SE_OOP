#include<iostream>
using namespace std;

class user
{
	public:
	int age,income;
	string city,car;
	//char car;
	void get_age();
	void get_income();
	void get_city();
	void get_4wheller();
};

void user::get_age()
{
 try
 {
	cout<<"\n\nEnter the age  ";
	cin>>age;

	if(age>18&&age<55)
  	{
	 cout<<"\n The age is "<<age<<"\n\n";
	}
	else
	{
	 throw age;
	}
 }

 catch(int)
 {
  cout<<"\n Exception, the age should be between 18 & 55.\n\n";
 }
}

void user::get_income()
{
 try
 {
	cout<<"\n\nEnter the income ";
	cin>>income;

	if(income>50000&&income<100000)
	{
	 cout<<"\nThe income is "<<income<<"\n\n";
	}
	else
	{
	 throw income;
	}

 }

 catch(int)
 {
  cout<<"\nException, the income should be between 50000 &100000.\n\n";
 } 
}

void user::get_city()
{
 try
 {
	cout<<"\n\nEnter the city ";
	cin>>city;

	if(city=="pune"||city=="mumbai"||city=="banglore"||city=="chennai")
	{
	cout<<"\nThe city is"<<city<<"\n\n";	 
	}
	else
	{
	 throw city;
	}
 }
 catch(string)
 {
  cout<<"\nException, the cities should be pune,mumnai,chennai,banglore.\n\n";
 }
 
}

void user::get_4wheller()
{
 try
 {
 cout<<"\n\nEnter yes if the user has four wheller ";
 cin>>car;
	if(car=="yes")
	{
	 cout<<" \n"<<car<<"  The user has fourwheller\n\n";
	}
	else
	{
	 throw car;
	}
 }
catch(string)
 {
  cout<<"\nException the user do not have 4 wheller.\n\n";
 }
}

int main()
{
 user a;
 a.get_age();
 a.get_income();
 a.get_city();
 a.get_4wheller();
 return 0;
}
