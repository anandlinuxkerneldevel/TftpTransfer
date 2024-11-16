
# Trivial File Transfer Protocol



## introduction

Trivial File Transfer Protocol (TFTP) is a simple,  File Transfer Protocol which allows a client to get from or put a file onto a remote host. One of its primary uses is in the early stages of nodes booting from a local area network. TFTP has been used for this application because it is very simple to implement.
 

This protocol doesn’t support advanced features that is there in FTP. User authentication, directory-listing features are not supported by this protocol. This implementation is done with simplicity and user-friendliness as main focus. TFTP was first standardized in 1981 and the current specification for the protocol can be found in RFC 1350. This is used to transfer files between two machines in a secure environment where the authentication is not required. 
 

In TFTP implementation, the server runs infinitely in a loop. The client runs till the user types “bye” in the prompt. Once a new process is forked the new port where the server is waiting should be informed to the client. That is automatically done when the server responds to the client’s request. In this implementation the new port starts from 20000 and for each connection the port number is increased. By doing this the port numbers are unique and the clients will have unique port numbers for contacting the server.




## Requirements Details

Here is the list of requirements that need to be implemented in this project. 
1) Server must run in background without any user interface.
2) Client should provide a prompt to user (like default TFTP client). User can use commands to connect to server,  get/put file and exit.
3) Following are the commands:
    - connect  → To send connect request to server (IP Address)
    - get      → To receive a file from server (file name)
    - put      → To send a file to server (file name)
    - mode     → To set mode of transfer (octet, netascii or mail)
    - Bye/quit → Close the connections and exit from client