#include<iostream>
using namespace std;

int main()
{
    int n,i,j,a=1;
    cout<<"Enter the number of lines in pattern: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
}