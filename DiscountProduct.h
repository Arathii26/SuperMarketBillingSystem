#pragma once
#include "Product.h"

class DiscountProduct : public Product
{
private:
    double discount;

public:
    DiscountProduct();

    DiscountProduct(int id, string name, double price,
                    int quantity, string category,
                    double discount);

    void setDiscount(double discount);

    double getDiscount();

    double getDiscountedPrice();

    void displayProduct() override;
};