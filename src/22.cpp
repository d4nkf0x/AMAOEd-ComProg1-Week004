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
#include <stdio.h>
#include <locale.h>
#include "_pause.h"
#include "Payslip.h"

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
    setlocale(LC_NUMERIC,"");
    cout << "Input employee name: ";
    char name[100];
    cin.getline(name,sizeof(name));
    cout << "Input basic salary: ";
    int basicsalary;
    cin >> basicsalary;
    cout << "Input overtime hours: ";
    float overtimehours;
    cin >> overtimehours;
    Payslip pslip(name,basicsalary,overtimehours);
    cout << "Employee Name  	: " << pslip.getName() << endl;
    cout << "Basic Salary		: ";
    printf("Php%.2f\n",pslip.getBasicSalary());
    cout << "Pay Grade		: " << pslip.getPayGrade() << endl;
    cout << "No. of OT Hours	: " << pslip.getOvertimeHours() << endl;
    cout << "OT Pay		: ";
    printf("Php%.2f\n",pslip.getOvertimePay());
    cout << "Gross Pay		: ";
    printf("Php%.2f\n",pslip.getGrossPay());
    cout << "Withholding Tax	: ";
    printf("Php%.2f\n",pslip.getWithHoldingTax());
    cout << "Net Pay		: ";
    printf("Php%.2f\n",pslip.getNetPay());
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
// 