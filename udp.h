
#ifndef TFTP_UDP
#define TFTP_UDP

#include <sys/socket.h>

void udp_bind_server();
void udp_rebind_server();
void udp_bind_client();
void udp_send_packet();

#endif
