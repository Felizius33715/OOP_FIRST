#include <iostream>

class Figure {
protected:
    int sides;
public:
    Figure() : sides(0) {}
    int getSides() const {
        return sides;
    }
};

class Triangle : public Figure {
public:
    Triangle() {
        sides = 3;
    }
};

class Quadrilateral : public Figure {
public:
    Quadrilateral() {
        sides = 4;
    }
};

int main() {
    Figure unknownFigure;
    Triangle triangle;
    Quadrilateral quadrilateral;
    std::cout << "Figure: " << unknownFigure.getSides() << std::endl;
    std::cout << "Triangle: " << triangle.getSides() << std::endl;
    std::cout << "Quadangle: " << quadrilateral.getSides() << std::endl;
    return 0;
}