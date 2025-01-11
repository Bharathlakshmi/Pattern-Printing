#include<iostream>
using namespace std;

/*
Enter N : 4
    1
   212
  32123
 4321234
  32123
   212
    1
*/

main()
{
   int n;
   cout<<"Enter N : ";
   cin>>n;

   for(int row=1; row<2*n; row++)
   {
       int c= row<=n ? row : 2*n-row;

        for(int space=0; space<=n-c; space++)
            cout<<" ";

       /*
        if(row<=n)
        {
           for(int space=0; space<=n-row; space++)      //for row<=n
           cout<<" ";
        }
        else if(row>n)
        {
            for(int space=n; space<=row; space++)      //for row>n
               cout<<" ";
        }
        */

        for(int col=c; col>=1; col--)
        {
           cout<<col;
        }
        for(int col=2; col<=c; col++)
        {
            cout<<col;
        }

        cout<<endl;
   }
}
