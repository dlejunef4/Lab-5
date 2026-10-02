#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main() {


    char firstmenuChoice;
    char secondmenuChoice;
    char sizeChoice;
    string drinkSize;
    string drinkChoice;
    int quantity;
    double drinkPrice;
    char memberInput;
    bool isMember = false;
    double stateTax = 0.065;
    double countyTax = 0.005;
    double municipalTax = 0.02125;
    double tipChoice;
    double customtipChoice;
    
    cout << "Drink" << setw(23) << "Small" << setw(20) << "Medium"
    << setw(20) << "Large" << endl;

    cout << "A: Water" << setw(20) << "$0.00" << setw(20) << "$0.00"
    << setw(20) << "$0.00" << endl;

    cout << "B: Sprite" << setw(19) << "$0.99" << setw(20) << "$1.49"
    << setw(20) << "$1.99" << endl;

    cout << "C: Apple Juice" << setw(14) << "$0.79" << setw(20) << "$0.99"
    << setw(20) << "$1.29" << endl;

    cout << "D: Vodka" << setw(20) << "$3.99" << setw(20) << "$6.99"
    << setw(20) << "$9.99" << endl;

    cout << "Choose a Drink (A,B,C,D): " << endl;
    cin >> firstmenuChoice;

    cout << "Choose a Size (S  M  L): " << endl;
    cin >> sizeChoice;

    cout << "How many drinks? " << endl;
    cin >> quantity;

    cout << "Are you a member(y/n)? ";
    cin >> memberInput;

    switch(toupper(firstmenuChoice)) {

        case 'A':
        drinkChoice = "Water";
        if (sizeChoice == 'S') {
            drinkSize = "Small";
            drinkPrice = 0.00;
        }
        else if (sizeChoice == 'M') {
            drinkSize = "Medium";
            drinkPrice = 0.00;
        }
            else if (sizeChoice == 'L') {
            drinkSize = "Large";
            drinkPrice = 0.00;
        }
        break;

        case 'B':
        drinkChoice = "Sprite";
        if (sizeChoice == 'S') {
            drinkSize = "Small";
            drinkPrice = 0.99;
        }
        else if (sizeChoice == 'M') {
            drinkSize = "Medium";
            drinkPrice = 1.49;
        }
            else if (sizeChoice == 'L') {
            drinkSize = "Large";
            drinkPrice = 1.99;
        }
        break;

        case 'C':
        drinkChoice = "Apple Juice";
        if (sizeChoice == 'S') {
            drinkSize = "Small";
            drinkPrice = 0.79;
        }
        else if (sizeChoice == 'M') {
            drinkSize = "Medium";
            drinkPrice = 0.99;
        }
            else if (sizeChoice == 'L') {
            drinkSize = "Large";
            drinkPrice = 1.29;
        }
        break;

        case 'D':
        drinkChoice = "Vodka";
        if (sizeChoice == 'S') {
            drinkSize = "Small";
            drinkPrice = 3.99;
        }
        else if (sizeChoice == 'M') {
            drinkSize = "Medium";
            drinkPrice = 6.99;
        }
            else if (sizeChoice == 'L') {
            drinkSize = "Large";
            drinkPrice = 9.99;
        }
        break;

    }

    if (memberInput == 'y' || memberInput == 'Y') { 
        isMember = true; 
    }

    double subTotal = quantity * drinkPrice;  //subtotal
    double discount = isMember ? (subTotal * 0.10) : 0.0;

    double pretaxTotal = (subTotal - discount);
    double statetaxApplied = pretaxTotal * stateTax;
    double countytaxApplied = pretaxTotal * countyTax;
    double municipaltaxApplied = pretaxTotal * municipalTax;
    double totalTaxes = statetaxApplied + countytaxApplied + municipaltaxApplied;

    double total = pretaxTotal + totalTaxes;

    double fivePercent = total * 0.05;
    double tenPercent = total * 0.1;
    double fiftenPercent = total * 0.15;

    cout << fixed << setprecision(2);

    cout << "Tip Selection" << setw(14) << "Amount" << endl;

    cout << "A: 5%" << setw(20) << fivePercent << endl;

    cout << "B: 10%" << setw(19) << tenPercent << endl;

    cout << "C: 15%" << setw(19) << fiftenPercent << endl;

    cout << "D: Custom" << endl;

    cin >> secondmenuChoice;

    switch(toupper(secondmenuChoice)){
        case 'A':
            tipChoice = fivePercent;
            break;
        case 'B':
            tipChoice = tenPercent;
            break;
        case 'C':
            tipChoice = fiftenPercent;
            break;
        case 'D':
            cout << "How much would you like to tip?" << endl;
            cin >> customtipChoice;
            tipChoice = customtipChoice;
            

    }

    double totalplusTip = total + tipChoice;

    cout << "\n\n";
    cout << "=========================================================" << endl;
    cout << "                     PURCHASE RECEIPT                    " << endl;
    cout << "=========================================================" << endl;

    // Receipt

    cout << left <<setw(20) << "Drink"
         << left <<setw(8) << "Size"
         << right << setw(4) << "Qty"
         << right << setw(10) << "Price" << endl;
    
    cout << left <<setw(20) << drinkChoice
         << left <<setw(8) << sizeChoice
         << right << setw(4) << quantity
         << right << setw(10) << drinkPrice << "\n" << endl;
    cout << "=========================================================" << endl;

    cout << left << setw(25) << "Subtotal:"
         << right << setw(15) << "$" << subTotal << endl;

    if (isMember) {
     cout << left << setw(25) << "Discount Amount:"
          << right << setw(15) << "-$" << discount << endl;
    }

    cout << "=========================================================" << endl;


    cout << left << setw(25) << "State Tax (6.5%):"
         << right << setw(15) << "+$" << statetaxApplied << endl;

    cout << left << setw(25) << "County Tax (0.5%):"
         << right << setw(15) << "+$" << countytaxApplied << endl;

    cout << left << setw(25) << "Municipal Tax (2.125%):"
         << right << setw(15) << "+$" << municipaltaxApplied << endl;
     
    cout << "=========================================================" << endl;

    cout << left << setw(25) << "Tip Amount:"
         << right << setw(15) << "+$" << tipChoice << endl;

    cout << left << setw(25) << "Total Due:"
          << right << setw(15) << "$" << totalplusTip << endl;





}
