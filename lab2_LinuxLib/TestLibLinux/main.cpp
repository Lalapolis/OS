#include <iostream>
#include <Vector.h>

using namespace std;

int main()
{
    Vector test(Number(5), Number(5));
    Vector test2(Number(4), ZERO_NUM);
    Vector test3 = test.Add(test2);

    cout << test3.calcRadius().getValue() << endl;
    cout << test3.clacAngel().getValue();

}