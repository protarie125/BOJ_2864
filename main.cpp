#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string a, b;
	cin >> a >> b;

	const auto& la = a.length();
	const auto& lb = b.length();

	// 5
	for (auto i = string::size_type{ 0 }; i < la; ++i) {
		if ('6' == a[i]) {
			a[i] = '5';
		}
	}

	for (auto i = string::size_type{ 0 }; i < lb; ++i) {
		if ('6' == b[i]) {
			b[i] = '5';
		}
	}

	auto issa = istringstream{ a };
	int va;
	issa >> va;

	auto issb = istringstream{ b };
	int vb;
	issb >> vb;

	cout << va + vb << ' ';

	// 6
	for (auto i = string::size_type{ 0 }; i < la; ++i) {
		if ('5' == a[i]) {
			a[i] = '6';
		}
	}

	for (auto i = string::size_type{ 0 }; i < lb; ++i) {
		if ('5' == b[i]) {
			b[i] = '6';
		}
	}

	issa = istringstream{ a };
	issa >> va;

	issb = istringstream{ b };
	issb >> vb;

	cout << va + vb;

	return 0;
}