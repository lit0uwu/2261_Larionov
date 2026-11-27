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
};

int main(){
	box b(10, 6, 3);
	std::cout << sizeof(b) << std::endl;
}
