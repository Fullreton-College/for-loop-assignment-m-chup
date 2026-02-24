// Chapter 5, Programming Challenge 17: Sales Bar Chart
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sales1, sales2, sales3, sales4, sales5;

    cout << "Enter today's sales for store 1: ";
    cin >> sales1;
    cout << "Enter today's sales for store 2: ";
    cin >> sales2;
    cout << "Enter today's sales for store 3: ";
    cin >> sales3;
    cout << "Enter today's sales for store 4: ";
    cin >> sales4;
    cout << "Enter today's sales for store 5: ";
    cin >> sales5;

    cout << endl;
    cout << "SALES BAR CHART" << endl;
    cout << "(each * = $100)" << endl;

    cout << "Store 1: ";
    for (int star = 1; star <= sales1/100; star++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "Store 2: ";
    for (int star = 1; star <= sales2/100; star++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "Store 3: ";
    for (int star = 1; star <= sales3/100; star++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "Store 4: ";
    for (int star = 1; star <= sales4/100; star++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "Store 5: ";
    for (int star = 1; star <= sales5/100; star++)
    {
        cout << "*";
    }
    cout << endl;

    return 0;
}
