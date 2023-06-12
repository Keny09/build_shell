#include <stdio.h>
#include <unistd.h>
int main(void)
{
	int a = 10;
	int b = 4;
	int diff = a - b;
	pid_t ppid;
	ppid=getppid();

	printf("The diff is %d\n", diff);
	printf("The ppid is %d\n", ppid);
	return (0);
}
