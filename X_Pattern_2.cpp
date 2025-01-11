#include<iostream>
using namespace std;
/*
n=5;

1 2 3 4 5
 2 3 4 5
  3 4 5
   4 5
    5
   4 5
  3 4 5
 2 3 4 5
1 2 3 4 5


*/

main()
{
    int n;
    cout<<"Enter N : ";
    cin>>n;

    cout<<endl;


    for(int i=1; i<=n; i++)
    {
        for(int k=1;k<i;k++)
            cout<<" ";

        for(int j=i;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;

    }

    for(int i=n-1; i>=1; i--)
    {
       for(int k=1;k<i;k++)
            cout<<" ";

       for(int j=i;j<=n;j++)
       {
           cout<<j<<" ";
       }

       cout<<endl;

    }

}









