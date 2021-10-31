#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
 stack<int>s1;
 queue<int>q1;
 int ch,element,a;
 char y;

 while(1)
 {
	cout<<"\n\n\t\t MENU\n";
	cout<<"\n1) Enter the elements in stack and queue ";
	cout<<"\n2) Delete the elements of stack and queue";
	cout<<"\n3) Size of stack and queue";
	cout<<"\n4) Front element of stack and queue";
	cout<<"\n5) Display elements";

	cout<<"\nEnter your choice   ";
	
	cin>>ch;	


	switch(ch)
	{
	case 1:
		cout<<"\n\nEnter the elements for inserting in stack aqnd queue";
		cin>>element;
		s1.push(element);
		q1.push(element);
		break;
	
	case 2:
		cout<<"\n\nDeletion of the element";
		a=s1.top();
		s1.top();
		s1.pop();
		cout<<"\n\nThe element "<<a<<" is deleted from the stack";
		a=q1.front();
		q1.front();
		q1.pop();
		cout<<"\n\nThe element "<<a<<" is deleted from the queue";
		break;

	case 3:
		cout<<"\n\nSize of stack is "<<s1.size();
		cout<<"\n\nSize of queue is "<<q1.size();
		break;

	case 4:
		cout<<"\n\n The top element of stack is"<<s1.top();
		cout<<"\n The front element of stack is"<<q1.front();
		break;

	case 5:
		cout<<"\n The elements of the stack are";
		while(!s1.empty())
		{
			cout<<s1.top()<<"\n\t";
			s1.pop();
		}
		cout<<"\nElements of the queue are";
		while(!q1.empty())
		{
			cout<<q1.front()<<"\n\t";
			q1.pop();
		}
		break;

cout<<"\n\nDo you want to continue";
	cin>>y;
	if(y=='N'||y=='n')
	break;

 }	

}
return 0;
}
s
