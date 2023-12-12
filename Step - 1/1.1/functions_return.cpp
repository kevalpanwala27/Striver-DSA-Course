#include <iostream>
using namespace std;

// Take two numbers and print its sum.

int sum(int a, int b) {
    return a + b;
}
// int, char, float, double, long ...

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << sum(a, b) << endl;

    return 0;
}


// Every function with the return data type have must have a return statement ...


