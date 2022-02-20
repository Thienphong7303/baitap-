#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // cout << "Nhap n: ";
    cin>>n;
    if(n>=0 && n<=6){
        switch (n)
        {
        case 0:
            cout<<"Chu Nhat";
            break;
        case 1:
            cout<<"Thu Hai";
            break;
        case 2:
            cout<<"Thu Ba";
            break;
        case 3:
            cout<<"Thu Tu";
            break;
        case 4:
            cout<<"Thu Nam ";
            break;
        case 5:
            cout<<"Thu Sau";
            break; 
        case 6:
            cout<<"Thu Bay";
            break;   
        }
    }else{
        cout <<"F";
    }
}