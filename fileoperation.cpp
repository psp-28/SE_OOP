#include<iostream>
#include<fstream>
using namespace std;
int main()
{
 string line;
 ofstream myfile("text.txt");
 if(myfile.is_open())
	{
	myfile<<"\n\t\tThis is a line";
	myfile<<"\n\n\t\tThis is another line\n\n";
	
	
	myfile.close();
 	}

 else
 cout<<"Unable to open file";


 ifstream myfile1("text.txt");

 if(myfile1.is_open())
 {
  while(getline(myfile1,line))
  {
   cout<<line<<"\n";
  }
  myfile1.close();
 }
 return 0;
}
