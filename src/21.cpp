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
#include <string>
#include "_pause.h"
#include "Student.h"

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
    Student Joshua("Joshua","Washington DC",21,true,"Computer Science",1,"AMA Online Univerity");
    string gender = Joshua.getGender() ? "Male" : "Female";
    cout
    << Joshua.getName() << " is a " <<  Joshua.getAge() << " year old " << gender << " "
    << Joshua.getOccupation() << " of " << Joshua.getUniversity() << "\nliving in " << Joshua.getAddress() << " and is studying "
    << Joshua.getYear() << " year(s) in " << Joshua.getProgram();
    cout << endl;    
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
// 