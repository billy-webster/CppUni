#include <iostream>
#include <list>

int main()
{
    std::list<int> numbers;
    for (int i = 0; i < 13; i++) {
        numbers.push_back(i);
    }

    std::list<int>::iterator it = numbers.begin();
    while (it != numbers.end()) {
        *it = (*it) * (*it);
        ++it;
    }

    std::list<int>::const_iterator const_it = numbers.begin();
    while (const_it != numbers.end()) {
        std::cout << *const_it++ << " ";
    }
    std::cout << '\n';

    return 0;
}
