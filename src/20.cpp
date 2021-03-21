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
#include "Dog.h"

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
    Dog doge(4,"White",true,"Chihuahua",14.5,true);
    doge.setFur("Gold");
    doge.setBreed("Shiba Inu");
    string tail = doge.getTail() ? "tail" : "no tail";
    string Register = doge.getRegister() ? "registered" : "not registered";
    cout << "The Dog " << doge.getBreed() << " is " << doge.getFur()<< " is " << doge.getSize() << " inches tall "
    << "\nhas " << doge.getLegs() << " legs ";
    cout << "\nhas " << tail;
    cout << "\nand is " << Register;
    cout << endl;
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
// 