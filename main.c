#include <stdio.h>
#include <string.h>
#include "win.h"
#include "lin.h"
#include <ctype.h>

static void lowercase(char* str) {
for (int i = 0; str[i]; i++) {
str[i] = (char)tolower((unsigned char)str[i]);
}
}

void win(){

printf(" \n");
printf("\033[1;32m                                                     ******* WINDOWS COMMAND PROMPT *******\033[0m\n");
printf("\033[1;32m                                                           ______    __  ___    ____\033[0m\n"); 
printf("\033[1;32m                                                          / ____/   /  |/  /   / __ \\\033[0m\n");
printf("\033[1;32m                                                      ***/ /       / /|_/ /   / / / /***\033[0m\n");
printf("\033[1;32m                                                     ***/ /___    / /  / /   / /_/ /***\033[0m\n");
printf("\033[1;32m                                                       /_____/   /_/  /_/   /_____/  \033[0m\n");
printf(" \n");
printf("\033[1;32m                                                  ******* CHOOSE WRITE: '?' - (help) *******\033[0m\n");

windows();
}

void lin(){

printf(" \n");
printf("\033[1;36m                                                     ******* LINUX COMMAND PROMPT *******\033[0m\n");
printf("\n");
printf("\033[1;36m                                                                     .o+`\033[0m\n");
printf("\033[1;36m                                                                    `ooo/\033[0m\n"); 
printf("\033[1;36m                                                                   `+oooo:\033[0m\n");               
printf("\033[1;36m                                                                  `+oooooo:\033[0m\n");              
printf("\033[1;36m                                                                 -+oooooo+:\033[0m\n");             
printf("\033[1;36m                                                                `/:-:++oooo+:\033[0m\n");            
printf("\033[1;36m                                                               `/++++/+++++++:\033[0m\n");          
printf("\033[1;36m                                                              `/++++++++++++++:\033[0m\n");         
printf("\033[1;36m                                                             `/+++ooooooooooooo/`\033[0m\n");        
printf("\033[1;36m                                                            ./ooosssso++osssssso+`\033[0m\n");       
printf("\033[1;36m                                                           .oossssso-````/ossssss+`\033[0m\n");      
printf("\033[1;36m                                                          -osssssso.      :ssssssso.\033[0m\n");     
printf("\033[1;36m                                                         :osssssss/        osssso+++.\033[0m\n");    
printf("\033[1;36m                                                        /ossssssss/        +ssssooo/-\033[0m\n");    
printf("\033[1;36m                                                      `/ossssso+/:-        -:/+osssso+-\033[0m\n");  
printf("\033[1;36m                                                     `+sso+:-`                 `.-/+oso:\033[0m\n"); 
printf("\033[1;36m                                                    `++:.                           `-/+\033[0m\n");
printf("\n");
printf("\033[1;36m                                                  ******* CHOOSE WRITE: '?' - (help) *******\033[0m\n");

linux();
}


int main(){

printf("Windows or Linux?\n");

char quess[256];

fgets(quess, sizeof(quess), stdin);

quess[strcspn(quess, "\n")] = '\0';

lowercase(quess);

if(strcmp(quess, "windows") == 0){
win();
}

if(strcmp(quess, "linux") == 0){
lin();
}

return 0;
}
