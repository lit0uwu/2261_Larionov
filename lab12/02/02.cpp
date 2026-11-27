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
	double volume();
	double surface();
};

double box::volume(){
	return lenght * width * height;
}

double box::surface(){
	return 2 * (lenght * width + lenght * height + width * height);
}

int main(){
	box b(10, 6, 3);
	std::cout << "Box volume " << b.volume() << std::endl;
	std::cout << "Box surface area " << b.surface() << std::endl;
	std::cout << "Object size = " << sizeof(b) << std::endl;
}
