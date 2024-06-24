# Web Server Python Code by Ben Ebadinia

# import socket module
from socket import *
import sys # In order to terminate the program

serverPort = 7777
serverSocket = socket(AF_INET, SOCK_STREAM)

# Prepare a server socket
serverSocket.bind(("",serverPort))
serverSocket.listen(1)

while True:
    #Establish the connection
    print('Ready to serve...')
    connectionSocket, addr = serverSocket.accept()
    
    try:
        message = connectionSocket.recv(2048)
        filename = message.split()[1]
        f = open(filename[1:])
        outputdata = f.read()
        f.close()
        
        # output to console the sentence received from the client 
        #print ("Received From Client: ", outputdata)
        
        #Send one HTTP header line into socket
        #connectionSocket.send('HTTP/1.1 200 OK\r\n\r\n'.encode())
        response = 'HTTP/1.1 200 OK\n\n' + outputdata
        
        #Send the content of the requested file to the client
        #for i in range(0, len(outputdata)):
        #   connectionSocket.sendall(outputdata[i].encode())
        #   connectionSocket.send("\r\n".encode()) 
        connectionSocket.sendall(response.encode())
        
        connectionSocket.close()
    
    except IOError:
        #Send response message for file not found
        connectionSocket.send('HTTP/1.1 404 Not Found\r\n\r\n'.encode())
    
        #Close client socket
        connectionSocket.close()
    
    serverSocket.close()
    sys.exit() #Terminate the program after sending the corresponding data