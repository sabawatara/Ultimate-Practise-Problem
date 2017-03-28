#include <iostream>                  //input output library

using namespace std;

int main() {                        //main function


    cout<<"Please enter your number of rows: \n";

    int rows,i,j;                               //declaring variables
    cin>>rows;                                  //prompt for input
    cout<<"\n"<<"\n";                           //adds two new line

    for (i=0; i<=rows; ++i){                    //creates loop that runs the number of times as rows

            for (j=0; j<i; ++j){                //this loop prints * as many times as the number of its line
            cout<<"* ";
            }
        cout<<endl;
    }

    return 0;
}
