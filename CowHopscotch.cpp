//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>

using namespace std;
char mat[20][20];
int r, c, total=0;

void DFS(int row, int col)
{
    //base case
    if(row==r-1 && col==c-1){
        total++;
        return;
    }
    if(row==r-1 || col==c-1){
        return;
    }
    //transitions
    int i, j;
    for(i=row+1;i<r;i++){
        for(j=col+1;j<c;j++){
            if(mat[i][j]!=mat[row][col]){
                DFS(i, j);
            }
        }
    }
}

int main()
{
    int i, j;
    
    cin >> r >> c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> mat[i][j];
        }
    }
    DFS(0, 0);
    
    cout << total << endl;
    
    return 0;
}
