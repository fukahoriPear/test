#include <sys/socket.h>
#include <stdio.h>


int main(void){
  int socket_c;
  struct sockaddr_in saddr;
  struct in_addr ipaddr;
  char mes[10] = "hello!";

  ipaddr.s_addr = 0xa00cac2f;
  saddr.sin_family = AF_INET;
  saddr.sin_port = (u_short)40000;
  saddr.sin_addr = ipaddr;


  socket_c = socket(AF_INET, SOCK_DGRAM ,0);
  connect(socket_c,&saddr, sizeof(struct sockaddr));

  send(socket_c, mes, sizeof(mes), 0);

  close(socket_c);
  return 0;
}
