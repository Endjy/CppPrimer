#include <iostream>

int main(){
	int ival =42;
	int *p = &ival;
	std::cout << *p << std::endl;
	std::cout << p << std::endl;
	*p = 20;
	int *pi = nullptr;
	pi = &ival;
	std::cout << *pi << std::endl;
}
