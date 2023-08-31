#include<bits/stdc++.h>
using namespace std;
int findAdvancers(vector<int> &nums, int n , int k){
    int num= nums[k-1];
    
    int counter=0;
    for(auto it: nums){
        if(it>=num and it>0) counter++;
    }
    return counter;
}
int main(){
int n;
cin>>n;
int k;
cin>>k;
vector<int> nums(n, 0);
for(int i=0;i<n; i++){
    cin>>nums[i];
}

cout<<findAdvancers(nums, n, k)<<endl;


    return 0;
}