#include <iostream>

#include "vendingMachine.h"

using namespace std;

int main()
{
	inventory product;
	int choice , quantity ;

	// int Dollar = 1;
	// float Quarter = 0.25, Dime = 0.10, Nickel = 0.05;

	cout << "CCTech Vending Machine\n\n";

	while (product.hasProduct()) {
		cout << product.getCurrentProduct();
		cin >> choice;

        cout << "How much quantity of " << product.getProductName(choice) << " you want ? \n";
        cin >> quantity;

		if (choice > product.productSelection() || choice < 0) {
			cout << "Invalid Selection\n";
		}
		else
		{
			if (product.getQuantity(choice) > 0) 
            {
                cout << "Total bill\n = " ;
				product.sellProduct(choice);
				cout << product.getQuantity(choice) - (quantity) + 1 << " " << product.getProductName(choice) << " left\n";
			}
			else 
            {
				cout << "\nNo " << product.getProductName(choice) << "left\n";
			}
		}
	}	

}