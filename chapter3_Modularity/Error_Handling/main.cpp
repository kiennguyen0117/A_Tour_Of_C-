#include <iostream>
#include <cmath>

class Vector {
public:
	Vector(int s): elem {new int[s]}, sz {s} {}
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
	auto a = Vector(3);
	try {
		std::cout << a[10] << std::endl;
	} catch (std::out_of_range& err) {
		std::cerr << err.what() << std::endl;
	}

	return 0;
}