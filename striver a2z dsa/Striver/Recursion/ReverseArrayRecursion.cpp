#include<iostream>
using namespace std;
int reverse(int arr[],int start,int end)
{
    if(start>=end)
    {
        return 0;
    }
    else if(start<end)
    {
        swap(arr[start],arr[end]);
        reverse(arr,start+1,end-1);

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
    reverse(arr,0,n-1);
    printarray(arr,n);
}