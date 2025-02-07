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
cout << fixed << setprecision(2); // Format output to 2 decimal places
cout <<"\n--- Box Office Report ---\n"; 
cout << "Movie Name: " << movieName << endl; 
cout << "Adult Tickets Sold: " << adultTickets << endl; 
cout << "Child Tickets Sold: " << childTickets << endl; 
cout << "Gross Box Office Profit: $" << grossProfit << endl; 
cout << "Net Box Office Profit: $" << netProfit << endl; 
cout << "Amount Paid to Distributor: $" << distributorPayment << endl;




return 0;





}
