#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    string name;
    double distanceKilometers, recordCost, totalCost, totalPurchaseCost, totalDeliveryCost;
    double salesTax = 1.14;
    double deliveryCharge = 15.0;

    cout << "Hipster's Local Vinyl Records - Customer Order Details\n\n";
    cout << "Enter the customers name:";
    cin >> name;
    cout << "Enter the distance in kilometers for delivery:";
    cin >> distanceKilometers;
    cout << "Enter the cost of records purchased:";
    cin >> recordCost;
    totalPurchaseCost = recordCost * salesTax;
    totalDeliveryCost = distanceKilometers * deliveryCharge;
    totalCost = totalPurchaseCost + totalDeliveryCost;
    //Set precision and fixed are to get 2 decimal places
    cout << "\nOrder summary for " << name << "\nDelivery Cost: " << fixed << setprecision(2) << totalDeliveryCost << "\nPurchase Cost: " << totalPurchaseCost
        << "\nTotal Cost: " << totalCost;

    return 0;
}