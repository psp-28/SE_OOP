#include<iostream>
#include<fstream>
using namespace std;
int count(string n,char ch)
{
 fstream file;
 file.open(n.c_str(),ios::in);	
  if(!file)
   {
   cout<<"Error reading the file\n";
   return(1);
   } 
  int counter=-1;
  char data[80];
  cout<<"Contents of the files are:  \n";
  while(file)
  {
  file.getline(data,80);
  cout<<data<<endl;
  if (data[0]!=ch)
  counter++;
  }
 return counter;
}

int main()
{
 string name;
 cout<<"\nEnter the file name  ";
 cin>>name;
 char ch;
 cout<<"\nEnter the character  ";
 cin>>ch;
 int c=count(name,ch);
 cout<<"No. of lines not starting with "<<ch<<" are : "<<c<<endl;
 return 0;
}
