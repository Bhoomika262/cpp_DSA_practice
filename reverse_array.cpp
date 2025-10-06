#include<iostream>
using namespace std;

int reverse(int arr[],int s)
{
    int i,temp;
    for(i=0;i<s/2;i++)
    {
        swap(arr[i],arr[s-1]);       
    }
}

int main()
{
    int n,i;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
    cout<<"Reversed array: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}