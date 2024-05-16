#include<iostream>
#include<iterator>
#include<set>
using namespace std;

int main()
{
    set<int, greater<int>> s1,s2,temp;
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    //print
    set<int, greater<int>>::iterator itr;
    for(itr = s1.begin(); itr != s1.end();itr++)
        cout<<*itr<<" ";
    cout<<endl;

    s2=s1;
    s2.erase(50);
    s2.erase(s2.begin(),s2.find(30));

    for(int i:s2)
        cout<<i<<" ";
    cout << endl;

    //lower&upper bound
   printf("Lower bound %d\n",*s1.lower_bound(40));
   printf("Upper bound %d\n",*s1.upper_bound(40));

   //size
   cout<<"Size of s1: "<<s1.size();

   //swap
    temp=s1;
    s1=s2;
    s2=temp;

    cout<<"\ns1: ";
    for(int i:s1)
    {
        cout<<i<<" ";
    }
    cout<<"\ns2: ";
    for(int i:s2)
    {
        cout<<i<<" ";
    }

    return 0;

}