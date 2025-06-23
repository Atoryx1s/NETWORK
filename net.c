#include <stdio.h>
#include <string.h>
#include "net.h"

void play(){

char str[256];
while(strcmp(str, "stop") != 0){
printf("\033[1;31m> \033[0m");
scanf("%s", str);
}
}
