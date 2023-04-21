#include "functions.h"

double add(double x, double y) {
    return x + y;
}

int add(int x, int y) {
    return x + y;
}

double add(double x, double y, double z) {
    return add(add(x, y), z);
}

bool test(bool x) {
    return x;
}

bool test(double x) {
    return x > 0;
}