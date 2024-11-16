#include <vector>

#include <iostream>
#include <algorithm>
#include "QuantityProduct.h"
#include "WeightProduct.h"


int main()
{
#ifdef _DEBUG
	_onexit(_CrtDumpMemoryLeaks);
#endif
	std::vector<Product*> inventory;
	inventory.push_back(new QuantityProduct("apple", "food", 1.00, 20));
	inventory.push_back(new WeightProduct("milk", "dairy", 1.40, 0.5));

	std::vector<Product*>::iterator it;
	for (it = inventory.begin(); it != inventory.end(); it++) {
		(*it)->displayProduct();
	}
	

}

