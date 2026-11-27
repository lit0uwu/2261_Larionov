#include <iostream>

class box {
private:
	double lenght;
	double width;
    double height;
    static int objectCount;

public:
	box(double _lenght, double _width, double _height):
		lenght(_lenght), width(_width), height(_height){
        objectCount++;
    }
    ~box() {
        objectCount--;
    }
    double volume() const {
        return lenght * width * height;
    }
    void addr() const {
      std::cout << "address of lenght " << &lenght << "\n";
      std::cout << "address of width " << &width << "\n";
      std::cout << "address of height " << &height << "\n";
      std::cout << "address of static field objectCount " << &lenght << "\n";
    }
};

int box::objectCount = 0;

box c(7, 8, 9);

int main(){
	box a (1, 2, 3);
	box	*b = new box(4, 5, 6);

	a.addr();
	b->addr();
	c.addr();

    delete b;
    return 0;
}
