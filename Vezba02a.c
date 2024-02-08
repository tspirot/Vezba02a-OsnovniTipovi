// Vezba02a.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <stdio.h>
#define BRZINA_SVETLOSTI 299792458
int main()
{
	const int c = 299792458;
	printf("c = %d m/s\n", c);
	printf("brzina sv. je %i\n", BRZINA_SVETLOSTI);
	char slovo = 'A';
	printf("%c\n", slovo);
	// realni brojevi
	const float pi = 3.1415, bs = 299.79E6;
	float r = 10;
	printf("obim = %.2f m\n", 2 * r * pi);
	double povrsina;
	povrsina = r * r * pi;
	printf("povrsina = %.2lf m2\n", povrsina);
	printf("povrsina = %.2e m2\n", povrsina);

}
