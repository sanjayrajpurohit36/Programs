#include<bits/stdc++.h>
using namespace std;

int main() {
    // int T;
    int destinationsCount;
    int fuelPrice[100];
    int destDistance[100];
    int finalPrice=0;
    // cin>>T; 
    cout<<"Enter no of dest=> ";
    cin>>destinationsCount;
    for(int i=0; i<destinationsCount; i++) { // correct
        cin>>fuelPrice[i];
    }
    for(int i=0; i<destinationsCount; i++) {
        cin>>destDistance[i];
    }
    int minFuelPrice
    finalPrice = fuelPrice[destinationsCount-1] * destDistance[destinationsCount-1]
    for(int i=destinationsCount; i>0; i++) {
        if(fuelPrice[i](destDistance[i] + destDistance[i+1]) < )
    }
}
