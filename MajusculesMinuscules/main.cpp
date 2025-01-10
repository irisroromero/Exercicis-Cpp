#include <iostream>
using namespace std;

int main()
{
    char originalCharacter;
    cin >> originalCharacter;

    char result;
    if (originalCharacter >= 'a' && originalCharacter <= 'z')
    {
        result = toupper(originalCharacter);
    }
    else
    {
        result = tolower(originalCharacter);
    }

    cout << result << endl;
}