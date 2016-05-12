#include <sys/type.h>
#include <sys/sockest.h>
#include <stdio.h>

int main(void){
  int socket_s, socket_com;
  struct sockaddr_in port ={AF_INET, 40000};
  struct sockaddr_in clientaddr = {AF_NET, 40000, 0xa00cac3a};
  char rec_data[10];

  socket_s = socket(AF_INET, SOCK_DGRAM, IPPROTO_TCP);
  bind(socket_s, &port, sizeof(port));
  listen(socket_s, 5);
  socket_com = accept(socket_s, clientaddr, sizeof(clientaddr));

  recv(socket_com, rec_data, sizeof(recdata), 0);
  printf("recv:%s", rec_data);
  return 0;
  }
