 #include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int flag=0;
    for (int i=0;i<s.size()-1;i++){
        for(int j=i+1;j<s.size();j++)
        if (s.at(i)==s.at(j)){
                flag=1;
                break;
        }else{
            continue;
        }
        
    }
    if(flag==1){
        cout << "no" <<endl;
    }else{
        cout<<"yes"<<endl;
    }

}