#include "lib/hello-time.h"
#include <time.h>
#include <stdio.h>

void print_localtime() {
  time_t rawtime;
  struct tm *info;
  time( &rawtime );
  info = localtime( &rawtime );
  printf("%s", asctime(info));
}
