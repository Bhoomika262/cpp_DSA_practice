#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    char c;
    cout<<"Enter number of lines: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c='A'+n-1;
        for(j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c--;
        }
        cout<<endl;
    }
}