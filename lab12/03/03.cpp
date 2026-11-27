#include <iostream>

class box {
private:
	double lenght;
	double width;
	double height;

public:
	box(double _lenght, double _width, double _height):
		lenght(_lenght), width(_width), height(_height){

		}
    double volume() const {
        return lenght * width * height;
    }
};


int main() {

    box *x = new box(10, 6, 3);
    box *y = new box(8, 8, 8);
    if (y->volume() > x->volume()) {

        std::cout << "Volume y greater than volume x" << std::endl;
    } else {

        std::cout << "Volume x greater than volume y" << std::endl;
    }

    box *cube = new box(5, 5, 5);
    if (cube->volume() > x->volume()) {
        std::cout << "Cube volume is greater than volume X" << std::endl;
    } else {
        std::cout << "Volume X is greater or equals to volume of cube" << std::endl;
    }
    delete x;
    delete y;
    delete cube;
    return 0;
}
