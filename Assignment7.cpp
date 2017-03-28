#include <iostream>

using namespace std;

int main() {

    int row, column;                            //declaring variable
    int i=0,j;                                //declaring and initializing variable
    cout<<"Please enter number of rows: \n";    //prompt for input
    cin>>row;
    cout<<"Please enter number of columns: \n"; //prompt for input
    cin>>column;

    for(j=0;j<row;++j){                         //loop runs for number of times as row
        while (i<column){                       //loop runs for number of times as column

            ++i;
            cout<<i<<" ";
        }
        cout<<endl;                             //adding new line
        i=0;                                    //reinitialize variable for the loop
    }
    return 0;
}
