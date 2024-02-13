#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int min_idx = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                min_idx = j;
            }
            if(min_idx != i)
                swap(a[min_idx],a[i]);
        }
    }
}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={64, 25, 12, 22, 11};
    int n = sizeof(a)/sizeof(a[0]);
    SelectionSort(a,n);
    cout<<"After sorted ";
    printarray(a,n);
    return 0;

}
