#include <stdio.h>
#include <unistd.h>
int main(void)
{
	int a = 3;
	int b = 2;
	int sum = a + b;
	pid_t pid;
	pid_t ppid;
	pid=getpid();
	ppid=getppid();

	printf("The sum is %d\n", sum);
	printf("The pid is %d\n", pid);
	printf("The ppid is %d\n", ppid);
	return (0);
}
