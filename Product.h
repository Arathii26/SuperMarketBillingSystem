#pragma once

#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    int productID;
    string productName;
    double price;
    int quantity;
    string category;

public:
    // Constructors
    Product();

    Product(int id,
            string name,
            double price,
            int quantity,
            string category);

    // Input & Display
    void inputProduct();
    void displayProduct();

    // Getters
    int getProductID();
    string getProductName();
    double getPrice();
    int getQuantity();
    string getCategory();

    // Setters
    void setProductID(int id);
    void setProductName(string name);
    void setPrice(double price);
    void setQuantity(int quantity);
    void setCategory(string category);

    // Stock Management
    void increaseStock(int amount);
    void reduceStock(int amount);
};