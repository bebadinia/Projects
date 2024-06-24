# UDP Pinger Client Python Code by Ben Ebadinia
import time # Used to calculate RTT and get Time and date
import socket

# Loopback address for my machine
hostName = "127.0.0.1"

# Port number used in server
serverPort = 12000

# Create UDP socket
clientSocket = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)

# Setting the socket timeout to 3 seconds
clientSocket.settimeout(3)

# Creating a loop to send 10 pings
for sequenceNum in range(1, 11):
    
    #print(sendTime)
    
    # Create the message being sent to the server
    pingMessage = "ping " + str(sequenceNum) + " " + time.asctime()
    
    # Record time the message is being sent to the server
    sendTime = time.time()

    # Send ping message to server socket from the host name and port
    clientSocket.sendto(pingMessage.encode(), (hostName, serverPort))

    # Try to recieve a reply from the server within 3 seconds
    try: 
        # Receive modified sentence in all upper case letters from server
        modifiedPingMessage, serverAddress = clientSocket.recvfrom(1024)
        
        # Record time the message is being recieved from the server
        recieveTime = time.time()
        
        #print(recieveTime)
        print("Reply from " + serverAddress[0] + ": " + modifiedPingMessage.decode())
        
        # Print the reply
        print("RTT: " + str(recieveTime-sendTime))

    except:
        print("Request timed out.")
        continue

# close the UDP socket
clientSocket.close()
