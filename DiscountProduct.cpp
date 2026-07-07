#include "DiscountProduct.h"

DiscountProduct::DiscountProduct()
{
    discount = 0;
}

DiscountProduct::DiscountProduct(int id, string name, double price,
                                 int quantity, string category,
                                 double discount)
    : Product(id, name, price, quantity, category)
{
    this->discount = discount;
}

void DiscountProduct::setDiscount(double discount)
{
    this->discount = discount;
}

double DiscountProduct::getDiscount()
{
    return discount;
}

double DiscountProduct::getDiscountedPrice()
{
    return getPrice() - (getPrice() * discount / 100);
}

void DiscountProduct::displayProduct()
{
    Product::displayProduct();

    cout<<"Discount   :"<<discount<<"%"<<endl;
    cout<<"Final Price :"<<getDiscountedPrice()<<endl;
}