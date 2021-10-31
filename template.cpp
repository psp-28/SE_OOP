#include<iostream>
using namespace std;

template<typename T>
T selection(T a[],int n)
{
int i,j;
for(j=0;j<n-1;j++)
{
 int imin=j;
 for(i=j+1;i<n;i++)
 {
	if(a[i]<a[imin])
	{
	 imin=i;
	}
 	if(imin!=j)
	{
	 swap(a[j],a[imin]);
	}
 }
}
}

int main()
{
 int a[5],i;
 float b[6];
 //cout<<"Enter limit";
 //cin>>n;
 cout<<"\n\nEnter elements for int  \n";
for(i=0;i<5;i++)
{
 cout<<"\tElement "<<i+1<<" = ";
 cin>>a[i];
}
 selection<int>(a,5);
 cout<<"\nSorted elements are\n\n";
 for(i=0;i<5;i++)
 cout<<"\ta["<<i<<"] = "<<a[i]<<"\n";

 
 //cout<<"Enter limits";
 //c//in>>n;
 cout<<"\nEnter elements for float  \n";
 for(i=0;i<6;i++)
 {
 cout<<"\tElement "<<i+1<<" = ";
 cin>>b[i];
 }
 selection<float>(b,6);
 cout<<"\nSorted elements are\n";
 for(i=0;i<6;i++)
 cout<<"\ta["<<i<<"] = "<<b[i]<<"\n";
 
 return 0;

}
