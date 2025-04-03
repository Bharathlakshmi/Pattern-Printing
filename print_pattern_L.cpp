#include<iostream>
using namespace std;
/*
n=5
*
* *
* * *
* * * *
* * * * *

*/
main()
{
    int n,p=1;
    cout<<"Enter no. of rows : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<"*"<<" ";
           // p++;               //   <- its dangerous
        }
        cout<<endl;
        p++;
    }
}
