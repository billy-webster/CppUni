#include <vector>
#include "Product.h"
#include <iostream>
#include <algorithm>
//using std::cout;
//using namespace std;

void displayProduct(const Product& product)
{
	product.displayProduct();
	std::cout << "\n";

};

bool compareByPrice(const Product& lhs, const Product& rhs) 
{		
	return lhs.getPrice()<rhs.getPrice();
};

int main()
{
#ifdef _DEBUG
	_onexit(_CrtDumpMemoryLeaks);
#endif

	std::vector<Product> inventory;

	inventory.push_back(Product("apple","food", 0.5, 5));
	inventory.push_back(Product("laptop", "technology", 199.99, 3));
	inventory.push_back(Product("toothpaste", "toiletry", 2.99, 13));

	std::vector<Product>::iterator it;
	for (it = inventory.begin(); it != inventory.end(); it++) {
		it->displayProduct();
		std::cout << "\n";
	}
	
	std::cout << "sorted: " << "\n";
	
	
	
	sort(inventory.begin(), inventory.end(), compareByPrice);
	
	for_each(inventory.cbegin(), inventory.cend(), displayProduct);
	
	
	
	
	
	
	
	return 0;
}



