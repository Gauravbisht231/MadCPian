#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n= s.size();
    if(n&1 !=1) {
        cout<<-1<<endl;
        return 0;
    }
    map<char, int> naksha;
    for(auto it: s){
        if(it!= '+'){
            naksha[it]++;
        }
    }
    int i=0;
    for(auto it: naksha){
        int num= it.second;
        for(int j= 0; j<num; j++){
            s[i]= it.first;
            i+=2;
        }

    }
cout<<s<<endl;
}