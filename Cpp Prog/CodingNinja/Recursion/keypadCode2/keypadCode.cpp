#include<iostream>
#include<stdio.h>
using namespace std;

void printDecision(int no, string output, string mapArr[])
{
    if(no == 0) {
        cout << output << endl;
        return;
    }
    int ld = no % 10;
    string opt = mapArr[ld];
    int rem = no / 10;
    for (int i = 0; i < opt.length(); i++)
    {
        printDecision(rem, opt[i] + output, mapArr);
    }
}

int main()
{
    int input;
    cin >> input;
    string output = "";
    string optionsMap[] = { "", "","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    printDecision(input, output, optionsMap);

    return 1;
}