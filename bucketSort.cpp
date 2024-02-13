#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
void bucketSort(float a[],int n)
{
    vector<float>b[n];
   for(int i=0;i<n;i++)
   {
       int bi = n*a[i];
       b[bi].push_back(a[i]);

   }
   for(int i=0;i<n;i++)
   {
       sort(b[i].begin(),b[i].end());
   }
   int index = 0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<b[i].size();j++)
       {
         a[index++] = b[i][j];
       }
   }
}
int main()
{
    float a[]={ 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
    int n = sizeof(a)/sizeof(a[0]);
    bucketSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
