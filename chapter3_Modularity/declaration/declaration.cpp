#include <iostream>

double sqrt(double); // Square root function, take a double and return a double

class Vector {
public:
	Vector(int s);
	double& operator[](int i);
	int size();
private:
	double *elem; // an double pointer points to an array of sz doubles
	int sz;
};

int main() {
	return 0;
}