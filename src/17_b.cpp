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
    int choice,selector,j=1;
    int seats[5][7];
    for(int i = 0;i < 5; i++){
        for(int x = 0; x < 7; x++){
            seats[i][x] = j;
            j++;
            continue;
        }
    }
    while(true){
        for(int i = 0;i < 5; i++){
            for(int x = 0; x < 7; x++){
                cout << seats[i][x] << " ";
                continue;
            }
            cout << endl;
        }
        cout << "Choose a seat number: ";
        cin >> choice;
        if(choice > 5*7 || choice <= 0){
            cout << "Invalid Input" << endl;
            continue;
        }else{
            selector = choice / 7;
            choice = (choice - 7 * (selector)) - 1;
            if(seats[selector][choice] > 0){
                seats[selector][choice] = 0;
                cout << "Seat successfully reserved" << endl;
            }else{
                cout << "Seat is taken" << endl;
            }
        }
    }
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
// 