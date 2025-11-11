#include <stddef.h> 
#include <stdio.h>
extern char **environ;
int main(int  argc, char *argv[]) {
int i;
printf("число параметров, переданных программе %s равно %d\n”, argv[0],argc-1);
for (i=l; i<argc; i++)
printf("argv[%d] = %s\n", i,argv[i];
 if (environ[i] != NULL)
printf("environ[%d] : %s\n", i, environ[i]);
}
