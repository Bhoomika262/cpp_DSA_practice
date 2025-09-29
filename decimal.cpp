#include<iostream>
using namespace std;
#include<math.h>

int main()
{
    int n;
    cout<<"Enter: ";
    cin>>n;
    int i=0,ans=0,digit;
    while(n!=0)
    {
        digit=n&1;
        ans=ans+digit*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<ans;
}