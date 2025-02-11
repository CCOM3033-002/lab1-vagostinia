// Victoria S. Agostini
// 801-22-4654
// Lab: Box Office
// Colaboradores: https://cplusplus.com/reference/ios/left/ , https://cplusplus.com/reference/ios/fixed/

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
    getline(cin, movieName);

    cout << "Adult Tickets Sold: ";
    cin >> adultTickets;

    cout << "Child Tickets Sold: ";
    cin >> childTickets;

    // Calculations
    // Gross profit
    double  grossProfit = (adultTickets * ADULT_PRICE) + (childTickets * CHILD_PRICE);

    // Net profit
    double netProfit = grossProfit * THEATER_PERCENTAGE;

    // Distributor payment
    double distributorPayment = grossProfit - netProfit;

// Display results
    cout << fixed << setprecision(2);
    cout << left << setw(25) << "Movie Name:" << "  \"" << movieName << "\"" << endl;
    cout << left << setw(25) << "Adult Tickets Sold:" << "  " << setw(10) << adultTickets << endl;
    cout << left << setw(25) << "Child Tickets Sold:" << "  " << setw(10) << childTickets << endl;
    cout << left << setw(25) << "Gross Box Office Profit:" << "  $  " << setw(8) << grossProfit << endl;
    cout << left << setw(25) << "Net Box Office Profit:" << "  $   " << setw(8) << netProfit << endl;
    cout << left << setw(25) << "Amount Paid to Distributor:" << "$  " << setw(8) << distributorPayment << endl;




return 0;





}
