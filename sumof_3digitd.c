#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter  number\n";
   cin>>n;
while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;

    }
    cout<<"sum is "<<sum;
    return 0;

}

