#include "lib/hello-time.h"
#include "main/hello-greet.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
  char array[256];
  if (argc > 1) {
	get_greet(array, argv[1]);
    	
  } else {
  	get_greet(array, "CTW");
  }
  printf("%s\n", array);
  print_localtime();
  return 0;
}
