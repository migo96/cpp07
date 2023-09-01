#include <iostream>
#include "iter.hpp"

int main(void)
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};

	iter(a, 10, printA);
}