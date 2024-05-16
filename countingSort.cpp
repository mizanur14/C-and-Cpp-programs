#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[],int size);
void printArray(int arr[],int size);
int main()
{
    int arr[]={4,6,1,2,66,4,22,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting: ";
    printArray(arr,size);
    countingSort(arr,size);
    cout<<"After sorting: ";
    printArray(arr,size);
}

void countingSort(int arr[],int size)
{
    int output[size];
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    int count[max+1];
    for(int i=0;i<=max;i++) count[i]=0;
    for(int i=0;i<size;i++) count[arr[i]]++;
    for(int i=1;i<=max;i++) count[i]+=count[i-1];
    for(int i=size-1;i>=0;i--){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<size;i++) arr[i]=output[i];
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}