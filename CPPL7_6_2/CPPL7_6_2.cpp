#include <iostream>
#include <set>
#include <vector>

int main() {
	std::set<int, std::greater<int>> s;
	std::cout << "[IN]:\n";
	int N;
	std::cin >> N;
	std::vector<int> arr(N);

	for (int i = 0; i < N; ++i) {
		std::cin >> arr[i];
		s.insert(arr[i]);
	}
	std::cout << "[OUT]:\n";
	for (const auto& el : s) {
		std::cout << el << "\n";
	}

}