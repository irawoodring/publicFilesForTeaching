#include <stdio.h>

void square(int x){
	x = x * x;
}

int main(int argc, char** argv){
	int x = 42;
	square(x);
	printf("%d\n", x);
}
