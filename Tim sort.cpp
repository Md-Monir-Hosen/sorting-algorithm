#include<bits/stdc++.h>
using namespace std;
const int Run = 32;
void selection(int a[],int left,int right)
{
    for(int i= left+1;i<right;i++)
    {
        int temp = a[i];
        int j=i-1;
        while(j>=left && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
void Merge(int a[],int l,int m,int r)
{

    int len1=m-l+1;
    int len2=r-m;

    int left[len1],right[len2];
    for(int i = 0;i<len1;i++)
    {
        left[i]=left[l+i];
    }
    for(int i = 0;i<len2;i++)
    {
        right[i]=right[m+1+i];
    }
    int i=0,j=0,k=l;
    while(i<=len1 && j<=len2)
    {
        if(left[i]<=right[j])
        {
          a[k]=left[i];

          i++;
        }
        else
        {
            a[k]=right[j];

            j++;
        }
        k++;
    }
    while(i<len1)
    {
       a[k]=left[i];
        i++;
        k++;
    }
    while(j<len2)
    {
        a[k]=left[j];
        i++;
        k++;
    }

}
void tim(int a[],int n)
{
    for(int i=0;i<n;i+=Run)
    {
        selection(a,i,min((i+Run-1),(n-1)));
    }
    for(int Size = Run;Size<n;Size=2*Size)
    {
      for(int left=0;left<n;left += 2*Size )
      {
          int mid = left+Size-1;
          int right = min((left+2*Size-1),(n-1));
          if(mid<right)
          {
              Merge(a,left,mid,right);
          }
      }
    }
}
void print(int a[],int s)
{
    for(int i= 0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int a[]={ -2, 7,  15,  -14, 0, 15,  0, 7,
                  -7, -4, -13, 5,   8, -14, 12 };
    int n = sizeof(a) / sizeof(a[0]);
    printf("Given Array is\n");
    print(a, n);

    // Function Call
    tim(a, n);

    printf("After Sorting Array is\n");
    print(a, n);
    return 0;
}
