#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s1,s2;
    
    //push
    s1.push(21);
    s1.push(22);
    s1.push(23);
    s1.push(24);
    s1.push(25);
    
    //print
    s2=s1;
    while(!s2.empty())
    {
        cout << s2.top()<< " ";
        s2.pop();
    }
    cout << endl;
    
    //pop
    s1.pop();
    s1.pop();
    
    //print
    s2=s1;
    while(!s2.empty())
    {
        cout << s2.top()<< " ";
        s2.pop();
    }
    cout<<"\nTop of stack: "<<s1.top();


    return 0;

}