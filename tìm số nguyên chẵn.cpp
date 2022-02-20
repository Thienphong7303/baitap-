#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    do {
         cout<<"Nhap N la: ";
         cin>>n;
         if(n<=0)
         {cout<<"nhap sai roi then loz "; }
    }while (n<=0);
    while (n!=0){
        int x=n%10; 
        if(x%2==0){
            cout<<x<<" ";
        }n=n/10;
        if(x%2!=0){
            cout<<"khong co so chan";
        }    
   }

}