#include <stdio.h>
#include <string.h>
#include "net.h"

void play(){

char str[256];
while(1){
printf("\033[1;31m> \033[0m");
if (fgets(str, sizeof(str), stdin) == NULL) {
break;
}

str[strcspn(str, "\n")] = '\0';

if(strcmp(str, "show command") == 0){
printf("\033[1;32mipconfig\nipconfig /all\nipconfig /release\nipconfig /renew\nipconfig /flushdns\nping [IP]\nping /?\ntracert [IP]\ntracert /?\nnslookup [domain]\nnetstat -an\narp -a\nhostname\ngetmac\nnet use\nnet share\nnet start\nnet stop\nnetsh\nnetsh wlan show profiles\nexit\033[0n\n");
}
if(strcmp(str, "ipconfig") == 0){
printf("\033[1;32mShow network configuration\033[0m\n");
}

if(strcmp(str, "ipconfig /all") == 0){
printf("\033[1;32mShow detailed IP information\033[0m\n");
}

if(strcmp(str, "ipconfig /release") == 0){
printf("\033[1;32mRelease IP address\033[0m\n");
}

if(strcmp(str, "ipconfig /renew") == 0){
printf("\033[1;32mRenew IP address\033[0m\n");
}

if(strcmp(str, "ipconfig /flushdns") == 0){
printf("\033[1;32mClear DNS cache\033[0m\n");
}

if(strcmp(str, "ping [IP]") == 0){
printf("\033[1;32mCheck network connectivity to a server\033[0m\n");
}

if(strcmp(str, "ping /?") == 0){
printf("\033[1;32mDetail informations\033[0m\n");
}

if(strcmp(str, "tracert [IP]") == 0){
printf("\033[1;32mTrace route to a dectination\033[0m\n");
}

if(strcmp(str, "tracert /?") == 0){
printf("\033[1;32mDetail informations\033[0m\n");
}

if(strcmp(str, "nslookup [domain]") == 0){
printf("\033[1;32mQuery DNS for domain details\033[0m\n");
}

if(strcmp(str, "netstat -an") == 0){
printf("\033[1;32mShow active network connections\033[0m\n");
}

if(strcmp(str, "arp -a") == 0){
printf("\033[1;32mShow ARP cache\033[0m\n");
}

if(strcmp(str, "hotsname") == 0){
printf("\033[1;32mDisplay computer name\033[0m\n");
}

if(strcmp(str, "getmac") == 0){
printf("\033[1;32mShow MAC address of network adapters\033[0m\n");
}

if(strcmp(str, "net use") == 0){
printf("\033[1;32mConnect to a shared resource\033[0m\n");
}

if(strcmp(str, "net share") == 0){
printf("\033[1;32mList shared resource\033[0m\n");
}

if(strcmp(str, "net start") == 0){
printf("\033[1;32mShow services\033[0m\n");
}

if(strcmp(str, "net stop") == 0){
printf("\033[1;32mStop a Windows service\033[0m\n");
}

if(strcmp(str, "netsh") == 0){
printf("\033[1;32mConfigure network settings\033[0m\n");
}

if(strcmp(str, "netsh wlan show profiles") == 0){
printf("\033[1;32mShow information about saved Wi-Fi network profiles\033[0m\n");
}

if(strcmp(str, "exit") == 0){
printf("\033[1;34mEXIT \033[0m\n");
break;
}

}
}
