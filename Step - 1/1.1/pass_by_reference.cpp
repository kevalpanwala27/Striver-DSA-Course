#include <iostream>
using namespace std;

void doSomething(int &num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main(int argc, char const *argv[])
{
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}

// Arrays are always passed by reference ...

