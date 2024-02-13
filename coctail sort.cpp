#include<bits/stdc++.h>
using namespace std;
void cocktailsort(int a[],int s)
{
 bool swapped = true;
 int start = 0;
 int End = s-1;
 while(swapped)
 {
     swapped = false;
     for(int i = start;i<End;++i)
     {
         if(a[i]>a[i+1])
         {
             swap(a[i],a[i+1]);
             swapped = true;
         }
     }

 if(!swapped)
   {
        break;
   }
 swapped = false;
 End--;
 for(int i=End-1;i>=start;--i)
 {
     if(a[i]>a[i+1])
     {
         swap(a[i],a[i+1]);
         swapped = true;
     }
 }
 start++;
}}
void print(int a[],int s)
{
    for(int i=0;i<s;i++)
    {
    cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={ 5, 1, 4, 2, 8, 0, 2 };
    int s =sizeof(a) / sizeof(a[0]);
    cocktailsort(a,s);
    print(a,s);
    return 0;
}
