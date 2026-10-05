//29252
//mwoshi ben
// computer science year 2

#include <iostream>
using namespace std;

int main() {
    string customer_name;
    string model;
    int quantity;
    float price, total_sales;

    cout << "Enter name: " << endl;
    cin >> customer_name;

    cout << "Phone model: " << endl;
    cin >> model;

    cout << "Quantity purchased: " << endl;
    cin >> quantity;

    cout << "Price per phone: " << endl;
    cin >> price;

    total_sales = quantity * price;

    cout << "\nSales receipt:" << endl;
    cout << "==================" << endl;
    cout << "Customer name: " << customer_name << endl;
    cout << "Phone model: " << model << endl;
    cout << "Quantity purchased: " << quantity << endl;
    cout << "Price per phone: " << price << endl;
    cout << "==================" << endl;
    cout << "Total sales: " << total_sales << endl;
    cout << "==================" << endl;

    return 0;
}