#include<bits/stdc++.h>
using namespace std;
vector<int> countSort(vector<int>& inputarray)
{
    int n= inputarray.size();
    int m = 0;
    for(int i = 0;i<n;i++)
    {
        m = max(m,inputarray[i]);
    }
    vector<int>countarray(m+1,0);
    for(int i=0;i<n;i++)
    {
        countarray[inputarray[i]]++;
    }
    for(int i=0;i<m;i++)
    {
       countarray[i]+=countarray[i-1];
    }
    vector<int> outputarray(n);
    for(int i=n-1;i>=0;i++)
    {
        outputarray[countarray[inputarray[i]]-1] = inputarray[i];
        countarray[inputarray[i]]--;
    }
}
int main()
{
    vector<int> inputarray = { 4, 3, 12, 1, 5, 5, 3, 9 };
    vector<int> outputarray = countSort(inputarray);
    for(int i = 0;i<inputarray.size();i++)
    {
        cout<<outputarray[i]<<" ";
    }
    return 0;
}
