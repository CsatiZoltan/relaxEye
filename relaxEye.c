#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
   double wait;
   if (argc == 1) /* no input */
      wait = 60; /* use the default one hour */
   else
      wait = atof(argv[1]);
   printf("Timing started.\n\n");
   sleep(wait*60);
   printf("\aAnother period of %.1f minutes elapsed. Relax your eyes for 10 minutes!\n", wait);
}