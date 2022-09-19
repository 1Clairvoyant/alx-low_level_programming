#include "main.h"
/**
  * swap_int - function
  *@a: entry 1
  *@b: entry 2
  */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;

	*a = *b;
	*b = changed;
}
