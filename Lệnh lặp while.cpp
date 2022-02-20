#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=1,S=0;
    cout<<"nhap n: ";
    cin>>n;
    if(n>0){
        do{
            k += 1;
            S +=k;
        }while(S+k < n);
        cout<<k;
    }else{
        cout<<"N";
    }
    
}