/*############################################################################################### 
 *
 *           Author         : 
 *           Date           : 
 *           File           : udp.c©
 *           Descriptions   : Functions to bind udp sockets for server and clients.
 *           Objective      : Create a UDP socket and bind with given IP address and PORT number
 *           Usage          :
 *           Output         :
 *
###############################################################################################*/

#include <netinet/in.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include "tftp.h"

/* To create sockets and binding for server and clients*/
