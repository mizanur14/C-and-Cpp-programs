#include<iostream>
#include<iterator>
#include<map>   
using namespace std;

int main()
{
    map<int, int> q1;

    q1.insert({1,40});
    q1.insert({2,30});
    q1.insert({3,60});
    q1.insert({5,50});
    q1.insert({4,20});
    q1.insert({6,50});
    q1[7]=10;
    q1.at(8)=70;

    map<int, int>::iterator itr;
    cout << "\nThe map q1 is: \n";
    



}