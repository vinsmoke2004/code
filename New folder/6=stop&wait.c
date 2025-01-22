#include<stdlib.h> 
#define RTT 4 
#define Timeout 4 
#define TOT_FRAMES 7 
enum{NO,YES}ACK; 
int main() 
{ 
int wait_time, i=1; 
ACK= YES; for(;i<=TOT_FRAMES;) 
{ 
if(ACK==YES &&i!=1) 
{ 
printf("\n SENDER:ACK for frame %d Received \n",i-1); 
} 
printf("\n SENDER:FRAME %d sent, Waiting for ACK..\n",i); 
ACK = NO; 
wait_time=rand()%4+1; 
if(wait_time == Timeout) 
{ 
printf("SENDER:ACK not received for frame %d => TIMEOUT Resending frame...",i); 
} 
else 
{ 
printf("\n RECEIVER: Frame %d received,ACK sent\n",i); 
printf("-------------------------------"); 
ACK = YES; 
i++; 
} 
} 
return 0; 
} 



OUTPUT: 
SENDER:FRAME 1 sent, Waiting for ACK.. 
SENDER:ACK not received for frame 1 => TIMEOUT Resending frame... 
SENDER:FRAME 1 sent, Waiting for ACK.. 
RECEIVER: Frame 1 received,ACK sent ------------------------------- 
SENDER:ACK for frame 1 Received 
SENDER:FRAME 2 sent, Waiting for ACK.. 
RECEIVER: Frame 2 received,ACK sent ------------------------------- 
SENDER:ACK for frame 2 Received 
SENDER:FRAME 3 sent, Waiting for ACK.. 
SENDER:ACK not received for frame 3 => TIMEOUT Resending frame... 
SENDER:FRAME 3 sent, Waiting for ACK.. 
RECEIVER: Frame 3 received,ACK sent ------------------------------- 
SENDER:ACK for frame 3 Received 
SENDER:FRAME 4 sent, Waiting for ACK.. 
SENDER:ACK not received for frame 4 => TIMEOUT Resending frame... 
SENDER:FRAME 4 sent, Waiting for ACK.. 
RECEIVER: Frame 4 received,ACK sent ------------------------------- 
SENDER:ACK for frame 4 Received 
SENDER:FRAME 5 sent, Waiting for ACK.. 
RECEIVER: Frame 5 received,ACK sent ------------------------------- 
SENDER:ACK for frame 5 Received 
SENDER:FRAME 6 sent, Waiting for ACK.. 
RECEIVER: Frame 6 received,ACK sent ------------------------------- 
SENDER:ACK for frame 6 Received 
SENDER:FRAME 7 sent, Waiting for ACK.. 
RECEIVER: Frame 7 received,ACK sent