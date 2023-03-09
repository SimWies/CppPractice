#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void)
{
    float radius, volumen, oberflaeche;
    cout << "Radius >";     // Eingabeaufforderung
    cin >> radius;          // Tastatureingabe

    while(radius != 0)
    {
        volumen = 4.0/3.0 * M_PI * pow(radius,3);
        oberflaeche = 4.0 * M_PI * pow(radius,2);

        cout << "Eingegebener Radius = " << radius << endl;
        cout << "Volumen = " << volumen << endl;
        cout << "Oberflaeche = " << oberflaeche << endl;
        cout << endl << "Radius >";
        cin >> radius;
    }
    cout << "Es wurde 0 für Radius eingegeben!" << endl;
    return 0;
}