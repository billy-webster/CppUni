#include "QuantityProduct.h"
#include <iostream>

QuantityProduct::QuantityProduct(const std::string& name, const std::string& category, double price, double quantity) : Product(name, category, price), quantity(quantity) {}


void QuantityProduct::adjustStock(double amount) {
    quantity += amount;
}

void QuantityProduct::displayProduct() const {

}