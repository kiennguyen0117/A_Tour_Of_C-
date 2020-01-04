#include "Vector.h"

Vector::Vector(int i): elem{new double[i]}, sz{i} {}

double& Vector::operator[](int i) {return elem[i];}

int Vector::size() {return sz;}

