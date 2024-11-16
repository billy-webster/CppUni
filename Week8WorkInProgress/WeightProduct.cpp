#include "WeightProduct.h"
#include <iostream>

WeightProduct::WeightProduct(const std::string& name, const std::string& category, double price, double weight) : Product(name, category, price), weight(weight) {}



void WeightProduct::adjustStock(double amount) {
    weight += amount;
}

void WeightProduct::displayProduct() const {
    
}

