#include <stdio.h>
#include <string.h>
#include "net.h"

int command(const char* str){
if (strcmp(str, "show command") == 0) return 1;
if (strcmp(str, "ipconfig") == 0) return 2;
if (strcmp(str, "ipconfig /all") == 0) return 3;
if (strcmp(str, "ipconfig /release") == 0) return 4;
if (strcmp(str, "ipconfig /renew") == 0) return 5;
if (strcmp(str, "ipconfig /flushdns") == 0) return 6;
if (strcmp(str, "ping [IP]") == 0) return 7;
if (strcmp(str, "ping /?") == 0) return 8;
if (strcmp(str, "tracert [IP]") == 0) return 9;
if (strcmp(str, "tracert /?") == 0) return 10;
if (strcmp(str, "nslookup [domain]") == 0) return 11;
if (strcmp(str, "netstat -an") == 0) return 12;
if (strcmp(str, "arp -a") == 0) return 13;
if (strcmp(str, "hostname") == 0) return 14;
if (strcmp(str, "getmac") == 0) return 15;
if (strcmp(str, "net use") == 0) return 16;
if (strcmp(str, "net share") == 0) return 17;
if (strcmp(str, "net start") == 0) return 18;
if (strcmp(str, "net stop") == 0) return 19;
if (strcmp(str, "netsh") == 0) return 20;
if (strcmp(str, "netsh wlan show profiles") == 0) return 21;
if (strcmp(str, "exit") == 0) return 22;
return 0;
}

void play(){

char str[256];

while(1){
printf("\033[1;31m> \033[0m");
if (fgets(str, sizeof(str), stdin) == NULL) break;

str[strcspn(str, "\n")] = '\0';
switch (command(str)){

case 1:
printf("\033[1;32mipconfig\nipconfig /all\nipconfig /release\nipconfig /renew\nipconfig /flushdns\nping [IP]\nping /?\ntracert [IP]\ntracert /?\nnslookup [domain]\nnetstat -an\narp -a\nhostname\ngetmac\nnet use\nnet share\nnet start\nnet stop\nnetsh\nnetsh wlan show profiles\nexit\033[0n\n");
break;

case 2:
printf("\033[1;32mShow network configuration\033[0m\n");
break;

case 3:
printf("\033[1;32mShow detailed IP information\033[0m\n");
break;

case 4:
printf("\033[1;32mRelease IP address\033[0m\n");
break;

case 5:
printf("\033[1;32mRenew IP address\033[0m\n");
break;

case 6:
printf("\033[1;32mClear DNS cache\033[0m\n");
break;

case 7:
printf("\033[1;32mCheck network connectivity to a server\033[0m\n");
break;

case 8:
printf("\033[1;32mDetail informations\033[0m\n");
break;

case 9:
printf("\033[1;32mTrace route to a dectination\033[0m\n");
break;

case 10:
printf("\033[1;32mDetail informations\033[0m\n");
break;

case 11:
printf("\033[1;32mQuery DNS for domain details\033[0m\n");
break;

case 12:
printf("\033[1;32mShow active network connections\033[0m\n");
break;

case 13:
printf("\033[1;32mShow ARP cache\033[0m\n");
break;

case 14:
printf("\033[1;32mDisplay computer name\033[0m\n");
break;

case 15:
printf("\033[1;32mShow MAC address of network adapters\033[0m\n");
break;

case 16:
printf("\033[1;32mConnect to a shared resource\033[0m\n");
break;

case 17:
printf("\033[1;32mList shared resource\033[0m\n");
break;

case 18:
printf("\033[1;32mShow services\033[0m\n");
break;

case 19:
printf("\033[1;32mStop a Windows service\033[0m\n");
break;

case 20:
printf("\033[1;32mConfigure network settings\033[0m\n");
break;

case 21:
printf("\033[1;32mShow information about saved Wi-Fi network profiles\033[0m\n");
break;

case 22:
printf("\033[1;34mEXIT \033[0m\n");
return;
}
}
}
