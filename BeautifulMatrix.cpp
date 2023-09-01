#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> grid(5, vector<int> (5, 0));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>> grid[i][j];
        }
    }

int ro=0; int col=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(grid[i][j]==1) {
                ro= i;
                col= j;
                break;
            }
        }
    }

int rowMovement= abs(2-ro);
int colMovement= abs(2-col);
cout<<rowMovement+ colMovement<<endl;

    return 0;
}