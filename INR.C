#include<bits/stdc++.h>
using namespace std;
int main()
{
    float  one_usd=76.23,rs;
    long int am;
    cout<<"Enter amount\n"<<endl;
    cin>>am;
    rs=1/one_usd;
    cout<<"USD is"<<(am/rs);
    return 0;

}
