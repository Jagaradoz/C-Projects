#include <stdio.h>

int global = 1; // Global Variable ; everywhere in the program can see it.

int main(){
	int local = 1; // Local Variable ; main() and commands inside can only see it.

	return 0;
}