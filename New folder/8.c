#include<stdio.h> 
int main() 
{ 
int incoming, outgoing, buck_size, n, store = 0; 
printf("Enter bucket size: "); 
scanf("%d", &buck_size); 
printf("\n Enter Outgoing rate:"); 
scanf("%d",&outgoing); 
printf("\n number of inputs:"); 
scanf("%d",&n); 
while (n != 0){ 
printf("Enter the incoming packet size : "); 
scanf("%d", &incoming); 
printf("\n In coming packet size %d\n", incoming); 
if (incoming <= (buck_size - store)) 
{ 
store += incoming; 
printf("\nBucket buffer size %d out of %d\n", store, buck_size); 
} 
else 
{ 
printf("\nDropped %d no of packets\n", incoming - (buck_size - store)); 
printf("\nBucket buffer size %d out of %d\n", store, buck_size); 
store = buck_size; 
} 
store = store - outgoing; 
printf("\n After outgoing %d packets left out of %d in buffer\n", store, buck_size); 
n--; 
} 
}

OUTPUT: 
Enter bucket size: 15 
Enter outgoing rate: 3 
Number of inputs: 3 
Enter the incoming packet size: 20 
Incoming packet size is 20 
Dropped 5 number of packets 
Buckets buffers size 0 out of 15 
After outgoing 12 packets, left out of 15 in buffer 
Enter the incoming packet size:9 
Incoming  packet size is 9 
Dropped 6 number of packets 
Bucket buffer size 12 out of 15 
After outgoing 12 packets, left out of 15 in buffer 
Enter the incoming packet size: 5 
Incoming  packet size is 5 
Dropped 2 number of packets 
Bucket buffer size 12 out of 15 
After outgoing 12 packets, left out of 15 in buffer