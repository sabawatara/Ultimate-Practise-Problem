#include <iostream>             //includes input, output library

using namespace std;

int main()                      //main function
{                               //start of mainbody

    //Displays the first n number of the Fibonacci series

    int term;                 //declares integer variable

    cout<<"Please enter number of terms: ";         //prompts the user for number of terms

    cin>>term;                                      //takes user input

    cout<<endl;

    cout<<"The series is = ";

    int sum;                                    //declares integer variable

    int iter = 1;                               // declares value for iter=1

    cout<<iter;                                 //Displays the first number of the series



    for (int iter = 1; iter < term; iter=iter+1)    //for (initialization; condition; change)
    {

            sum = sum + iter;                       //adds 1 to the last digit each time loop is repeated
            cout << " , " << iter;

    }



    return 0;
}


