#include<bits/stdc++.h>
using namespace std;

int sortArr(int arr[], int n)
{
   sort(arr, arr + n);
   
   cout<<"The largest Element :"<<arr[n-1];//time complexity

}
int largestElemnt(int arr[], int n)//time complexity
{
   int large = arr[0];
   for(int i = 0;i<n;i++)
   {
    if(arr[i]>large)
    {
        large = arr[i];
    }
   }
   cout<<"largest Element is :"<<large<<endl;
}

int main()
{
    int arr[] = {4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of array
    sortArr(arr, n);
    largestElemnt(arr,n);
    return 0;
}
