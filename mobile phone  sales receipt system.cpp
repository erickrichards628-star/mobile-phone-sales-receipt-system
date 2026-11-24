#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Store customer and purchase details
    string customerName;
    string phoneModel;
    int quantityBought;
    double pricePerPhone;

    // Collect input from the sales attendant
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model purchased: ";
    getline(cin, phoneModel);

    cout << "Enter quantity bought: ";
    cin >> quantityBought;

    cout << "Enter price per phone: ";
    cin >> pricePerPhone;

    // Compute total cost
    double totalSalesAmount = quantityBought * pricePerPhone;

    // Print formatted receipt
    cout << fixed << setprecision(2);
    cout << "\n--- Ruiru Mobile Shop Receipt ---\n";
    cout << "Customer Name : " << customerName << "\n";
    cout << "Phone Model   : " << phoneModel << "\n";
    cout << "Quantity      : " << quantityBought << "\n";
    cout << "Unit Price    : " << pricePerPhone << "\n";
    cout << "Total Amount  : " << totalSalesAmount << "\n";
    cout << "---------------------------------\n";

    return 0;
}