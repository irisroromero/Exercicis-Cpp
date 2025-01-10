#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    int input2;
    cin >> input2;

    int cociente = input / input2;
    int residuo = input % input2;

    cout << cociente << " ";
    cout << residuo << endl;
}
