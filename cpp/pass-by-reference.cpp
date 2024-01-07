#include <iostream>

void square(int& x){
	x = x * x;
}

int main(int argc, char** argv){
	int x = 42;
	square(x);
	std::cout << x << std::endl;
}
