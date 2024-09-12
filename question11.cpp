#include <iostream>
#include <string>
using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;

public:
    
    Invoice(string pNumber, string pDescription, int qty, double price) {
        partNumber = pNumber;
        partDescription = pDescription;
        setQuantity(qty);
        setPricePerItem(price);
    }

    
    void setPartNumber(string pNumber) { partNumber = pNumber; }
    string getPartNumber() { return partNumber; }

    
    void setPartDescription(string pDescription) { partDescription = pDescription; }
    string getPartDescription() { return partDescription; }

   
    void setQuantity(int qty) { quantity = (qty > 0) ? qty : 0; }
    int getQuantity() { return quantity; }


    void setPricePerItem(double price) { price_per_item = (price > 0) ? price : 0.0; }
    double getPricePerItem() { return price_per_item; }

    double getInvoiceAmount() {
        return quantity * price_per_item;
    }
};


int main() {
    Invoice invoice("BOAT_9584", "Best Sound Quality", 1290, 15.50);
    
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per Item: $" << invoice.getPricePerItem() << endl;
    cout << "Total Invoice Amount: $" << invoice.getInvoiceAmount() << endl;

    return 0;
}
