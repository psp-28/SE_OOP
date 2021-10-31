#include<iostream>
using namespace std;
class cpparray
{
  public:
  int n,a[50],i,b[50];
  int read();
  int print();
  int range();
  int assign();
  int size();
};

int cpparray::read()
{
  cout<<"\nEnter the limit of array  ";
  cin>>n;
  for(i=0; i<n; i++)
  {
   cout<<"  a["<<i<<"]=";
   cin>>a[i];
  }
}

int cpparray::print()
{
  cout<<"\nTHe elements of the array are:";
for(i=0; i<n; i++)
 { 
  cout<<"\n  a["<<i<<"]= ";
  cout<<a[i];
 }
}

int cpparray::range()
{
  cout<<"\n\nThe range of the array is"<<a[0]<<"to"<<a[n-1]<<"\n";
}

int cpparray::assign()
{
  cout<<"\n\nThe assigned values of the array are \n";
  for(i=0; i<n; i++)
 {
  b[i]=a[i];
  cout<<"\nTHE values are "<<b[i]; 
 }
}


 int cpparray::size()
{
 cout<<"\n\nThe size of the array is  "<<n<<"\n";

}

int main()
{
  cpparray obj1;
  obj1.read();
  obj1.print();
  obj1.range();
  obj1.assign();
  obj1.size(); 
 return 0;
}
