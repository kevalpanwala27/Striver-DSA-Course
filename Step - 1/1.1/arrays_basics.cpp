#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // 1D Array
    int arr[5]; // We can use any data type --> int, long, char ... etc
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[3] += 10;
    cout << arr[3] << endl;

    // 2D Array
    int arr[3][5]; // [3] is Row and [5] is Column
    arr[1][3] = 78;
    cout << arr[1][3] << endl;

    return 0;
}
