#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3,i,j,k=0;
    cout<<"Enter size of array 1: ";
    cin>>s1;
    cout<<"Enter size of array 2: ";
    cin>>s2;
    if(s1<s2)
    s3=s1;
    else
    s3=s2;
    int arr1[s1],arr2[s2],arr3[s3];
    cout<<"Enter array 1 elements: ";
    for(i=0;i<s1;i++)
    {
        cin>>arr1[i];
    }    
    cout<<"Enter array 2 elements: ";
    for(i=0;i<s2;i++)
    {
        cin>>arr2[i];
    } 

    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            if(arr1[i]==arr2[j])
            {
              arr3[k]=arr1[i];
              k++;
            }
        }
    }

    cout<<"Intersection of both arrays: ";

    for(i=0;i<k;i++)
    {
        cout<<arr3[i]<<" ";
    }
}