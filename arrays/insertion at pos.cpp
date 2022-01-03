#include<iostream>

using namespace std;
int main()
{
    int i,pos,num,n;
    cout<<"enter the position of the array:"<<endl;
    cin>>pos;
    cout<<"enter the element to be inserted:"<<endl;
    cin>>num;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements into the array:"<<endl;
    for(i=0;i<n;i++)
    {
          cin>>a[i];
    }
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    cout<<"displaying the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}