#include <iostream>
#include "Product.h"
using namespace std;

int main(){
    
    cout << "==========================================" << endl;
    cout << "     SUPERMARKET BILLING SYSTEM" << endl;
    cout << "         Product Class Testing" << endl;
    cout << "==========================================" << endl;
    
    
    cout<<"\nTEST 1 :Default Constructor\n"<<endl;
    Product p1;
    p1.inputProduct();
    
    cout<<"\nProduct Details Entered:\n";
    p1.displayProduct();

    
    cout<<"\nTEST 2: Parameterized Constructor\n"<<endl;
    Product p2(102,"Rice",65.50,30,"Groceries");

    cout<<"Displaying product Created using Parameterized Constructor:\n";
    p2.displayProduct();

    cout<<"\nTEST 3: Setter Functions\n"<<endl;
    p2.setPrice(70.00);
    p2.setQuantity(40);

    cout<<"After Updating Price and Quantity:\n";
    p2.displayProduct();


    cout << "\nTEST 4 : Getter Functions\n" << endl;

    cout << "Product ID       : " << p2.getProductID() << endl;
    cout << "Product Name     : " << p2.getProductName() << endl;
    cout << "Price            : " << p2.getPrice() << endl;
    cout << "Quantity         : " << p2.getQuantity() << endl;
    cout << "Category         : " << p2.getCategory() << endl;

    cout << "\nTEST 5 : Increase Stock\n" << endl;
    p2.increaseStock(10);

    cout<<"After Increasing Stock:\n";
    p2.displayProduct();

    cout<<"\nTEST 6 : Reduce Stock\n"<<endl;
    p2.reduceStock(20);

    cout<<"After Reducing Stock by 20:\n";
    p2.displayProduct();

    cout<<"\nTEST 7 : Invalid Stock Reduction\n"<<endl;
    p2.reduceStock(100);

    cout<<"\nFinal Product Details:\n";
    p2.displayProduct();

    cout << "\n==========================================" << endl;
    cout << "     DAY 1 TESTING COMPLETED SUCCESSFULLY" << endl;
    cout << "==========================================" << endl;

return 0;
}