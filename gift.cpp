// #include<bits/stdc++.h>
// using namespace std;

// bool leftRight(vector<vector<char>> nums, int n, int m, string s){
   
// int sz= s.size();
//     for(int i=0; i<n; i++){
//         unordered_map<char, int> map;

//         for(int j=0; j<m; j++){
//             char ch= nums[i][j];
//             map[ch]++;
//         }
//         for(int i=0; i<s.size(); i++){
//             char it= s[i];
//             if(i==sz-1 and map.find(it)!=map.end()) return true;
//           else if(map.find(it)== map.end()) {
//                 break;
//             }
        
//         }

//     }
//     return false;
// }
// bool upDown(vector<vector<char>>nums, int n, int m, string s){
// int sz= s.size();
// for(int j=0; j<m; j++){
//     unordered_map<char, int> map;
//     for( int i=0; i<n; i++){
//         char it= nums[i][j];
//         map[it]++;
//     }
//      for(int i=0; i<s.size(); i++){
//             char it= s[i];
//             if(i==sz-1 and map.find(it)!=map.end()) return true;
//           else if(map.find(it)== map.end()) {
//                 break;
//             }
            
//         }
// }


//     return false;
// }
// int main(){
// int t; cin>>t;
// while(t--){
//     int n, m;
//     cin>>n>>m;
//     vector<vector<char>> nums(n, vector<char> (m, 'a'));
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>> nums[i][j];
//         }
//     }
//    if(leftRight(nums, n, m, "vika") or upDown(nums, n, m, "vika")){
//     cout<<"YES"<<endl;
//    }
//    else cout<<"NO"<<endl;
    
// }



//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;




// int main() {
// int t = 0;
// cin>>t;
//  while(t--){
//  int n,m;
//  cin>>n>>m;
// vector<string> s(n);
//  for(int i=0;i<n;i++){
//  cin>>s[i];
//  }

//  int temp=0;
//  int ans = 0;
//  vector<string> p;
//  for(int i=0;i<m;i++){
// string str="";
// for(int j=0;j<n;j++){
// str+=s[j][i];
//  }
//  p.push_back(str);
//  }
 
// string match ="vika";
//  int j=0,i=0;
// while(i<m){
//  if (p[i].find(match[j]) != string::npos){
//  j++;
//  }
//  if(j==4) break;
//  i++;
// }
//  if(j==4){
//  cout<<"YES\n";
//  }
//  else 
// cout<<"NO\n";
// }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void helper(){ 
    int n;
 cin>>n;
 
 vector<int>v(n),res;
 int counter=1;
 
 for(int i=0; i<n; i++) cin>>v[i];
 res.push_back(v[0]);
 for(int i=1; i<n; i++){
 if(v[i]>=v[i-1]){
res.push_back(v[i]);
counter++;
}
else{
 res.push_back(v[i]);
res.push_back(v[i]);
counter+=2;
 }
 }
cout<<counter<<endl;
for(int i=0; i<res.size(); i++) cout<<res[i]<<" ";
cout<<endl;
}

int main(){
int t,n; cin>>t;
while(t--){
 helper();
 }
}
