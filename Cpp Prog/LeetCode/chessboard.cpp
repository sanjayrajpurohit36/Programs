/*
    Determing the color of chessboard game
    Problem Link :- https://leetcode.com/problems/determine-color-of-a-chessboard-square/
    To check this code test it on Leetcode
*/

#include <iostream>
using namespace std;
int main() {
  string coordinates;
  cin >> coordinates; 
  if(((int(coordinates[0] - 97) + 1) % 2 == 0 && (int(coordinates[1])- 48) % 2 == 0) ||
  ((int(coordinates[0] - 97) + 1) % 2 != 0 && (int(coordinates[1])- 48) % 2 != 0)) cout << false; 
  else cout << true;
  return 0;
}