#include<iostream>

using namespace std;

int main()
{
 int i,n,num;
 cout<<"enter the size of the array:"<<endl;
 cin>>n;
 cout<<"enter the number to insert:"<<endl;
 cin>>num;
 cout<<"enter the elements into the array:"<<endl;
 int a[n];
 cout<<endl;
 for(i=0;i<n;i++)
 {
     cin>>a[i];
 }
 cout<<"inserting element into the array:"<<endl;
 for(i=n-1;i>=0;i--)
 {
     a[i+1]=a[i];
 }
 a[0]=num;
 n++;
 cout<<"displaying the elements:"<<endl;
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
return 0;
}