import socket
from _thread import *
s= socket.socket(socket.AF_INET,socket.SOCK_STREAM)
host ="127.0.0.1"
port=7777
s.bind((host,port))

s.listen(50)

def recvTread(c,ad):
    while True:
        x=c.recv(1024).decode('utf-8')
        print(ad[1]," : ",x)

def sendTread(c,ad):
    while True:
        c.send(input().encode('utf-8'))

while True:
    c,ad =s.accept()
    print("new connection from  ", ad[1])
    start_new_thread(sendTread,(c,ad))
    start_new_thread(recvTread,(c,ad))