#include <stdio.h>
#include <string.h>
#include "lin.h"

int command_linux(const char* str){
if (strcmp(str, "?") == 0)                      return 1;
if (strcmp(str, "ip a") == 0)                   return 2;
if (strcmp(str, "ip r") == 0)                   return 3;
if (strcmp(str, "ip link") == 0)                return 4;
if (strcmp(str, "ip neigh") == 0)               return 5;
if (strcmp(str, "ipconfig") == 0)               return 6;
if (strcmp(str, "ipconfig [iface] down") == 0)  return 7;
if (strcmp(str, "ipconfig [iface] up") == 0)    return 8;
if (strcmp(str, "iwconfig") == 0)               return 9;
if (strcmp(str, "ping [IP]") == 0)              return 10;
if (strcmp(str, "traceroute [IP]") == 0)        return 11;
if (strcmp(str, "dig [domain]") == 0)           return 12;
if (strcmp(str, "netstat -tunlp") == 0)         return 13;
if (strcmp(str, "ss -tunlp") == 0)              return 14;
if (strcmp(str, "arp -a") == 0)                 return 15;
if (strcmp(str, "hostname") == 0)               return 16;
if (strcmp(str, "nmcli dev show") == 0)         return 17;
if (strcmp(str, "ethtool [iface]") == 0)        return 18;
if (strcmp(str, "systemctl start [svc]") == 0)  return 19;
if (strcmp(str, "systemctl stop [svc]") == 0)   return 20;
if (strcmp(str, "systemctl status [svc]") == 0) return 21;
if (strcmp(str, "exit") == 0)                   return 22;
return 0;
}

void linux(){

char str[256];

while(1){

printf("\033[1;31m> \033[0m");
if (fgets(str, sizeof(str), stdin) == NULL) break;

str[strcspn(str, "\n")] = '\0';
switch (command_linux(str)){

case 1:
printf("\033[1;32mip a\nip r\nip link\nip neigh\nipconfig\nipconfig [iface] down\nipconfig [iface] up\niwconfig\nping [IP]\ntraceroute [IP]\ndig [domain]\nnetstat -tunlp\nss -tunlp\narp -a\nhostname\nnmcli dev show\nethtool [iface]\nsystemctl start [svc]\nsystemstl stop [svc]\nsystemctl status [svc]\nexit\033[0n\n");
break;

case 2:
printf("\033[1;32mShow IP information\033[0m\n");
break;

case 3:
printf("\033[1;32mShow routes\033[0m\n");
break;

case 4:
printf("\033[1;32mShow interfaces\033[0m\n");
break;

case 5:
printf("\033[1;32mShow ARP table\033[0m\n");
break;

case 6:
printf("\033[1;32mShow network interfaces\033[0m\n");
break;

case 7:
printf("\033[1;32mDisable interfaces\033[0m\n");
break;

case 8:
printf("\033[1;32mEnable interfaces\033[0m\n");
break;

case 9:
printf("\033[1;32mWireless config\033[0m\n");
break;

case 10:
printf("\033[1;32mCheck connectivity\033[0m\n");
break;

case 11:
printf("\033[1;32mTrace route\033[0m\n");
break;

case 12:
printf("\033[1;32mDNS query\033[0m\n");
break;

case 13:
printf("\033[1;32mOpen ports/services\033[0m\n");
break;

case 14:
printf("\033[1;32mOpen ports\033[0m\n");
break;

case 15:
printf("\033[1;32mShow ARP cache\033[0m\n");
break;

case 16:
printf("\033[1;32mShow hostname\033[0m\n");
break;

case 17:
printf("\033[1;32mNetwork information\033[0m\n");
break;

case 18:
printf("\033[1;32mEthernet information\033[0m\n");
break;

case 19:
printf("\033[1;32mStart services\033[0m\n");
break;

case 20:
printf("\033[1;32mStop servises\033[0m\n");
break;

case 21:
printf("\033[1;32mService status\033[0m\n");
break;

case 22:
printf("\033[1;34mEXIT\033[0m\n");
return;

default:
printf("\033[1;35m !COMMAND NOT FOUND! \033[0m\n");
break;

}
}
}
