#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main() {

    unsigned value[8];

    for (int i = 0; i < 8 ; i++)
    {
    value[i] = i * 7;
    }

    assert(value[0] == 0);
    assert(value[3] == 21);
    assert(value[7] == 49);

    cout << "All tests passed!"<< endl;

    return 0;
}