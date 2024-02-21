#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>	//log, pow
#include <time.h>
#include<windows.h> //sleep

// C program to demonstrate example of time() function.
void Print_time()
{
	time_t seconds;

	seconds = time(NULL);	//return seconds
	printf("Seconds since January 1, 1970 = %ld\n", seconds);	//around 54yrs

	time_t t_sec;
	time(&t_sec);	// Stores time seconds
	printf("Seconds since January 1, 1970 = %ld\n\n", t_sec);
}


// C program to demonstrate ctime() function.
void Print_ctime() {
	time_t curtime;
	
	time(&curtime);

	printf("Current time = %s\n\n", ctime(&curtime));
}



// C Program to Illustrate the use of clock() Function
void Print_clocktime()
{
	float a;
	clock_t time_req;
	time_t start, end;
	start = time(NULL);
	// Without using pow function
	time_req = clock();
	Sleep(1000);	//in milliseconds 
	time_req = clock() - time_req;
	printf("Processor time taken for multiplication: %f seconds\n", (float)time_req / CLOCKS_PER_SEC);
	end = time(NULL);
	printf("Time taken for multiplication: is %.2f seconds\n\n", difftime(end, start));

	// Using pow function
	time_req = clock();
	start = time(NULL);
	Sleep(2000);
	time_req = clock() - time_req;
	printf("Processor time taken in pow function: %f seconds\n", (float)time_req / CLOCKS_PER_SEC);
	end = time(NULL);
	printf("Time taken in pow function is %.2f seconds\n\n", difftime(end, start));
}


//1. Function to print the date and time of the system.
void Print_SystemDateTime()
{
	struct tm* ptr;
	time_t t;
	t = time(NULL);
	ptr = localtime(&t);
	printf("local time : %s\n", asctime(ptr));
}


//2. Function to print UTC (Coordinated Universal Time) of the system.
void Print_SystemUTCTime(void)
{
	struct tm* ptr;
	time_t t;
	t = time(NULL);
	ptr = gmtime(&t);
	printf("UTC time : %s\n\n", asctime(ptr));
}


//3. Function to print UTC (Coordinated Universal Time) of the system.
void Print_FormattedTimeUseStrftime()
{
	time_t rawtime;
	struct tm* timeinfo;

	// Used to store the time returned by localetime() function
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	// strftime() function stores the current time as Hours : Minutes
	//%I %M and %p-> format specifier of Hours minutes and am/pm respectively
	strftime(buffer, 80, "Time is %I:%M%p\n", timeinfo);

	// prints the formatted time
	puts(buffer);
}


//int main() {
//
//	Print_time();
//	Print_ctime();
//	Print_clocktime();
//	Print_SystemDateTime();
//	Print_SystemUTCTime();
//	Print_FormattedTimeUseStrftime();
//
//	return 0;
//}