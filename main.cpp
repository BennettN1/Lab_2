/*
Nick Bennett
C++ 2021 / Sept. 15, 2021
Lab 2 Exploring Output / String Lab
 Learning how to use the string function to help lessen the typing that we have to do over time while making the code.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Outputting schedule to screen
    // Getting all of the strings made to use in the cout option inside of the coding to out put to the screen. Also the top part is the first assignment of the lab.
    string M = "Monday";
    string TU = "Tuesday";
    string W = "Wednesday";
    string TH = "Thursday";
    string F = "Friday";
    string Ca = "Calculus 2 216";
    string P = "Classical Physics 212";
    string OC = "Organic Chemristy 265";
    string C = "C++ 162";
    string fct = "8:00"; //fct = First Class Time
    string sct = "10:00"; // sct = Second Class Time
    string tct = "12:00"; // tct = Third Class Time
    string foct = "2:00"; // foct = Fourth Class Time
    
    
    cout << M + "\t" + "\t" + fct + "\t" + Ca << endl; // using the "\t" was a tab between the words and endl to make the computer push to the next line
    cout << M + "\t" + "\t" + sct + "\t" + C << endl;
    cout << M + "\t" + "\t"+ foct + "\t" + P << endl;
    cout << TU + "\t" + "\t"+ sct + "\t" + C << endl;
    cout << TU + "\t" + "\t"+ tct + "\t" + OC << endl;
    cout << TU + "\t" + "\t"+ foct + "\t" + P << endl;
    cout << W + "\t" + fct + "\t" + Ca << endl;
    cout << W + "\t" + sct + "\t" + C << endl;
    cout << W + "\t" + foct + "\t" + P << endl;
    cout << TH + "\t"+ sct + "\t" + C << endl;
    cout << TH + "\t" + tct + "\t" + OC << endl;
    cout << TH + "\t" + foct + "\t" + P << endl;
    cout << F + "\t" + "\t" + fct + "\t" + OC << endl;
    cout << F + "\t" + "\t" + sct + "\t" + C << endl << endl;
    
    //This is the second assignment of the lab
    string S = "*     *       *       *";
    string G = "  *       *       *       *";
    // Using double endl function to keep it as the same as the lab worksheet format for the second part of the lab
    cout << G << endl << endl;
    cout << S << endl << endl;
    cout << G << endl << endl;
    cout << S << endl << endl;
    cout << G << endl << endl;
    cout << S << endl << endl;
    cout << G << endl << endl;
    cout << S << endl << endl;
    return 0;
}
