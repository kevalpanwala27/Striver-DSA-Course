#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int 
    int x = 10;

    // long
    long x = 15;
    cin >> x;

    long long x = 15;

    // float, double
    float x = 5.6;
    double y = 5;
    cout << "Value of y: " << y << endl;

    // string and getline
    string s;
    cin >> s;
    cout << s << endl;

    string s1;
    string s2;

    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl;

    // use of getline
    string str;
    getline(cin,str);
    cout << str << endl;

    // char
    char ch;
    cin >> ch;
    cout << ch;

    char ch = 'g';
    cout << ch << endl;

    string ch = "g";
    cout << ch << endl;
    return 0;
}


