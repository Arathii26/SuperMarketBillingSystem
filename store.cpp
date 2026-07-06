#include "Store.h"
#include <iostream>

using namespace std;

Store::Store(){
    productCount = 0;
}

void Store::addProduct(){
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

void Store::displayAllProducts(){
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

void Store::searchProduct(){
    int id;
    cout<<"Enter Product ID to search: ";
    cin>>id;

    for(int i=0;i<productCount;i++){
        if(products[i].getProductID()==id){
            cout<<"\nProduct Found\n";
            products[i].displayProduct();
            return;
        }
    }
    cout<<"\nProduct Not Found\n";
}

void Store::removeProduct(){
    int id;
    cout<<"Enter Product ID to remove: ";
    cin>>id;

    for(int i=0;i<productCount;i++){
        if(products[i].getProductID()==id){
            for(int j=i;j<productCount-1;j++){
                products[j]=products[j+1];
            }
        productCount--;

        cout<<"\nProduct Removed Successfully!\n";
        return;
        }
    }
    cout<<"\nProduct Not Found\n";
}

void Store::updateProduct(){
    int id;
    cout<<"Enter Product ID to update: \n";
    cin>>id;

    for(int i=0;i<productCount;i++){
        if(products[i].getProductID()==id){
            cout<<"Enter New Product Details: ";
            products[i].inputProduct();

            cout<<"\nProduct Updated Successfully!\n";
            return;
        }
    }
    cout<<"\n Product Not Found\n";
}