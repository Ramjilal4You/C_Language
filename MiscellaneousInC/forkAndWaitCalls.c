////This file is only for linux compiler, Please Use online c compiler
//#include <stdio.h>
//#include <stdlib.h>		//exit()
//#include <sys/types.h>	//pid_t
//#include <unistd.h>		//fork(), wait(), sleep(), process_id(), getpid()
//void fork_parent_child_sexample()
//{
//	pid_t p;
//	p = fork();
//	if (p < 0)
//	{
//		perror("fork fail");
//		exit(1);
//	}
//	// child process because return value zero
//	else if (p == 0)
//		printf("Hello from Child!, process_id(pid) = %d \n", getpid());
//
//	// parent process because return value non-zero.
//	else
//		printf("Hello from Parent!, process_id(pid) = %d \n", getpid());
//}
//
//// C program to demonstrate working of wait()
//int wait_parent_child_sexample()
//{
//	pid_t cpid;
//	pid_t p = fork();
//	if (p == 0) {
//		printf("Child %d\n", p);
//		//exit(0);		 /* 1. terminate child */
//		return 0;		 /* 2. terminate child */
//	}
//	else {
//		printf("Parent %d\n", p);
//		cpid = wait(NULL); /* reaping parent */
//	}
//	printf("Parent pid = %d\n", getpid());
//	printf("Child pid = %d\n", cpid);
//
//	return 0;			/* 3. terminate child */ /* terminate parent */
//}
//
//int main()
//{
//	fork_parent_child_sexample();
//
//	wait_parent_child_sexample();
//
//	sleep(1);	//added to get child process completed
//	return 0;
//}
