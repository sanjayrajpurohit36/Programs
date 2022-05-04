/*
    Use the template class to create the triplet without considering the third 
    data member of the class which is z
*/
#include<iostream>
#include"TemplateClass.cpp"

using namespace std;

// ClassName <template data type> Object name
int main()
{
    Pair <Pair<int, int>, int> P1;
    /*   
        T = Pair<int, int>
        V = int
    */

    // setting the value of Y
    P1.setY(2);
    
    /* 
        for setting the value of X
        for the object P1 the value of x is itself is a pair of x and y
    */

    Pair<int, int> P2;

    P2.setX(100);
    P2.setY(300);

    P1.setX(P2);

    /* 
        for getting the value of X
        P1.getX() will only return the pair of <int ,int> which is<100, 300>
        for getting the value of 100 we will do
        P1.getX().getX()
    */

    cout << "x : " << P1.getX().getX() << endl;
    cout << "y : " << P1.getX().getY() << endl;
    cout << "z : " << P1.getY() << endl;
    return 0;
}