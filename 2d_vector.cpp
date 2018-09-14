#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q,x;
    cin>>n>>q;
    vector<vector<int>>a(n);
    for(int i=0;i<n;i++){
        //x is no of elemnt in the arr
        cin>>x;
        a[i].resize(x);
        for(int j=0;j<x;j++){
            cin>>a[i][j];
        }
    }
    //get the quiries
    int r,c;
    for(int i=0;i<q;i++){
        cin>>r>>c;
        cout<<a[r][c]<<endl;
    }
    return 0;
}

/*
i/p
2 2 -> n(no of arrays),q(no of quries)
3 1 5 4 (1st arrays of size 3, followed by elemnet)
5 1 2 8 9 3
0 1 (0th array print element at index 1)
1 3

o/p
5 9
*/
