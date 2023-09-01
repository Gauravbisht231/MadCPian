#include<bits/stdc++.h>
using namespace std;
string findPossible(){
   int total, online, q;
   cin>>total>>online>>q;
   vector<int> vec(q+1);
   vec[0]= online;
   int coconut= online;
   for(int i=1; i<=q; i++){
    char ch;
    cin>>ch;
    if(ch=='+') vec[i] = vec[i-1] +1, coconut++;
    else vec[i]= vec[i-1] - 1;
   }
   int maxi= *max_element(vec.begin(), vec.end());
   if(maxi>=total) return "YES";
    if(coconut>=total) return "MAYBE";
    else return "NO";

}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
  
   
   cout<<findPossible();
cout<<endl;

    }
    return 0;
}