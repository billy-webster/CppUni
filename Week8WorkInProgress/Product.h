#pragma once
#include <string>

class Product
{
private:
	std::string name;
	std::string category;
	double price;
public:
	Product(const std::string& name, const std::string& category, double price);
	virtual void displayProduct() const = 0;
	virtual void adjustStock(double amount) = 0;
	//~Product();


};

