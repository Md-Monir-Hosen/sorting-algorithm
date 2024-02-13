#include<bits/stdc++.h>
using namespace std;
int shellsort(int a[],int n)
{
    for(int gap = n/2;gap > 0;gap/=2)
    {
        for(int i = gap;i<n;i++)
        {
            int temp = a[i];
            int j;
            for(j=i;j>=gap && a[i-gap]>temp;j-=gap)
            {
                a[j]=a[j-gap];
            }
            a[j]=temp;
        }
    }
    return 0;
}
void print(int a[],int n)
{
    for(int i =0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={12, 34, 54, 2, 3};
    int s = sizeof(a)/sizeof(a[0]);
    print(a,s);
    shellsort(a,s);
    cout<<"\n";
    print(a,s);
    return 0;
}
