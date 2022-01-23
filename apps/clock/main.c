#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
void clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


int main () {
   while (1) {
	clear();
	time_t rawtime;
   	struct tm *info;
   	char buffer[80];

   	time( &rawtime );

   	info = localtime( &rawtime );
	strftime(buffer,80,"%I:%M:%S %p", info);
	printf("%s\n", buffer);
	usleep(100000);
   }
   return(0);
}
