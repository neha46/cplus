#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,result=0;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<"your entered number is "<<n<<endl;
    result=n&1;
    if(result==1)
    {
    cout<<"odd"<<endl;
    }
    else
        cout<<" EVEN"<<endl;
return 0;

}
