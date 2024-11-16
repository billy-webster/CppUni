#include "Product.h"

Product::Product(const std::string name, std::string category, double price, int quantity) : name(name), category(category), price(price), quantity(quantity) 
{}

void Product::displayProduct() const {
	std::cout << "Name: " << name << ", Category: " << category << ", Price: \x9c" << price << ", Quantity: " << quantity;
}


double Product::getPrice() const{
	return (price);
}