#include<iostream>
using namespace std;
int reverse(int arr[],int n)
{
    int start=0,end=n-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int printarray(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n = 5;
    int arr[n]={5,4,3,2,1};
    reverse(arr,n);
    printarray(arr,n);
}