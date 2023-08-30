#include<bits/stdc++.h>
using namespace std;
int findNumber(vector<vector<int>> &nums, int n){
   auto counter=0;
    for(auto it: nums){
        if(count(it.begin(), it.end(), 1)>=2) counter++;
        else continue;
    }
    return counter;
}
int main(){
int n;
cin>>n;

vector<vector<int>> nums(n, vector<int> (3, 0));
for(int i=0; i<n; i++){
    for(int j=0; j<3; j++){
        cin>> nums[i][j];
    }
}
cout<< findNumber(nums, n)<<endl;

return 0;
}