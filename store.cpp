#include "Store.h"
#include <iostream>

using namespace std;

Store::Store()
{
    productCount = 0;
}

void Store::addProduct()
{
    if (productCount < 100)
    {
        cout << "\nEnter Product Details\n";
        products[productCount].inputProduct();

        productCount++;

        cout << "\nProduct Added Successfully!\n";
    }
    else
    {
        cout << "Store is Full!\n";
    }
}

void Store::displayAllProducts()
{
    if (productCount == 0)
    {
        cout << "\nNo Products Available.\n";
        return;
    }

    cout << "\n========== PRODUCT LIST ==========\n";

    for (int i = 0; i < productCount; i++)
    {
        products[i].displayProduct();
    }
}