#include<bits/stdc++.h>
using namespace std;
string tolcase(string &a){
    for(int i=0; i<a.size(); i++){
        if(a[i]<97) a[i]= a[i] + 32;
        else continue; 
    }
    return a;
}
int main(){
string a, b;
cin>>a>>b;
int n= a.size();
// if(a==b) cout<<0<<endl;
 a= tolcase(a);
 b= tolcase(b);
 if(a<b) cout<<-1<<endl;
 else if(a>b) cout<<1<<endl;
 else cout<<0<<endl;

    return 0;
}