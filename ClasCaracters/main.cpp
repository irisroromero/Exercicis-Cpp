#include <iostream>
using namespace std;

bool es_minuscula(char c)
{
    return c >= 'a' && c <= 'z';
}
bool es_vocal(char c)
{
    if (c == 'a')
    {
        return true;
    }
    if (c == 'A')
    {
        return true;
    }
    if (c == 'e')
    {
        return true;
    }
    if (c == 'E')
    {
        return true;
    }
    if (c == 'i')
    {
        return true;
    }
    if (c == 'I')
    {
        return true;
    }
    if (c == 'o')
    {
        return true;
    }
    if (c == 'O')
    {
        return true;
    }
    if (c == 'u')
    {
        return true;
    }
    if (c == 'U')
    {
        return true;
    }
    return false;
}

int main()
{
    char originalCharacter;
    cin >> originalCharacter;

    if (es_minuscula(originalCharacter))
    {
        cout << "minuscula" << endl;
    }
    else
    {
        cout << "majuscula" << endl;
    }

    if (es_vocal(originalCharacter))
    {
        cout << "vocal" << endl;
    }
    else
    {
        cout << "consonant" << endl;
    }
}
