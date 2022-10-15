#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

void bubbsort(int a[], int n)
{
    int k, i, flag;
    int count = 0;
    for(k=1; k<n; k++)
    {
        flag=0;
        for(i=0; i<n-k; i++) 
        {
            if(a[i]>a[i+1])
            {
                swap(a[i], a[i+1]);
                count++;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
    cout<<"the sorted array is : ";
    for(int j=0; j<n; j++)
        cout<<a[j]<<" ";
    cout<<endl;
    cout<<"Total number of comaprisons are: "<<count;
}
int main()
{
    int a[] = {23,45,89,45,66,12,29};
    int n = sizeof(a)/sizeof(a[0]);
    bubbsort(a, n);
}
