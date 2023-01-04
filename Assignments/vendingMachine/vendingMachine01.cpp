#include <iostream>
#include <vector>
#include <string>

using namespace std;

class VendingMachine
{
    vector<string> items;
    vector<double> prices;
    int num_items;
    double total_sales;
    double balance;

public:
    VendingMachine(vector<string> i, vector<double> p)
    {
        items = i;
        prices = p;
        num_items = items.size();
        total_sales = 0;
        balance = 0;
    }

    void displayMenu()
    {
        cout << "Welcome to the vending machine!\n\n";
        cout << "Menu:\n\n";
        for (int i = 0; i < num_items; i++)
        {
            cout << i + 1 << ". " << items[i] << " - $" << prices[i] << endl;
        }
    }

    void makePurchase()
    {
        int choice, quantity ;
        int vendorQuantity = 20;
        cout << "Enter the item number you want to purchase: ";
        cin >> choice;
        if (choice == 0)
        {
            return;
        }
        if (choice < 1 || choice > num_items)
        {
            cout << "Invalid choice. Please try again." << endl;
            return;
        }

        cout << "You have selected: " << items[choice - 1] << " - $" << prices[choice - 1] << endl;
        cout << "How much quantity you want of " << items[choice - 1] << " : ";
        cin >> quantity;

        double bill;
        bill = prices[choice - 1] * quantity;
        cout << "Total bill = " << bill << endl;

        cout << "Enter the amount you want to pay: $";
        double payment;
        cin >> payment;
        cout << "\n";

        if (payment < bill)
        {
            cout << "Not enough payment. Please try again." << endl;
            return;
        }
        else
        {
            cout << "Your change " << payment - bill << "$\n\n";
            cout << "Please collect your change if any.\n\n";
            cout << "Thank you for visiting. Visit Again !\n";
        }

        int remaining , count = 0;
        remaining = vendorQuantity - quantity;
        
       
        //while(quantity>0)
        //{
        cout << "Remaining "<< items[choice - 1] << " "<< remaining << endl;
            //vendorQuantity--;
            //count++;
        //}
        vendorQuantity = remaining;
    }
};

int main()
{
    vector<string> items = {"Cola", "Chips", "Candy"};
    vector<double> prices = {1.00, 0.50, 0.65};
    VendingMachine vm(items, prices);

    while (true)
    {
        vm.displayMenu();
        vm.makePurchase();
    }
    return 0;
}