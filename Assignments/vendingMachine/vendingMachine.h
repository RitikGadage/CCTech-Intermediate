#include <sstream>

using namespace std;

class inventory {
	struct drink
	{
		string name;
		float price;
		int quantity;
	};

	drink inv[3];

public:
	inventory();
	string getCurrentProduct();
	void sellProduct(int i);
	string getProductName(int i);
	int getQuantity(int i);
	int productSelection();
	bool hasProduct();
    int howMuchQuantity();
};

inventory::inventory() {
	inv[0].name = "Cola";
	inv[0].price = 1.00;
	inv[0].quantity = 10;

	inv[1].name = "Chips";
	inv[1].price = 0.50;
	inv[1].quantity = 10;

	inv[2].name = "Candy";
	inv[2].price = 0.65;
	inv[2].quantity = 10;
}

string inventory::getCurrentProduct() {
	ostringstream machine;
	string str;
	machine << "\nProduct Available\n";

	for (int i = 0; i < (sizeof(inv) / sizeof(*inv)); i++) {
		machine << (i) << ": " << inv[i].name << ": $" << inv[i].price << "\n";
	}
	return str = machine.str();;
}

void inventory::sellProduct(int i) {
	inv[i].quantity--;
}

string inventory::getProductName(int i) {
	return inv[i].name;
}

int inventory::getQuantity(int i) {
	try {
		return inv[i].quantity;
	}
	catch (exception ex) {
		return -1;
	}
}

int inventory::productSelection() {
	return (sizeof(inv) / sizeof(*inv));
}

bool inventory::hasProduct() {
	int val = 0;
	for (int i = 0; i < (sizeof(inv) / sizeof(*inv)); i++) {
		val += inv[i].quantity;
	}
	if (val > 0) {

		return 1;
	}
	else {
		return 0;
	}
}

