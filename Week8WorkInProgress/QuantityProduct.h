#pragma once
#include "Product.h"
class QuantityProduct : public Product
{
private:
	double quantity;

public:
	QuantityProduct(const std::string& name, const std::string& category, double price, double quantity);
	void displayProduct() const override;
	void adjustStock(double amount) override;

};

