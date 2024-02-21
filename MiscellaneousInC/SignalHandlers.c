//// CPP program to illustrate User-defined Signal Handler 
//#include<stdio.h> 
//#include<signal.h>	//signal
//#include<windows.h> //Sleep
//
//// Handler for SIGINT, caused by Ctrl-C at keyboard 
//void sigint_handler(int sig)
//{
//	printf("Caught signal %d\n", sig);
//}
//
//int main()
//{
//	signal(SIGINT, sigint_handler);
//	while (1)
//	{
//		printf("hello world\n");
//		Sleep(1000);
//	}
//	return 0;
//}


////// Note run in online editor only
////// CPP program to illustrate Default Signal Handler 
//#include<stdio.h> 
//#include<wait.h>  //WIFSIGNALED, WTERMSIG
//#include <sys/types.h>
//#include <unistd.h>
//#include<signal.h>  //psignal
//int main()
//{
//	int stat;
//	pid_t pid = fork();
//	printf("Child process created : %d\n", pid);
//	if (pid == 0) {
//		while (1) { printf("Child process %d running\n", pid); };  //run for child process
//	}
//	else
//	{   //main(parent) process
//		sleep(1);
//		printf("Parent process %d running\n", getpid());
//		kill(pid, SIGINT);
//		pid = wait(&stat);
//		if (WIFSIGNALED(stat)) {
//			printf("\nChild process terminated : %d\n", pid);
//			psignal(WTERMSIG(stat), "Child term due to");
//		}
//	}
//}
