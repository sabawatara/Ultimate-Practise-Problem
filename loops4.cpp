#include <iostream>

using namespace std;

int main()
{
    int i;

    cout<< "The series is: "<<endl;

    for(i = 0; i < 100; i++)
    {
        cout<< i;

        if (i !=99)
            cout<< ", ";
        else
            cout<< ".";
    }
return 0;
}

