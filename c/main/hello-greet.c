#include "main/hello-greet.h"
#include <string.h>

void get_greet(char *arr, const char who[]) {
  strcat(arr,"Hello ");
  strcat(arr,who);
}
