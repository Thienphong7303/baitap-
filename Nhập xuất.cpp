#include <bits/stdc++.h>
using namespace std;

int main()
{
long a,b,tong;
cin>>a>>b;
tong = a+b;
if(0<a && a<=1000000 && 0<b && b<=1000000){
    cout << tong;
}else{
    cout<<"N";
}
}
