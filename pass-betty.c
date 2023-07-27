#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int a, b;

	printf("enter a & b:");
	scanf("%d %d\n", &a, &b);

	int c = a + b;
	printf("ur answer: %d\n", c);

	pid_t pid = getpid();
	printf("process id: %d\n", pid);

	return (0);
}
