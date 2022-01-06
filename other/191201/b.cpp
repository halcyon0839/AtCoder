#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int flag=0;

    for(int i=1;i<=50000;i++){
        if(floor(i*1.08)==n){
            flag=1;
            cout << i << endl;
        }
    }
    if(flag==0){
        cout << ":(" << endl;
    }
}