#include<iostream>
using namespace std;
/*
n=9;

111111111
100000001
101111101
101000101
101010101
101000101
101111101
100000001
111111111
*/


main()
{
    int n;
    cout<<"Enter N : ";
    cin>>n;

    n++;
    for(int r=1;r<n;r++)
    {
        for(int c=1;c<n;c++)
        {
            int index= min(min(r,c),min(n-r,n-c));

            if(index%2==0)
                cout<<"0";
            else
                cout<<"1";
        }

        cout<<endl;
    }


}

