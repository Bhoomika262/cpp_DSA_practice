#include<iostream>
using namespace std;

int reverse(int arr[],int s)
{
    int i,temp;
    for(i=0;i<s/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[s-(i+1)];
        arr[s-(i+1)]=temp;        
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