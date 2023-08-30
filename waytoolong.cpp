#include<bits/stdc++.h>
using namespace std;
string condense(string s, int n){
if(n<=10) return s;
string res="";
res+= s[0];
string num= to_string(n-2);
res+=num;
res+=s[n-1];
return res;
}
int main(){
int n;
cin>>n;
while(n--){
    string s;
    cin>>s;
    int n= s.size();
    cout<< condense(s, n)<<endl;
}

    return 0;
}