#include<iostream>
using namespace std;

int main()
{
    int n,bit;
    cout<<"Enter: ";
    cin>>n;
    int ans=0, i=1;
    while(n!=0)
    {
        bit=n&1;
        ans=(bit*i)+ans;
        n=n>>1;
        i*=10;
    }
    cout<<ans;
}