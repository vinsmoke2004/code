#include<stdio.h> 
#include<stdlib.h> 
#define RTT 5 
int main() 
{ 
int window_size, i, f,frames[50]; 
printf("Enter window size:\n"); 
scanf("%d", &window_size); 
printf("\n Enter number of frames to transmit:"); 
scanf("%d",&f); 
printf("\n Enter %d frames:",f); 
for(i=1;i<=f;i++) 
scanf("%d",&frames[i]); 
printf("\n After sending %d frmaes at each stage sender 
waits for ACK",window_size); 
printf("\n sending frames in the following manner.n\n"); 
for(i=1;i<=f;i++) 
{ 
if(i%window_size != 0) 
{ 
printf("%d\t",frames[i]); 
} 
else 
{ 
printf("%d\n", frames[i]); 
printf("SENDER: waiting for ACk\n\n"); 
//sleep(RTT/2); 
printf("Receiver: FramesR eceived, ACK sent\n"); 
printf("\n"); 
//sleep(RTT/2);
printf("SENDER:ACK received, sending next frames\n"); 
} 
} 
if(f%window_size != 0) 
{ 
printf ("\n SENDER:waiting for ACK...\n"); 
//sleep(RTT/2); 
printf("\n RECEIVER: Frames Received, ACK SENT\n"); 
printf(" "); 
//sleep(RTT/2); 
printf("SENDER : ACKreceived"); 
} 
return 0; 
} 



output: 
Enter window size: 
2 
Enter number of frames to transmit:6 
Enter 6 frames:1 2 3 4 5 6 
After sending 2 frmaes at each stage sender waits for ACK 
sending frames in the following manner.  
1 2 
SENDER: waiting for ACk 
Receiver: FramesR eceived, ACK sent 
SENDER:ACK received, sending next frames 
3 4 
SENDER: waiting for ACk 
Receiver: FramesR eceived, ACK sent 
SENDER:ACK received, sending next frames 
5 6 
SENDER: waiting for ACk 
Receiver: FramesR eceived, ACK sent 
SENDER:ACK received, sending next frames