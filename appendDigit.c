#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,digit,result;
    cout<<"Enter number\n";
    cin>>num;
    num=num*10;
    cout<<"Enter digit for append\t"<<endl;;
    cin>>digit;
    digit=num+digit;
    cout<<" Added number is "<<digit;
    return 0;
}
