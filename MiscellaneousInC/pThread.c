////This file is only for linux compiler, Please Use online c compiler
//#include <stdio.h> 
//#include <unistd.h> //sleep()
//#include <pthread.h> 
//
//// A normal C function that is executed as a thread 
//void* myThreadFun(void* vargp)
//{
//	sleep(1);
//	printf("Inside myThreadFun\n");
//}
//
//int main()
//{
//	pthread_t thread_id;
//	printf("Before Thread\n");
//	pthread_create(&thread_id, NULL, myThreadFun, NULL);
//	//pthread_join(thread_id, NULL);    //the main thread will wait for child thread to complete
//	printf("After Thread\n");
//
//	return 0;
//}
