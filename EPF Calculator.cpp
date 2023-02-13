//this is a simple employee provident funds calculator write by YH using compound interest formula
#include <iostream>
#include <cmath>
#include <iomanip>
#define day 365 /*because 1 year have 365 days and epf count at least a year*/
using namespace std;
/*main*/
int main()
{
    double present, r3turn, percent, epf, interest;
    int time;

    cout << "  --------------------------------------" << endl;
    cout << "   EPF Calculator 1.0 ---> Credit to YH" << endl;
    cout << "  --------------------------------------" << endl;
    cout << "  Notice : This program only can count the current saving of EPF in the future with static dividend" << endl << endl;
    cout << "\n  Your current EPF saving : RM ";
    cin >> present;
    cout << "\n  Dividend of EPF (%): ";
    cin >> r3turn;
    cout << "\n  How long your EPF saving (at least a year) : ";
    cin >> time;
    /*epf calculator function*/
    percent = r3turn / 100;
    epf = present * pow((1 + (percent / day)), (day * 1));
    interest = present * pow((1 + (percent / day)), (day * 1)) - present;
    /*final output*/
    cout << "\n\n\n  Your EPF interest after " << time << " years is RM ";
    cout <<fixed<<setprecision(2) << interest << " with "<< r3turn <<" % dividend"<<endl;
    cout << "\n  Your final EPF saving after "<< time <<" years is RM ";
    cout <<fixed<<setprecision(2) << epf << " with " << r3turn << " % dividend"<< endl;

    return 0; /*program will execute succesfully unless have a logical or syntax error, return 0 is not a must*/
}
