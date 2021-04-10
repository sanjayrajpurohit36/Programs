/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char str[100000];
    long int count = 0;
    long int maxLen = 0;
    cin>>str;
    long int len = strlen(str);
    // cout<<"len"<<len;
    for (int i=0; i<len; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u') {
            count++;
        } else {
            if(maxLen < count) {
                maxLen = count;
                count = 0;
            } else count = 0;
            
        }
    }
    cout<<maxLen;
    return 0;
}
