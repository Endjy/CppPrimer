#include <iostream>

int main(){

	int i = 0;
	// this is a high level const, cant change the value of p1, c1.
	int *const p1 = &i;
	const int ci = 42;
	// this is a low level const, can change the value of p2
	const int *p2 = &ci;
	//right is high level const, right one is high level 
	const int *const p3 = p2; 
	i = ci;
	p2 = p3;
}
