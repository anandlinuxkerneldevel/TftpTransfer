/*############################################################################################### 
 *
 *           Author         : 
 *           Date           : 
 *           File           : client.c©
 *           Descriptions   : Client side of tftp protocol
 *           Objective      : To send/recive file to/from server
 *           Usage          : ./client <server ip> <port> <filename> <output filename> [get|put]
 *           Output         :
 *
###############################################################################################*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <errno.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>
#include "udp.h"
#include "tftp.h"

/* Client code for tftp Protocol */


// main function
int main(int argc, char* argv[])
{
	return 0;
}
