/*############################################################################################### 
 *
 *           Author         : 
 *           Date           : 
 *           File           : tftp.c©
 *           Descriptions   : function to create/extract packets before/after sending/receving
 *           Objective      : Packet creation and extraction
 *           Usage          :
 *           Output         :
 *
###############################################################################################*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <netinet/in.h>
#include "tftp.h"
#include "file.h"

/* tftp protocol implementation 
 * Both server and client must use this file for sen/receive data
 */
