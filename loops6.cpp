#include <iostream>

using namespace std;

int main ()
{
    for (float i = 2.25; i<= 4; i= i+ 0.25)
    {
        cout<< i;

        if (i !=4)
            cout<< ", ";
        else
            cout<< ".";
    }
    return 0;
}
