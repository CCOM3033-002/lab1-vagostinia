// Victoria S. Agostini
// 801-22-4654
// Lab Box Office

#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

int main() {
    // Display purpose of program
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl;

    // Adult and children ticket costs + percentage theater keeps
    const double ADULT_PRICE = 10.00;
    const double CHILD_PRICE = 6.00;
    const double THEATER_PERCENTAGE = 0.20;

    // Variables to store sales
    string movieName;
    int adultTickets, childTickets;

    // Input
    cout << "Movie name: ";
    getline(in, movieName)

    cout << "Adult Tickets Sold: ";
    cin >> adultTickets;

    cout << "Child Tickets Sold: ";
    cin >> childTickets;

    // Calculations
    // Gross profit

    double  grossProffit = (adultTickets * ADULT_PRICE) + (childTickets * CHILD_PRICE)








}
