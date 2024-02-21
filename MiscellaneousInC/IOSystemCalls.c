//// C program to illustrate open system call 
//#include <errno.h> 
//#include <fcntl.h> 
//#include <stdio.h> 
//#include <unistd.h> 
//
//extern int errno;
//
//int main()
//{
//	// if file does not have in directory 
//	// then file foo.txt is created. 
//	int fd = open("foo.txt", O_RDONLY | O_CREAT);
//
//	printf("fd = %d\n", fd);
//
//	if (fd == -1) {
//		// print which type of error have in a code 
//		printf("Error Number % d\n", errno);
//
//		// print program detail "Success or failure" 
//		perror("Program");
//	}
//	return 0;
//}


//// C program to illustrate close system Call 
//#include <fcntl.h> 
//#include <stdio.h> 
//#include <unistd.h> 
//
//int main()
//{
//	int fd1 = open("foo.txt", O_RDONLY);
//	if (fd1 < 0) {
//		perror("c1");
//		exit(1);
//	}
//	printf("opened the fd = % d\n", fd1);
//
//	// Using close system Call 
//	if (close(fd1) < 0) {
//		perror("c1");
//		exit(1);
//	}
//	printf("closed the fd.\n");
//}

//// C program to illustrate close system Call 
//#include<stdio.h> 
//#include<fcntl.h> 
//int main()
//{
//	// assume that foo.txt is already created 
//	int fd1 = open("foo.txt", O_RDONLY, 0);
//	close(fd1);
//
//	// assume that baz.tzt is already created 
//	int fd2 = open("baz.txt", O_RDONLY, 0);
//
//	printf("fd2 = % d\n", fd2);
//	exit(0);
//}

/* Here, In this code first open() returns 3 because when the main process is created, 
then fd 0, 1, 2 are already taken by stdin, stdout, and stderr.So the first unused file 
descriptor is 3 in the file descriptor table.After that in close() system call is free it.
these 3 file descriptors and then set 3 file descriptors as null.So when we called the 
second open(), then the first unused fd is also 3. So, the output of this program is 3. */


//// C program to illustrate read system Call 
//#include <fcntl.h> 
//#include <stdio.h> 
//#include <unistd.h> 
//
//int main()
//{
//	int fd, sz;
//	char* c = (char*)calloc(100, sizeof(char));
//
//	fd = open("foo.txt", O_RDONLY);
//	if (fd < 0) {
//		perror("r1");
//		exit(1);
//	}
//
//	sz = read(fd, c, 10);
//	printf("called read(% d, c, 10). returned that"
//		" %d bytes were read.\n",
//		fd, sz);
//	c[sz] = '\0';
//	printf("Those bytes are as follows: % s\n", c);
//
//	return 0;
//}

//// C program to illustrate read system Call 
//#include <fcntl.h> 
//#include <stdio.h> 
//#include <stdlib.h> 
//#include <unistd.h> 
//
//int main()
//{
//	char c;
//	int fd1 = open("sample.txt", O_RDONLY, 0);
//	int fd2 = open("sample.txt", O_RDONLY, 0);
//	read(fd1, &c, 1);
//	read(fd2, &c, 1);
//	printf("c = %c\n", c);
//	exit(0);
//}


//// C program to illustrate write system Call 
//#include <stdio.h> 
//#include <fcntl.h> 
//#include <unistd.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	int sz;
//
//	int fd = open("foo.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//	if (fd < 0)
//	{
//		perror("r1");
//		exit(1);
//	}
//
//	sz = write(fd, "hello geeks\n", strlen("hello geeks\n"));
//
//	printf("called write(% d, \"hello geeks\\n\", %ld). It returned %d\n", fd, strlen("hello geeks\n"), sz);
//
//	close(fd);
//
//	return 0;
//}



//// C program to illustrate I/O system Calls 
//#include <fcntl.h> //open, flags
//#include <stdio.h> //perror
//#include <stdlib.h> //exit
//#include <unistd.h> //close
//#include <string.h> //strlen
//int main(void)
//{
//	int fd[2];
//	char buf1[15] = "hello world1";
//	char buf2[15];
//
//	// foo.txt create/Open in read write mode 
//	fd[0] = open("foo.txt", O_CREAT | O_WRONLY);
//	write(fd[0], buf1, strlen(buf1));
//	close(fd[0]);
//
//	fd[0] = open("foo.txt", O_RDONLY);
//	int x = read(fd[0], buf2, 15);
//	close(fd[0]);
//	printf("%d", x);
//
//	fd[1] = open("foo1.txt", O_CREAT | O_WRONLY);
//	write(fd[1], buf2, strlen(buf2));
//	close(fd[1]);
//
//	return 0;
//}


