#include<iostream>
using namespace std;

/*
    1
   3 2
  6 5 4
10 9 8 7
10 9 8 7
  6 5 4
   3 2
    1
*/

main()
{
  int n=4;
  // cout<<"Enter N : ";
  // cin>>n;

  int z=1;
  int multiple=1;

   for(int i=n; i>=1; i--)
    {

       for(int s=1;s<i;s++)
            cout<<" ";

       for(int j=i;j<=n;j++)
       {
           cout<<z<<" ";
           z--;
       }
       z=z+1+(2*multiple);
       multiple++;

       cout<<endl;

    }

      z=2*n + 2;
       for(int i=1; i<=n; i++)
      {

        for(int k=1;k<i;k++)
            cout<<" ";

        for(int j=i;j<=n;j++)
        {
            cout<<z<<" ";
            z--;
        }

        cout<<endl;

    }


}
