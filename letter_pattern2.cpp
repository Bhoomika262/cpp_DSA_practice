#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    char c='A',a='A';
    cout<<"Enter number of lines: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
        a++;
        c=a;
    }
}