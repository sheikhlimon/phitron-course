#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_tax;

public:
    // take input
    void input()
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> food_item_codes[i];
            cin.ignore();
            getline(cin, food_item_names[i]);
            cin >> food_item_prices[i];
        }
    }

    // display output
    void display()
    {
        cout << endl
             << setw(40) << "MAKE BILL" << endl;
        cout << "-----------------------------------------------------------" << endl;
        cout << "Item Code" << setw(25) << "Item Name" << setw(25) << "Item Price" << endl;
        for (int i = 0; i <= 11; i++)
        {
            cout << endl
                 << setw(5) << food_item_codes[i] << setw(30) << food_item_names[i] << setw(20) << food_item_prices[i];
        }
        cout << endl
             << endl;
    }

    // make bill
    void bill(int item_code[], int quantity[], int item_no, int table)
    {
        int amount = 0;
        int total_price;
        cout << endl
             << "" << setw(50) << "Bill Summary " << endl;
        cout << "---------------------------------------------------------------------------------------------------" << endl;
        cout << "Table No, : " << table << endl;
        cout << "Item Code" << setw(20) << "Item Name" << setw(20) << "Item Price" << setw(20) << "Item Quantity" << setw(20) << "Total Price";
        for (int j = 0; j < item_no; j++)
        {
            for (int i = 0; i <= 11; i++)
            {
                if (food_item_codes[i] == item_code[j])
                {
                    total_price = food_item_prices[i] * quantity[j];
                    cout << endl
                         << food_item_codes[i] << setw(30) << food_item_names[i] << setw(15) << food_item_prices[i] << setw(15) << quantity[j] << setw(25) << total_price;
                    amount += total_price;
                }
            }
        }
        total_tax = 0.05 * amount;
        int net_amount = amount + total_tax;
        cout << endl
             << "TAX" << setw(85) << total_tax << endl;
        cout << "---------------------------------------------------------------------------------------------------" << endl;
        cout << "Net Total" << setw(80) << net_amount << " Taka";
    }

    // find if the item code match
    int find(int n)
    {
        int found = 0;
        for (int i = 0; i <= 11; i++)
        {
            if (food_item_codes[i] == n)
            {
                found = 1;
                return 1;
            }
        }
        if (found == 0)
        {
            cout << "Invalid Item Code" << endl;
        }
        return 0;
    }
};

int main()
{
    Restaurant rest;
    rest.input();
    rest.display();

    int table_no;
    int n;
    cout << "Enter Table No: ";
    cin >> table_no;
    cout << "Enter Number of Items: ";
    cin >> n;
    int item_code[n];
    int quantity[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Item " << (i + 1) << " Code: ";
        cin >> item_code[i];
        int found = rest.find(item_code[i]);
        while (found != 1)
        {
            cout << "Enter Item " << (i + 1) << " Code: ";
            cin >> item_code[i];
            found = rest.find(item_code[i]);
        }
        cout << "Enter Item " << (i + 1) << " Quantity: ";
        cin >> quantity[i];
    }

    rest.bill(item_code, quantity, n, table_no);

    return 0;
}
