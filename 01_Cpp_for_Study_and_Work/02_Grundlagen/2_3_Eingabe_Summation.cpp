#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int summand1, summand2;
    int ergebnis;

    cout << "Eingabe Summand1 >";
    cin >> summand1;
    cout << "Eingabe Summand2 >";
    cin >> summand2;

    ergebnis = summand1 + summand2;
    cout << "Summe = " << ergebnis << endl;
    system("pause");
    return 0;
}