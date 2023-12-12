#include <iostream>
using namespace std;

// Void
void printName() {
    cout << "Hey Keval :)" << endl;
}

// Parameterised
void printName2(string name) {
    cout << "Hey " << name << " :)" << endl;
}

int main(int argc, char const *argv[])
{
    // void -> which does not return anything
    // return
    // parameterised
    // non paramterised

    printName();    

    string name;
    cin >> name;
    printName2(name);

    return 0;
}

