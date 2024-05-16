#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

void showList(list<int> l){
    auto i = l.begin();
    for (; i != l.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

int main() {
    list<int> queue1, queue2;

    for (int i = 1; i <= 5; ++i) {
        queue1.push_back(i * 10);
    }

    cout << "Queue 1 elements: ";
    showList(queue1);

    queue1.pop_front();
    cout << "After dequeue from Queue 1, elements: ";
    showList(queue1);

    queue1.push_back(60);
    queue1.push_back(70);
    queue2.push_back(100);
    queue2.push_back(200);

    cout << "After enqueue in Queue 1, elements: ";
    showList(queue1);
    cout << "Queue 2 elements: ";
    showList(queue2);

    queue1.swap(queue2);
    cout<< "After swapping, Queue 1 elements: ";
    showList(queue1);
    cout << "Queue 2 elements: ";
    showList(queue2);

    cout << "Front of Queue 1: " << queue1.front() << endl;
    cout << "Back of Queue 1: " << queue1.back() << endl;

    cout << "Size of Queue 1: " << queue1.size() << endl;
    cout << "Size of Queue 2: " << queue2.size() << endl;

    return 0;
}