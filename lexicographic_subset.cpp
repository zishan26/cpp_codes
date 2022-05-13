#include <iostream>
using namespace std;
void subset(int a[],int n,int temp[],int i,int size)
{
    int j;
    if(i==n)
    {
        cout<<"{";
        for(j=0;j<size;j++)
        {
            if(j!=size-1)
            cout<<temp[j]<<",";
            else
            cout<<temp[j];
        }
        cout<<"}\n";
        return;
    }
    cout<<"{";
        for(j=0;j<size;j++)
        {
            if(j!=size-1)
            cout<<temp[j]<<",";
            else
            cout<<temp[j];
        }
        cout<<"}\n";
        for(j=i;j<n;j++)
        {
            temp[size]=a[j];
            subset(a,n,temp,j+1,size+1);
        }
}
int main()
{
    int a[10],n;
    int i,b[10];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    subset(a,n,b,0,0);
}
