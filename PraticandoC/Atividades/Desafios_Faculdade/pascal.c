#include <stdio.h> 

void pascal(int x) 
{ 
	for (int y = 1; y <= x; y++) { 
		for (int z = 1; z <= x - y; z++) 
			printf(" "); 
		int coef = 1; 
		for (int i = 1; i <= y; i++) { 
			printf("%4d", coef); 
			coef = coef * (y - i) / i; 
		} 
		printf("\n"); 
	} 
} 
int main() 
{ 
	int x;
    printf("Informe quantos níveis deverá ter o Triângulo de Pascal?\n");
    scanf("%d", &x); 
	
    pascal(x);

	return 0; 
}