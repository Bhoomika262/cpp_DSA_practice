#include<iostream>
using namespace std;

int main()
{
    int n,i,j,unique;
    int arr[]={2,4,8,9,3,4,8,7,2,9,3};
    for(i=0;i<11;i++)
    {
        int count=0;
        for(j=0;j<11;j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1)
        {
            unique = arr[i];
            break;
        }
    }
    cout<<"Unique element: "<<arr[i];
}