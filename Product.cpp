#include "Product.h"

Product::Product(){
    productID=0;
    productName="";
    price=0.0;
    quantity=0;
    category="";
}

Product::Product(int id,string name,double price,int quantity,string category){
    productID = id;
    productName = name;
    this->price = price;
    this->quantity = quantity;
    this->category = category;
}

void Product::inputProduct(){
    cout<<"Enter Product ID : ";
    cin>>productID;

    cin.ignore();

    cout<<"Enter Product Name : ";
    getline(cin, productName);

    cout<<"Enter Product Price : ";
    cin>>price;

    cout<<"Enter Product Quantity : ";
    cin>>quantity;

    cin.ignore();

    cout<<"Enter Product Category : ";
    getline(cin,category);
}

void Product::displayProduct(){
    cout << "\n------------------------------------\n";
    cout << "Product ID      : " << productID << endl;
    cout << "Product Name    : " << productName << endl;
    cout << "Price           : " << price << endl;
    cout << "Quantity        : " << quantity << endl;
    cout << "Category        : " << category << endl;
    cout << "------------------------------------\n";
}

int Product::getProductID(){
    return productID;
}

string Product::getProductName(){
    return productName;
}

double Product::getPrice(){
    return price;
}

int Product::getQuantity(){
    return quantity;
}

string Product::getCategory(){
    return category;
}

void Product::setProductID(int id)
{
    this->productID = id;
}

void Product::setProductName(string name)
{
    this->productName = name;
}

void Product::setPrice(double price)
{
    this->price = price;
}

void Product::setQuantity(int quantity)
{
    this->quantity = quantity;
}

void Product::setCategory(string category)
{
    this->category = category;
}

void Product::increaseStock(int amount){
    quantity += amount;
}

void Product::reduceStock(int amount)
{
    if (amount <= quantity)
    {
        quantity -= amount;
    }
    else
    {
        cout << "Insufficient stock!" << endl;
    }
}