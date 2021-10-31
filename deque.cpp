#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>dq;
	deque<int>::iterator itr;
	int ch,ele;
	char y;

 do
 {
	cout<<"\n\n\t\t@@@@@@@@***MENU***@@@@@@@@@";
	cout<<"\n\n\t1) Insert element at the front";
	cout<<"\n\t2) Insert element at the back";
	cout<<"\n\t3) Delete element at the Front";
	cout<<"\n\t4) Delete element at the back";
	cout<<"\n\t5) Display front element";
	cout<<"\n\t6) Display size of deque";
	cout<<"\n\t7) Display all the elements of deque";
	cout<<"\n\nEnter your choice   ";
	cin>>ch;

 switch(ch)
  {
	case 1:
		cout<<"\n\nEnter the element for insertion at front";
		cin>>ele;
		dq.push_front(ele);
		break;

	case 2:
		cout<<"\n\n Enter the elements for insertion at back";
		cin>>ele;
		dq.push_back(ele);
		break;

	case 3:
		ele=dq.front();
		dq.pop_front();
		cout<<"\n\nElement deleted at the front is "<<ele;
		break;
	
	case 4:
		ele=dq.back();
		dq.pop_back();
		cout<<"\n\nElement deleted at back is"<<ele;
		break;		
	
	case 5:
		ele=dq.front();
		dq.front();
		cout<<"\n\tElement at the front is"<<ele;
		break;

	case 6:
		cout<<"Size of deque is  "<<dq.size();
		break;

	case 7:
		if(dq.empty())
		{
		 cout<<"Deque is empty";
		}
		else
		{
		 cout<<"all the elements are";
		 for(itr=dq.begin();itr!=dq.end();itr++)
		  {
			cout<<"\t"<<*itr;
		  }
		}

  }
 cout<<"\n\nDo you want to continue?  ";
 cin>>y;
 }while(y=='Y'||y=='y');
}
