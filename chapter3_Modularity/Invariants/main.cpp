#include <iostream>
#include <cmath>

class Vector {
public:
	Vector(int s) {
		if (s < 0) {
			throw std::length_error{"Vector length: Negative size"};
		}
		elem = new int[s];
		sz = std::move(s);
	}
	~Vector () {delete[] elem;}

	int& operator[](int i) {
		if (i < 0 || i >= sz) {
			throw std::out_of_range{"Vector::operator[]"};
		}
		return elem[i];
	}
	int size() {return sz;}
private:
	int *elem;
	int sz;
};

int main()
{	
	try {
		auto a = Vector(-3);
	} catch (std::length_error& err) {
		std::cerr << err.what() << "\n";
	}


	return 0;
}