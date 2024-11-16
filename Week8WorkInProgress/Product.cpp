#include "Product.h"
#include <iostream>

Product::Product(const std::string& name, const std::string& category, double price)
    : name(name), category(category), price(price) {}

//Product::~Product();