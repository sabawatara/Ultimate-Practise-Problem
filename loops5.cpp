#include <iostream>

using namespace std;

int main ()
{
    for (int i = 42; i>= 17; i= --i)
    {
        cout<< i;

         if (i !=17)
            cout<< ", ";
        else
            cout<< ".";
    }

    return 0;
}
