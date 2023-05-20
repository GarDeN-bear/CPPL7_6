#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <iterator>
#include <algorithm>

bool compare_second(std::pair<char, int> a, std::pair<char, int> b) {
	return a.second > b.second;
}
void sort(std::map<char, int>& m) {
	std::vector<std::pair<char, int>> v;
	for (const auto& el : m) {
		v.push_back(el);
	}
	std::sort(v.begin(), v.end(), compare_second);

	for (const auto& el : v) {
		m.insert(el);
	}
	for (const auto& el : v) {
		std::cout << el.first << ": " << el.second << "\n";
	}

}
int main() {
	std::string str = "Hello world!!";
	std::cout << "[IN]: ";
	for (const auto& el : str) {
		std::cout << el;
	}
	std::multimap<char, int> mm;
	std::map<char, int> m;

	for (int i = 0; i < str.size(); ++i) {
		mm.insert(std::make_pair(str[i], 1));
	}
	for (const auto& el : mm) {
		m[el.first] = mm.count(el.first);
	}
	std::cout << "\n[OUT]:\n";
	sort(m);

}