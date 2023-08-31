#include<bits/stdc++.h>
using namespace std;
int findPiles(int n, int m){
    int res=0;
    int total_area= n*m;
    res= floor(float(total_area)/2.0);
    return res;
}
int main(){
    int n, m;
    cin>>n>>m;

    cout<<findPiles(n, m)<<endl;

    return 0;
}