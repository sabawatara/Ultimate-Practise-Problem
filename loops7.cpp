#include <iostream>

using namespace std;

int main ()
{
    for (char i = 'a'; i<= 'z'; i= ++i)
    {
        cout<< i;

        if (i<'z')
            cout<< ",";
        else
            cout<< ".";


    }
    return 0;
}
