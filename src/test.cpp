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

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************
    int n[5];

    for(int i = 0; i < 5; i++){
        cout << "Enter number[" << i + 1 << "]:";
        cin >> n[i];
    }
    cout << endl;

    for(int i = 0; i < 5; i++){
        for(int t = i; t < 5; t++){
            if(n[i] > n[t]){
                int temp = n[i];
                n[i] = n[t];
                n[t] = temp;
            }
        }
    }

    cout << "The sorted numbers are: " << n[0] << ", ";
    cout << n[1] << ", " << n[2] << ", " << n[3] << ", ";
    cout << n[4] << ".";

    cout << endl; 

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
// 