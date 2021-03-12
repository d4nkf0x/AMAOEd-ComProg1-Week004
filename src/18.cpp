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
int divide(int a,int b){
    return a/b; 
}
int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
    int b[3];
    int c[3];
    for(int n = 0; n < 3; n++){
        cout << "Enter dividend["<<n+1<<"]: ";
        cin >> b[n];
        cout << "Enter divisor["<<n+1<<"]: ";
        cin >> c[n];
    }
    cout << "Results: ";
    for(int n = 0; n < 3; n++){
        cout << "[" << b[n] << "/" << c[n] <<"]: " << divide(b[n],c[n])<< " | ";
    }
    cout << endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
// 