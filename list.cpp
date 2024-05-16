#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void showlist(list<int> q)
{
    list <int>::iterator it;
    for(it=q.begin(); it!=q.end(); it++)
    cout<<"\t"<<*it;
    cout<<"\n";
}

int main()
{
    list<int> list1,list2;
    for(int i=0; i<5;i++)
    {
        list1.push_back(i*2);
        list2.push_front(i*3);
    }
    showlist(list1);
    showlist(list2);
    list<int>::iterator it;
    it=list1.end();
    advance(it,-1);
    list1.insert(it,5);
    list1.erase(list1.begin());
    showlist(list1);
    showlist(list2);

    cout<<"List 1 Front element "<<list1.front()<<endl;
    cout<<"List 2 Front element "<<list2.front()<<endl;

    cout<<"List 1 Back element "<<list1.back()<<endl;
    cout<<"List 2 Back element "<<list2.back()<<endl;

    list1.pop_back();
    list2.pop_back();
    
    list1.pop_front();
    list2.pop_front();

    showlist(list1);
    showlist(list2);



    return 0;

}