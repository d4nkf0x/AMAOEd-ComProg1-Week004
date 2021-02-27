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
    int height,i = 0,x=0,y = 0,j=0,spaces = 0,chars = 0;
    cout << "Enter height of inverted equilateral triangle: ";
    cin >> height;
    chars = height;
    do{ 
        if(y < spaces){
            cout << " ";
            y++;
            continue;
        }
        if(j < chars-1){
            cout << "*";
            j++;
            continue;
        }
        if(x < chars){
            cout << "*";
            x++;
            continue;
        }
        cout << endl;
        x=0;
        y=0;
        j=0;
        chars--;
        spaces++;
        i++;
    }while(i<=height);

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
// 