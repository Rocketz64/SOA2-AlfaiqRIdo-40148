#include <stdio.h>
#include <unistd.h>
int main (argc, argv )
int argc ;
char *argv[ ] ;
{
execv ("/bin/echo",
&argv[0] ) ;
printf ("EXEC Failed\n") ;
}
