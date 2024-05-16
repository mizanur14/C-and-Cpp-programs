#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int a[MAX];
void merge(int arr[],int l,int m,int r)
{
    int z=0;
    int i,j,k;
    int n1= m-l+1;
    int n2 = r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        a[z]=k;
        k++;
        z++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        a[z]=k;
        k++;
        z++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        a[z]=k;
        k++;
        z++;
    }
}
void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
   int arr[]={2,3,4,5,6,7,8,9,10,11,12};
   int n=sizeof(arr)/sizeof(arr[0]);
   mergeSort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


