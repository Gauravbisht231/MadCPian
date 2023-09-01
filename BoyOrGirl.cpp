#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   set<char> st;
   for(auto it: s){
    st.insert(it);
   }
   st.size()%2==0?cout<<"CHAT WITH HER!"<<endl: cout<<"IGNORE HIM!"<<endl;
    return 0;
}