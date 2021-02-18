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
    char name[500],program[500];
    int yearlvl;
    string yearname;
    double numofunits,rateperunit,tuitionfee,downpayment,balance;
    cout << "Enter Student Name: ";
    cin.getline(name,sizeof(name));
    cout << "Enter Program/Course: ";
    cin.getline(program,sizeof(program));
    cout << "Enter Year Level: ";
    cin >> yearlvl;
    cout << "Enter Number of Units: ";
    cin >> numofunits;
    switch(yearlvl){
        case 1:
        yearname ="Freshman";
        rateperunit = 1500;
        break;
        case 2:
        yearname ="Sophomore";
        rateperunit = 1800;
        break;
        case 3:
        yearname ="Junior";
        rateperunit = 2000;
        break;
        case 4:
        yearname ="Senior";
        rateperunit = 2300;
        break;
        case 5:
        yearname ="Senior";
        rateperunit = 2300;
        break;
    }
    tuitionfee = numofunits * rateperunit;
    downpayment = tuitionfee* 0.3;
    balance = tuitionfee - downpayment;

    cout << "         ENROLLMENT SLIP             " << endl;
    cout << "Student Name: " << name << endl;
    cout << "Program/Course: " << program << endl;
    cout << "Year Name: "<< yearname << endl;
    cout << "Num of Units: " << numofunits << endl;
    cout << "Tuition Fee: " << tuitionfee << endl;
    cout << "Down Payment: " << downpayment << endl;
    cout << "Balance: " << balance << endl;



    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
