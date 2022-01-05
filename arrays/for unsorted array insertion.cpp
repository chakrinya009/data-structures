#include<iostream>
using namespace std;
int main()
{
    int i,num,pos,size;
    cout<<"enter the size of the array:"<<endl;
    cin>>size;
    int a[size];
    cout<<"enter the number to be inserted:"<<endl;
    cin>>num;
    cout<<"enter the position :"<<endl;
    cin>>pos;

    cout<<"enter the elements:"<<endl;
    for(i=0;i<size;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }

    a[size]=a[pos-1];
    a[pos-1]=num;        //look at here
    size++;

    cout<<"display the elements:"<<endl;
    for(i=0;i<size;i++)
      {
          cout<<a[i]<<" ";
      }

      return 0;

}


