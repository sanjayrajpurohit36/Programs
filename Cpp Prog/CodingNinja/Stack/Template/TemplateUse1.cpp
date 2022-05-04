#include<iostream>
#include"TemplateClass.cpp"

using namespace std;

// ClassName <template data type> Object name
int main()
{
    Pair <int, double> P1;
    // T will be set as int type and V will be set as double type
    P1.setX(1);
    P1.setZ(2.2);

    cout << P1.getX() << " " << P1.getZ() << endl;
    return 0;
}