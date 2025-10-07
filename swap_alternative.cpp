#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n%2==0)
    {
        for(i=0;i<n;i=i+2)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    else
    {
        for(i=0;i<n-1;i=i+2)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}