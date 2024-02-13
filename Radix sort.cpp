#include<bits/stdc++.h>
using namespace std;
int getmax(int a[],int s)
{
    int mx = a[0];
    for(int i = 1;i<=s;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
        }
    }
    return mx;
}
void countSort(int a[],int s,int exp)
{
    int outputarray[s];
    int i,Count[10]={0};

    for( i = 0;i<s;i++)
    {
        Count[(a[i]/exp)%10]++;
    }
    for(i=1;i<10;i++)
    {
    Count[i] += Count[i-1];
    }
    for(i=s-1;i>=0;i--)
    {
        outputarray[Count[(a[i]/exp)%10]-1]=Count[(a[i] / exp) % 10]--;
    }
    for(i=0;i<s;i++)
    {
       a[i]=outputarray[i];
    }
}
void radixsort (int a[],int s)
{
    int m = getmax(a,s);
    for(int exp = 1;m/exp>0;exp *= 10)
    {
        countSort(a,s,exp);
    }
}
void print(int a[],int s)
{
    for(int i = 0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]= { 543, 986, 217, 765, 329 };
    int s = sizeof(a) / sizeof(a[0]);

    // Function Call
    radixsort(a, s);
    print(a, s);
    return 0;
}
