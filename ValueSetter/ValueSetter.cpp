#include <iostream>
#include <windows.h>
#include "MathLibrary.h"

int main() {
    int x, y;
    std::cout << "„B„r„u„t„y„„„u „V: ";
    std::cin >> x;
    setX(x);
    std::cout << "„B„r„u„t„y„„„u Y: ";
    std::cin >> y;
    setY(y);

    std::cout << "„B„r„u„t„u„~„€: x - " << getX() << ", y - " << getY();
}