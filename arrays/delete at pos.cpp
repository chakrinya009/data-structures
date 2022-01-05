#include<iostream>
using namespace std;
int main()
{
    int i,size;
    cout<<"enter the size of the array:"<<endl;
    cin>>size;
    int a[size];
    cout<<"enter the elements into the array:"<<endl;
    for(i=0;i<size;i++)
    {
       cin>>a[i];
    }
    int pos;
    cout<<"enter the position to be deleted:"<<endl;
    cin>>pos;
    for(i=pos-1;i<size;i++)
    {
        a[i]=a[i+1];
    }   
    size--;
    cout<<"displaying the elements:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}