#include<bits/stdc++.h>
using namespace std;
void bublesort (int a[],int s)
{
    int i;
    for(i=0;i<s;i++)
    {

         if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
            }
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
    int a[]={2,1,3,4,6,5,7,9,8};
    int s=sizeof(a)/sizeof(a[0]);
    bublesort(a,s);
    cout<<"after sorting ";
    printarray(a,s);
    return 0;
}
