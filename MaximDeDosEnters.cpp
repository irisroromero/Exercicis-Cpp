#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int input2;
    cin >> input2;

    int maxim;

    bool esInput1Maxim = input >= input2;
    if (esInput1Maxim)
    {
        maxim = input;
    }
    else
    {
        maxim = input2;
    }

    cout << maxim << endl;
}