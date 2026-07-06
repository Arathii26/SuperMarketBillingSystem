#include <iostream>
#include "Store.h"

using namespace std;

int main()
{
    Store supermarket;
    int choice;

    do
    {
        cout << "\n=====================================\n";
        cout << "    SUPERMARKET MANAGEMENT SYSTEM\n";
        cout << "=====================================\n";
        cout << "1. Add Product\n";
        cout << "2. Display All Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Product\n";
        cout << "5. Remove Product\n";
        cout << "6. Generate Bill\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            supermarket.addProduct();
            break;

        case 2:
            supermarket.displayAllProducts();
            break;

        case 3:
            supermarket.searchProduct();
            break;

        case 4:
            supermarket.updateProduct();
            break;

        case 5:
            supermarket.removeProduct();
            break;

        case 6:
            supermarket.generateBill();
            break;

        case 7:
            cout << "\nThank you for using the Supermarket Management System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}