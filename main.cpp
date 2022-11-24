#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = 1, b = 0, c = 0;

    while (1 == 1)
    {
        c = a + b;
        a = b;
        b = c;
        if (c <= n)
        {
            cout << c << endl;
            continue;
        }
        break;
    }
}
