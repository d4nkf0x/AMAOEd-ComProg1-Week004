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
    int height;
    int spaces [1][2];
    char n[10] = {'A','B','C','D','E','F','G','H','I','J'}; 
    cout << "Enter height of triangle: ";
    cin >> height;
    if(height > 10){
        height = 10;
    }else if(height < 1){
        height = 1;
    }
    spaces[0][0] = 1;
    spaces[0][1] = height;
    for(int i = 0; i < height; i++){
        for(int x = 0; x < spaces[0][1]; x++){
            cout << " ";
            continue;
        }
        for(int x = 0; x < spaces[0][0]; x++){
            cout << n[i];
            continue;
        }
        for(int x = 0; x < spaces[0][0]-1; x++){
            cout << n[i];
            continue;
        }
        spaces[0][0]++;
        spaces[0][1]--;
        cout << endl;
    }

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
// 