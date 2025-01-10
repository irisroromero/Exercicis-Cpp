#include <iostream>
using namespace std;

int main()
{
    int temperatura;
    cin >> temperatura;

    bool facalor = temperatura > 30;
    bool fafred = temperatura < 10;
    bool estabe = temperatura >= 10 && temperatura <= 30;

    bool bulliria = temperatura >= 100;
    bool gelaria = temperatura <= 0;

    if (facalor)
        cout << "fa calor" << endl;
    else if (fafred)
        cout << "fa fred" << endl;
    else if (estabe)
        cout << "s'esta be" << endl;

    if (bulliria)
        cout << "l'aigua bulliria" << endl;
    else if (gelaria)
        cout << "l'aigua es gelaria" << endl;
}
