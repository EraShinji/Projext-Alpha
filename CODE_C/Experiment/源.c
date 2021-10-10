#include <stdio.h>
void butler(void);
void alpha(void);
int main(void)
{
	char a;
	a = 'x';
	long int user;
	unsigned int output;
	scanf_s("%d", &user);
	output = user * a;
	getchar();
	printf("output results is %d", output);
	butler();
	alpha();
	return 0;
	
}
