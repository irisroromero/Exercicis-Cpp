#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int input2;
    cin >> input2;
    int input3;
    cin >> input3;

    int maxim = max(input, input2, input3);

    cout << maxim << endl;
}