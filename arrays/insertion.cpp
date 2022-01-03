#include<iostream>

using namespace std;

int main()
{

 /*insertion at begining*/

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
     cin>>a[i];                                 //taking elements from the user
 }
 cout<<"inserting element into the array:"<<endl;
 for(i=n-1;i>=0;i--)
 {
     a[i+1]=a[i];                    //for getting space in index 0 we are moving the elements      
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
