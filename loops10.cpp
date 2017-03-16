#include <iostream>

using namespace std;

int main()
{


int num1, num2;

cout<< "Please input your first number: "<<endl;
cin>> num1;
cout<< "Please input your second number: "<<endl;
cin>> num2;

    for (int i = num1; i<= num2; i++)
    {
        cout<< i;

        if (i != num2)
            cout<< ", ";
        else
            cout<< ".";
    }
    return 0;
}
