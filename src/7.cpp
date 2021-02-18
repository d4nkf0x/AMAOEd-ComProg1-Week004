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
    cout << "Enter number[0-4]: ";
    int num = 5;
    cin >> num;
    if(num == 0){cout<<"Hello World"<<endl;std::cin.get();}
    else if(num == 1){cout<<"I am Groot"<<endl;std::cin.get();}
    else if(num == 2){cout<<"To the Top"<<endl;std::cin.get();}
    else if(num == 3){cout<<"Where is the horizon"<<endl;std::cin.get();}
    else if(num == 4){cout<<"I do not know"<<endl;std::cin.get();}
    else{cout<<"Yeah, I will"<<endl;std::cin.get();}

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
