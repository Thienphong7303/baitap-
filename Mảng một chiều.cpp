#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[50];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max = a[0];
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
        if(a[i]>max){
            max=a[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if(a[i]==max){
            dem++;
        } 
    }
    cout<<endl;
    cout<<max<<endl;
    cout<<dem;
    return 0;
}