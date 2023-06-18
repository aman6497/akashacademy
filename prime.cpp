

#include <iostream>
#include<cmath>
using namespace std;
int main()
{   cout << "Prime Numbers between n and m are:\n";
int n,m;
     cin>>n;
     cin>>m;
    for(int i=n;i<=m;++i) //loop to check for each number in the range

    {   int ctr=0; //to maintain factor count
        
        for(int j=2;j<=sqrt(i);++j) //checking for factors

        {   if(i%j==0)

                ctr=1; //increasing factor count when found

        }

        if(ctr==0) //checking and printing prime numbers

                cout<<i<<" ";

    }

    return 0;

};