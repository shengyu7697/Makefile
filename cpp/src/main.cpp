#include <iostream>
#include "add.h"
#include "sub.h"

using namespace std;

int main(int argc, const char *argv[])
{
    cout << "hello world\n";
    cout << "3+5=" << add(3,5) << endl;
    cout << "5-2=" << sub(5,2) << endl;

    return 0;
}
