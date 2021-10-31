#include<iostream>
using namespace std;

class complex
{	
	public:
        float x,y;
	complex()
	{
		x=0;
		y=0;
	}

	complex operator +(complex);
	complex operator *(complex);
	friend istream &operator >> (istream&s , complex&p);
	friend ostream &operator << (ostream&t , complex&q);
};

complex complex::operator+(complex c)
{
	complex temp;
	temp.x=x+c.x;
	temp.y=y+c.y;
	return (temp);
}

complex complex::operator *(complex d)
{
	complex temp;
	temp.x=((x*d.x)-(y*d.y));
	temp.y=((x*d.y)+(y*d.x));
	return (temp);
}

istream &operator >>(istream&s , complex&p)
{
	cout<<"enter real  & img values\n";
	s>>p.x;
	s>>p.y;
	return s;
}

ostream &operator <<(ostream&t , complex&q)
{
	t<<q.x<<"+i"<<q.y;
	return t;
}

int main()
{
	complex c1,c2,c3,c4;
	int o;
	char ch;
	while(ch='y')
	{
		cout<<"\n\t\tMENU\n\n";
		cout<<"1) add two complex nos.\n";
		cout<<"2) multiply two complex nos.\n";
		cout<<"enter your chioce ";
		cin>>o;
		switch(o)
		{	
			case 1:
			cout<<"\t\tADDITION\n";
			cin>>c1;
			cin>>c2;
			c3=c1+c2;
			cout<<c3;
			break;
			
			case 2:
			cout<<"\t\tMULTIPLICATION\n";
			cin>>c1;
			cin>>c2;
			c3=c1*c2;
			cout<<c3;
			break;
		}
		cout<<"\n\ndo you want to continue(y/n)";
		cin>>ch;
	
	}
	/*c1= complex(2.7,3.1);
	c2= complex(2.2,3.2);
	c3=c1+c2;
	c4=c1*c2;
	cout<<"c3=";
	c3.display();
	cout<<"c4=";
	c4.display();*/
	
}






