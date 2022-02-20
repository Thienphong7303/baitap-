#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tmp;
    cin >> n;
    int res = 0;
    while(n > 0){
        tmp = n % 10;
        res = res * 10 + tmp;
        n = n / 10;
    }
    int m = res;
    int count=0;
        while (m != 0) {
        int temp = m % 10;
        if (temp % 2 == 1){
            cout <<temp<<" ";
            count++;
            }
        m /= (10);
    }
    if(count==0){
        cout<<"N";
        return 0;
    }
}