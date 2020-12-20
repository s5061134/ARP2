
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
short SocketCreate(void)
{
    short hSocket;
    printf("Create the socket\n");
    hSocket = socket(AF_INET, SOCK_STREAM, 0);
    return hSocket;
}

int SocketConnect(int hSocket)
{
    int iRetval=-1;
    int ServerPort = 90190;
    struct sockaddr_in remote= {0};
    Printf("enter ""A"" to increase by 40\n");
    Printf("enter ""B"" to decrease by 40\n");
    Printf("enter ""C"" to quit the program\n");
  
  val=0;
  
  while(1):
    inp = input("Enter the command ")
    if((inp=="A" or inp=="a")):
      if(val<=160):
          val+=40
          printf("Value= ",val);
      else:
          printf("Maximum limit 200 reached");
    elif((inp=="B" or inp=="b"));
      if(val>=40):
          val-=40
          printf("Value= ",val);
      else:
         printf("Minimum limit 0 reached");
    elif((inp=="C" or inp=="c")):
      printf("Exiting program...");
      exit()

    else:
        printf("Invalid command");
      
}
    close(hSocket);
    shutdown(hSocket);
    return 0;
}
