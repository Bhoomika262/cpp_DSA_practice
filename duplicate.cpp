#include<iostream>
using namespace std;

int main()
{
    int n,i,j,duplicate;
    int arr[]={1,2,3,5,7,8,9,6,4,5,10};
    for(i=0;i<11;i++)
    {
        int count=0;
        for(j=0;j<11;j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if(count==2)
        {
            duplicate=arr[i];
            break;
        }
    }
    cout<<"Duplicate value: "<<duplicate;
}