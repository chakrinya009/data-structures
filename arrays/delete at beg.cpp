#include<iostream>
using namespace std;
int main()
{
    int i,size;
    cout<<"enter the size of the array:"<<endl;
    cin>>size;
    int a[size];
    cout<<"enter the elements:"<<endl;
    for(i=0;i<size;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }
    for(i=0;i<size;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    cout<<"display the elements:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}