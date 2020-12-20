# ARP Assignment 2- 5061134-Abu Huraira Shaik.

# Programme using Sockets :

The problem: 
A remote control of a hoist with 3 degrees of freedom (x, y and z). The hoist runs on a monorail (x, y motion).

How to remote control the z-axis only at constant speed.
3 control actions:  a). start increasing z, b). stop, c). start decreasing z.

2 Feedback values to the operator: a). actual z value every second during motion, b). end run reached.

# About the Code: 

First we are creating sockets for Server Communications. 
Then, we are trying to connect to Server.
User have to enter the values to increase. The program sends the signal to the Server and Server sends commands to increase the speed. 
Then we stop  the speed and then enter the values to the decrease. The program again sends the signal to the server and Server sends commands to decrease the speed. 
Now we reached the end run.
