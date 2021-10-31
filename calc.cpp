#include<iostream>
using namespace std;
class calc
{
  public:
  int a,b,c;
  char op;
  int get()
   {
   cout<<"\n Enter a, op, b";
   cin>>a>>op>>b;   }    
	int add()
	{
         c=a+b;
	}
	int sub()
	{
	 c=a-b;
	}
	int mult()
	{
	 c=a*b;
	}
	int div()
	{
  	 c=a/b;
	}
  int xyz()
  {
   switch(op)
   {
    case'+':
    add();
    break;
	    case'-':
	    sub();
	    break;
    case'*':
    mult();
    break;
	    case'/':
	    if(b==0)
		{
		 cout<<"Error";
		}
	    else
		{
		 div();
		  break;
		}

   }  
	cout<<"\nThe answer is :  "<<c<<"\n"; 
  }
};
int main()
{
	calc c2; char ch; H:
	c2.get();
	c2.xyz();
		cout<<"\nDo you want to continue (Y/N)";
		cin>>ch;
		if(ch=='Y'||ch=='y')
		goto H;
		return 0;
 }
