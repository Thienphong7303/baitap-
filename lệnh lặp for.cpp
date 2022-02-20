#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,max;
    cout<<"nhap n: ";
    cin>>n;
    
    if(n>0){
    for  (int i = 1; i < n; i++)
    {
       if((n%i==0) && (i%2==1)){
           if(i > max){
               max = i;
           }
       }
        
    }
    cout<<max;
    }else{
        cout<<"N";
    }
}
