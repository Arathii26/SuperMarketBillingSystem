#pragma once
#include "Product.h"

class Store{
    private:
        Product products[100];
        int productCount;

    public:
        Store();

        void addProduct();

        void displayAllProducts();

        void searchProduct();

        void removeProduct();

        void updateProduct();
};