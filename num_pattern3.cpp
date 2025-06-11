#include<iostream>
using namespace std;

int main()
{
    int n,i,j,a;
    cout<<"Enter the number of lines for pattern: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a=i;
        for(j=1;j<=i;j++)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }
}