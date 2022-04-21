/* 
    What will be the output of the below program
*/
#include<iostream>

using namespace std;
class Student {
    public :

    int rollNumber;

    static int getRollNumber() {
        return rollNumber;
    }
};


int main() {
    Student s;
    s.rollNumber = 101;
    cout << s.getRollNumber() << endl;
}








// Output: Compilation Error