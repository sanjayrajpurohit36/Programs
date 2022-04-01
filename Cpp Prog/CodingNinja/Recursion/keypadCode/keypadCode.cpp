/*
    Print all the possible combinations of the entered keypad number
*/
#include<iostream>
#include <string>

using namespace std;

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    string umap[] = { "", "","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
    
	if(num <= 1) { // base case;
        output[0] = "";
        return 1;
    }    
    int subPatternSize = keypad(num / 10, output);
    int ld = num % 10; // last digit
    int cSubPatternSize = subPatternSize; // keeping the copy of the subPatternSize
    int copySize = ld == 7 || ld == 9 ? 3 : 2;
    
    for (int i = 0 ; i < copySize; i++) {
        for (int j=0; j < cSubPatternSize; j++ ) {
            output[ j + subPatternSize ] = output[j];
        }
    	subPatternSize += cSubPatternSize;
    }
    
    string options = umap[ld];
    int optionLength = options.length();

    int k = 0;

    for(int i = 0 ; i < optionLength; i++) {
        for(int j = 0; j < cSubPatternSize; j++) {
            output[k] = output[k] + options[i];
            k++;
        }
    }
    return (cSubPatternSize * optionLength);
}


int main() {
    int number;
    cin >> number;
    string output[1000];
    int outputSize = keypad(number, output);
    for ( int i = 0 ; i < outputSize ; i++) {
        cout << output[i] << endl;
    }
    
    return 0;
}