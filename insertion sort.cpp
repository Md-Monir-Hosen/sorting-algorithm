#include<bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)
    {
     temp=a[i];
     j=i-1;
     while(j>=0 && a[j]>temp)
     {
         a[j+1]=a[j];
         j=j-1;
     }
     a[j+1]=temp;
    }
}
void printarray(int a[],int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={12,11,13,6,5};
    int s =sizeof(a)/sizeof(a[0]);
    insertionsort(a,s);
    printarray(a,s);
    return 0;
}
