from socket import *
from _thread import *

s=socket((AF_INET),SOCK_STREAM)
host= "127.0.0.1"
port = 7777

s.connect((host,port))

def recvTread(s):
    while True:
        print("server :",s.recv(1024).decode('utf-8'))
        
start_new_thread(recvTread,(s,))

while True:
    s.send(input().encode('utf-8'))
