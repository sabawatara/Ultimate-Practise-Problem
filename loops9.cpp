#include <iostream>

using namespace std;

int main()

{
    for (int i = -42; i<= -8; i= i + 2)
    {
        cout<< i;

        if (i != -8)
            cout<< ", ";
        else
            cout<< ".";
    }
    return 0;
}
