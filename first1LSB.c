#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res;
    cout<<"enter a number\n";
    cin>>n;
     int count=0;
     while(n!=1)
     {
    res=n&1;
    count++;
    if(res==1)
    {
    cout<<"position is "<<count<<endl;
    }
n=n>>1;
     }

}
