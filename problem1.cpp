#include<iostream>
#include<set>
using namespace std;
int main()
{
    cout << "Enter the number of Student: " << endl;
    int n;
    cin>>n;
    cout << "Enter the hight of students: ";
    multiset<int,greater<int>> s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    
    while(!s.empty())
    {
        int l = *s.begin();
        int l1 = *s.upper_bound(l);
        if(l-l1< l*(20/100))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        s.erase(l);
    }
}



/*
Some students are standing in line for PT(descending order). If the student in front of
another student is 20% taller, the latter student will not face the sun.
The heights of the students will be taken as input. You need to check whether a student 
will face the sun or not.
*/