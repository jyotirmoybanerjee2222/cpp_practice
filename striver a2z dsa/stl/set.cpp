#include<iostream>
#include<set>
using namespace std;
// set -> all element unique -> algorithm made on bst 
// -> you can not modify element
// -> element comes in sorted order
// -> set is slower than unorder set and unorder set is not sorted
int main()
{
    set<int >s;//set
    s.insert(5);//complexity O(logn)
    s.insert(1);
    s.insert(2);
    s.insert(7);
    s.insert(6);

    for(auto i:s)
    {
        cout<<i;
    }
    cout<<endl;
    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for(auto i:s)
    {
        cout<<i;
    }
    cout<<endl;
    cout<<"5 present or not : "<<s.count(5);
    cout<<"-5 present or not : "<<s.count(-5);


    set<int >::iterator itr = s.find(5);
    for(auto it = itr;it != s.end();it++ )
    {
        cout<<*it<<" ";
    }cout<<endl;
    

}