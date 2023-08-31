#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        if(s=="++X" or s=="X++") a+=1;
        else a-=1;
        
    }
    cout<<a<<endl;


    return 0;
}