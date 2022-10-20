"""
//-----------------------------------
//  Cordinator script for BomberCat Client/Host
//  by Andres Sabas, Electronic Cats (https://electroniccats.com/)
//  by Raul Vargas
//  by Salvador Mendoza (salmg.net)
//  Date: 19/10/2022
//
//  This script receives requests from BomberCat clients that want 
//  to connect to a given BomberCat host, it also takes care of releasing 
//  the status of the host once the connection is terminated.
//
//  Development environment specifics:
//  IDE: gedit
//  Hardware Platform:
//  Ubuntu Linux - Intel
//
//  Thanks Wallee for support this project open source https://en.wallee.com/
//
//  Electronic Cats invests time and resources providing this open source code,
//  please support Electronic Cats and open-source hardware by purchasing
//  products from Electronic Cats!
//
//  This code is beerware; if you see me (or any other Electronic Cats
//  member) at the local, and you've found our code helpful,
//  please buy us a round!
//  Distributed as-is; no warranty is given.
"""

import paho.mqtt.client as mqtt #import the client1
import time

# Initializing a queue
queue = []
shosts = ['#'] * 40 


########################################

def on_message(client, userdata, message):
    command = str(message.payload.decode("utf-8"))
    print(str(message.payload.decode("utf-8")))
    
    #print(command[0])
    if command[0] == 'c' or command[0] == 'h':
        # Adding elements to the queue
        queue.append(command)
    
    # a request has been received, it is queued

########################################

broker_address="192.168.1.9"

print("Creating new instance.")
client = mqtt.Client("CORDINATOR") #create new instance
client.on_message = on_message #attach function to callback
print("connecting to broker")
client.connect(broker_address) #connect to broker

client.loop_start() #start the loop
print("Subscribing to topic","queue")
client.subscribe("queue")

while True:

    time.sleep(1) # wait

    # host requests are processed
    while True:
        if queue:
            result = queue.pop(0)
            print(result)

            if result[0] == 'c':
                # check if the host is busy
                
                if shosts[2*((ord(result[4]) - 48)*10 + ord(result[5]) - 48) + 1] == '#':
                    print("Host vacant")
           
                    # status is updated and required messages are published
                    
 
                    shosts[2*((ord(result[4]) - 48)*10 + ord(result[5]) - 48) + 1] = result[2]
                    shosts[2*((ord(result[4]) - 48)*10 + ord(result[5]) - 48)] = result[1]
                    s = "".join(shosts)
                    print(s)
            
                    #shosts[ord(result[3]) - 48] = result[1]
                    client.publish("hosts",s)
                
                else:
                    print("Busy host")
                      
            elif result[0] == 'h': # release the host        
                # status is updated and required messages are published
            
                shosts[2*((ord(result[1]) - 48)*10 + ord(result[2]) - 48) + 1] = '#'
                shosts[2*((ord(result[1]) - 48)*10 + ord(result[2]) - 48)] = '#'
                s = "".join(shosts)
                print(s)
            
                client.publish("hosts",s)
            
        else:
            break  
     
client.loop_stop() #stop the loop
