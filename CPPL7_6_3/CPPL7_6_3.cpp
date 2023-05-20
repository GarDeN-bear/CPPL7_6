#include <iostream>
#include "vector.h"

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	std::cout << v.at(1) << '\n';
	std::cout << v.at(3) << '\n';
	std::cout << "vector's size: " << v.size() << '\n';
	std::cout << "vector's capacity: " << v.capacity() << '\n';

}