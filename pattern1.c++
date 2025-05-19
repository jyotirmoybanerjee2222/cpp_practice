#include<iostream>
using namespace std;
void pattern1(int n){
// *****
// *****
// *****
// *****
// *****
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
// *
// **
// ***
// ****
// *****
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n){
// 1
// 12
// 123
// 1234
// 12345
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern4(int n){
// 1
// 22
// 333
// 4444
// 55555
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern5(int n){
    // *****
    // ****
    // ***
    // **
    // *
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n){
//    *
//   ***
//  *****
// *******
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n+1-i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

//    *
//   ***
//  *****
// *******

void pattern7(int n){  //  diamond
   for(int i = 0;i<n;i++){
    for(int j = 0;j<n-1-i;j++){
        cout<<" ";
    }
    for(int j = 0;j<2*i+1;j++){
        cout<<"*";
    }

    for(int j = 0;j<n-1-i;j++){
        cout<<" ";
    }
    cout<<endl;
   }
}

// *********
//  *******
//   *****
//    ***
//     *
void pattern8(int n){
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j <i;j++){
            cout<<" ";
        }
        for(int j = 0 ;j<2*n -(2*i +1);j++){
            cout<<"*";
        }
        for(int j = 0;j <i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    for(int i = 0 ;i<n;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0 ;i<n-1;i++)
    {
        for(int j = i;j< n-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}



void pattern11(int n)
{
// 1
// 01
// 101
// 0101
// 10101
    int digit = 1;
    for(int i = 0;i<n;i++)
    {
        if(i % 2 == 0)
        {
            digit = 1;
        }else{
            digit = 0;
        }
        for(int j = 0;j<=i;j++)
        {
            cout<<digit;
            if(digit == 1)
            {
                digit = 0;
            }else{
                digit = 1;
            }
        }
        cout<<endl;
    }
}

void pattern12(int n){
    // *****
    //  ****
    //   ***
    //    **
    //     *
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j = i;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
   // int n = 5;
   // pattern7(5);
    pattern3(5);
    pattern1(5);
}