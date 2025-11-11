#include <unistd.h> 
#include <stdio.h>  
main ()  
{        
int cof=sysconf(_SC_OPEN_MAX);        
printf( "Число открытых файлов = %d\n",cof);
printf( "Число потомков = %d\n", sysconf(_SC_CHILD_MAX));
 }
