#include<stdio.h>
#include<time.h>

int main()
{
	time_t t;
	time(&t);     // The function time() returns the current calender time, i.e. the number of seconds elapsed since 00:00:00 hour January 1, 1970 GMT up to the execution of the function
	struct tm *Time;
	Time = localtime(&t);
	printf("%s", asctime(Time));
	
	printf("\n%s", ctime(&t)); // The difference between ctime and local time is in ctime, it directly gives the current time in string form whereas if we want to do it with localtime
	                           // then we have use the struct and convert value into ascii
	return 0;
}

/* output of the code
 *basavaraj@basavaraj-VirtualBox:~/Embedded_Training/Assignment_4$ ./a.out 
 *Mon Jun 21 12:12:42 2021

 *Mon Jun 21 12:12:42 2021
  
 linux commands for printing current time, seconds, nanoseconds and microseconds

 1) date --- by this command we get current date with time
 
 2) date +%S --- by this we get seconds

 3) date +%N --- by this we get nanoseconds

 4) date +.%6N --- by this we get microseconds

 */
