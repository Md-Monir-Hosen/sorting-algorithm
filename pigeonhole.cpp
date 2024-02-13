#include<bits/stdc++.h>
using namespace std;
void pigeonhole(int a[],int n)
{
    int Min =a[0],Max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>Min)
        {
            Min = a[i];
        }
        if(a[i]>Max)
        {
            Max = a[i];
        }
    }
    int range = Max-Min+1;
    vector<int>holes[range];
    for(int i= 0;i<n;i++)
    {
        holes[a[i]-Min].push_back(a[i]);
    }
    int index=0;
    for(int i=0;i<range;i++)
    {
        vector<int>::iterator it;
        for(it=holes[i].begin();it!=holes[i].end();++it)
        {
           a[index++]=*it;
        }
    }
}
int main()
{
    int a[] = {8, 3, 2, 7, 4, 6, 8};
    int n = sizeof(a)/sizeof(a[0]);
    pigeonhole(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
