#include <iostream>         //Preprocessive directive
using namespace std;

int main()        //main function
       {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)    //apply nested loop
	 {
    
        for(int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << "\n";   //escape sequence
    }
    return 0;
}

