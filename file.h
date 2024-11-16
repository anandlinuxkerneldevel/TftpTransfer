
#ifndef TFTP_FILE
#define TFTP_FILE
#include "tftp.h"
/* Function design for file operation functions */
int file_open_read();
int file_buffer_from_pos();
int file_open_write();
int file_append_from_buffer();
int file_close();

#endif
