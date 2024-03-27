#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[],int n)
{
    int i = 0;
    for(int j =1;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
        
    }
    return i+1;
}
int main()
{
    int arr[]={1,2,2,32,32,56,56,85,85};
    int n = sizeof(arr)/sizeof(arr[1]);
    int c=removeDuplicate(arr,n);
    cout<<"NO of duplicate item :"<<c;
}