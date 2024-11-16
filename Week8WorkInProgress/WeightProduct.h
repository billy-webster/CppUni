#pragma once
#include "Product.h"
class WeightProduct : public Product
{
private:
	double weight;

public:
	WeightProduct(const std::string& name, const std::string& category, double price, double weight);
	void displayProduct() const override;
	void adjustStock(double amount) override;
};

