#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    float r, s, t;
    r = 50e-3;
    s = 50e-4;
    t = s*r;
    cout << endl << "r = " << r;
    cout << endl << "s = " << s;
    cout << endl << "t = " << t;
    getchar();
    return 0;
}