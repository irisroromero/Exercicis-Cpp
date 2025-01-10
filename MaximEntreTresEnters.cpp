#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int input2;
    cin >> input2;
    int input3;
    cin >> input3;

    int maxim;

    bool esInput1Maxim = (input >= input2) && (input >= input3);
    bool esInput2Maxim = input2 >= input3;
    if (esInput1Maxim)
    {
        maxim = input;
    }
    else if (esInput2Maxim)
    {
        maxim = input2;
    }
    else
    {
        maxim = input3;
    }

    cout << maxim << endl;
}