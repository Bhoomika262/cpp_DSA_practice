#include<iostream>
using namespace std;

bool linearSearch(int arr[],int a)
{
    int i;
    for(i=0;i<5;i++)
    {
        if(arr[i]==a)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int i,a,arr[5];
    cout<<"Enter array of 5 elements: ";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element that you want to find: ";
    cin>>a;
    if(linearSearch(arr,a))
    cout<<"Found";
    else
    cout<<"Not found";
}