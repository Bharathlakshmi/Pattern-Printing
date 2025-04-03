#include<iostream>
using namespace std;
/*
n=5;
* * * * *
* * * *
* * *
* *
*

*/
main()
{
    int n,p;
    cout<<"Enter no. of rows : ";
    cin>>n;
    p=n;

    for(int i=0;i<n;i++)
    {
        for(int j=p;j>0;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        p--;
    }
}

