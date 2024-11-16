CC = gcc
CFLAGS = -g -O0
SOURCES = file.c udp.c tftp.c

all: client server

server:
	$(CC) $(CFLAGS) server.c $(SOURCES) -o server
client: 
	$(CC) $(CFLAGS) client.c $(SOURCES) -o client

clean:
	$(RM) client server

