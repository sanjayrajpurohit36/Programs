/*
-9 -9 -9  1 1 1 
 0 -9  0  4 3 2
-9 -9 -9  1 2 3
 0  0  8  6 6 0
 0  0  0 -2 0 0
 0  0  1  2 4 0 
 
 Sum of Hourglass
a b c
  g    
d e f
 */

//  #include<stdc++.h>
 #include<iostream>
#include<stdio.h>
 using namespace std;
 int MaxGlassSum(int x, int y, int arr[][6]) {
    // cout<<"coordinates =>"<< x << y << "\n";
    // cout<< arr[x][y]<< arr[x][y+1]<< arr[x][y+2]<< arr[x+1][y+1]<< arr[x+2][y]<< arr[x+2][y+1]<< arr[x+2][y+2];
    int sum = 0;
    sum = arr[x][y] + arr[x][y+1] + arr[x][y+2] + arr[x+1][y+1] + arr[x+2][y] + arr[x+2][y+1] + arr[x+2][y+2];
    // cout<<" SUM=>"<<sum << "\n" ;
    return sum;
 }
 int main() {
     int arr[][6] = {
        {-9, -9, -9,  1, 1, 1},
        {0,  -9,  0,  4, 3, 2},
        {-9, -9, -9,  1, 2, 3},
        {0,   0,  8,  6, 6, 0},
        {0,   0,  0, -2, 0, 0},
        {0,   0,  1,  2, 4, 0}
    };
    static int j=0;
    int sum = 0;
    int largestSum = -100;
    // MaxGlassSum(0,1,arr);
    
    for(int i=0;i<=3;i++) {
        for (int j=0;j<=3;j++){
            sum = MaxGlassSum(i,j,arr);
            if(sum>largestSum) {
                largestSum = sum;
            };
        }
    }
    cout<< "largestSum"<< largestSum<< endl;
    return  0;
 }