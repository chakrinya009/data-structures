#include<iostream>

using namespace std;
int main()
{
    int i,n,num;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements into the array:";
    for(i=0;i<n;i++)
    {
           cin>>a[i];
    }
    cout<<"enter the element to be insertd:"<<endl;
    cin>>num;
    a[n]=num;
    n++;
    cout<<"displaying the elements:"<<endl;;
    for(i=0;i<n;i++)
    {
         cout<<a[i]<<" ";      
    }
    return 0;
}