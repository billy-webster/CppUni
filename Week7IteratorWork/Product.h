#pragma once
#include <iostream>
#include <string>
class Product
{
private:
	std::string name;
	std::string category;
	double price;
	int quantity;

public:
	Product(const std::string name, std::string category, double price, int quantity);
	void displayProduct() const;
	double  getPrice() const;
};

