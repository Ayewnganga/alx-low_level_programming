#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there*/
/**
 * main - Empty point
 *
 * Return: Always 0
 **/
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  return (0);
}
