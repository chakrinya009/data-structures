#include<iostream>
using namespace std;
int main()
{
    int i,size;
    cout<<"enter the size of the array:"<<endl;
    cin>>size;
    int a[size];
    cout<<"enter elements into the array:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    size--;
    cout<<"after deleted in the last:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}