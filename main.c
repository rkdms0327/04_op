#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	int y;
	
	printf("input two integer : ");
	scanf("%d %d", &x, &y);
	
	printf("+ is %i\n: ", x+y);
	printf("- is %i\n: ", x-y);
	printf("* is %i\n: ", x*y);
	printf("/ is %i\n: ", x/y);
	printf("%% is %i\n: ", x%y);
	
	
	
	return 0;
}
