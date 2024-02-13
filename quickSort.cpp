#include<bits/stdc++.h>
using namespace std;
int Partition(int a[],int l,int h)
{
    int pivot =a[h];
    int i =(l-1);
    for(int j=l;j<h;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return (i+1);
}
void quickSort(int a[],int l,int h)
{
    if(l<h)
    {
        int pi = Partition(a,l,h);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,h);
    }
}
void print(int a[],int l,int h)
{
    for(int i=0;i<=h;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={5,1,5,4,2,8,7,6};
    quickSort(a,0,7);
    print(a,0,7);
    return 0;
}
