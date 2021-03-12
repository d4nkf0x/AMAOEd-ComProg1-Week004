/* ****************************************************************
 * @author: <your name here>
 * @app name: <your application name here>
 * @app desc: <describe the purpose of your application here>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////
int fibonacci(int n){
    int a = 0, b = 1, c = 0;
    for (int i = 1; i <= n; ++i) {
        if(i == 1 && n == 1) {
            c = a;
            return c;
            break;
        }
        if(i == 2 && n == 2) {
            c = b;
            return c;
            break;
        }
        if(i == 1) {
            cout << a << ", ";
            continue;
        }
        if(i == 2) {
            cout << b << ", ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        if(i == n){
            cout << c << endl;
            cout << "Segment Chosen["<<n<<"]: ";
            return c;
            break;
        }
        cout << c << ", ";
    }
}
int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
    int n; 

    cout << "Choose segment of the Fibonacci Sequence: ";
    cin >> n;
    cout << "Sequence["<<n<<"]: "<<fibonacci(n)<<endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
// 