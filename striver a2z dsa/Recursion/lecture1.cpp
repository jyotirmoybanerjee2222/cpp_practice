#include<iostream>
using namespace std;
void function(int count)
{
    if(count == 5)
    {
        return;
    }
    cout<<count<<" ";
    count++;
    function(count);
}
int main()
{
    int count = 0;
    function(count);
}