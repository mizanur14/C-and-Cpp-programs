#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> m;
    vector<int> v;
    cout<<"Enter the number of integers: ";
    int n;
    cin >> n;
    cout<<"Enter the integers(Spaced):\n";

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }

    for (auto [i, j] : m)
     if (j == 1) v.push_back(i);
    
        cout << v.front() + v.back() << endl;
}

/*
Suppose there are some integers in a container. There are repetations in the container
that means a value can occur in multiple instances. You need to find the sum of
first and last unique element in the container.
Ex: Input: 23425 output: 8
    I/P: 23234311 O/P: 4

*/