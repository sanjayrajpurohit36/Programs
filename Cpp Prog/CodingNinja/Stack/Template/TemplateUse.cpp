#include<iostream>
#include"TemplateClass.cpp"

using namespace std;

// ClassName <template data type> Object name
int main()
{
    Pair <int> P1;
    P1.setX(1);
    P1.setY(2);

    cout << P1.getX() << " " << P1.getY() << endl;

    Pair<double> P2;
    P2.setX(1.1);
    P2.setY(2.2);

    cout << P2.getX() << " " << P2.getY();
    return 0;
}