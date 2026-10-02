#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>

using namespace std;

int main() {


    char menuChoice;
    char sizeChoice;
    string drinkSize;
    string drinkChoice;
    int quantity;
    double drinkPrice;
    char memberInput;
    bool isMember = false;
    
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
    cin >> menuChoice;

    cout << "Choose a Size (S  M  L): " << endl;
    cin >> sizeChoice;

    cout << "How many drinks? " << endl;
    cin >> quantity;

    cout << "Are you a member(y/n)? ";
    cin >> memberInput;

    switch(toupper(menuChoice)) {

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
    double total = subTotal - discount;



    cout << "\n\n";
    cout << "=========================================================" << endl;
    cout << "                     PURCHASE RECEIPT                    " << endl;
    cout << "=========================================================" << endl;


    cout << fixed << setprecision(2);             // Receipt

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
     
    cout << left << setw(25) << "Total Due:"
          << right << setw(15) << "$" << total << endl;





}
