# run the server as follow.
# python UDP_Pinger_Server.py

# We will need the following module to generate randomized lost packets
import random
import socket

    # Create a UDP socket
    # Notice the use of SOCK_DGRAM for UDP packets
serverSocket = socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
    # Assign IP address and port number to socket
serverSocket.bind(('', 12000))

while True:
        # Generate random number in the range of 0 to 10
    rand = random.randint(0, 10)
    print(rand)

        # Receive the client packet along with the address it is coming from
    message, address = serverSocket.recvfrom(1024)
    mess=message.decode()
    print(mess)

        # Capitalize the message from the client
    messa = mess.upper()
    x=messa.encode()

        # If rand is less is than 4, we consider the packet lost and do notrespond
    if rand < 4:
        continue

        # Otherwise, the server responds
    serverSocket.sendto(x, address)