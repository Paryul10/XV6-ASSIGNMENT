#include "types.h"
#include "stat.h"
#include "user.h"


int
main(int argc, char *argv[])
{
	int pid,pri;

	if(argc < 3)
	{
		printf(2,"Expected 2 arguments: set_priority pid priority\n");
	}
	// printf("%s  %s\n",argv[1],argv[2]);

	pid = atoi(argv[1]);
	pri = atoi(argv[2]);

	if( pri < 0 || pri > 100)
	{
		printf(2,"Invalid priority range->[0,100]\n");
	}
	printf(1, "Changes priortiy of a process with pid=%d to priortiy=%d\n",pid,pri);
	chpri(pid,pri);
	exit();
}