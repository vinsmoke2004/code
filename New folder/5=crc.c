#include<stdio.h> 
int a[100], b[100],i,j,len,k,count=0; 
//Generator Polynomial:g(x)=x^16+x^12+x^5+1 
int gp[]={1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,}; 
int main() 
{ 
void div(); 
printf("\n Enter the length of Data Frame:"); 
scanf("%d",&len); 
printf("\nEnter the Message\n"); 
for(i=0;i<len;i++) 
scanf("%d",&a[i]); 
//Append r(16) degree Zeros to Msg bits 
for(i=0;i<16;i++) 
a[len++]=0; 
//Xr.M(x) (ie. Msg+16 Zeros) 
for(i=0; i<len; i++) 
b[i]=a[i]; 
//Number of times to be divided ie. MsgLength 
k=len-16; 
div(); 
for(i=0;i<len;i++) 
b[i]=b[i]^a[i]; 
//MOD 2  Substraction 
printf("\nData to be transmitted\n"); 
for(i=0;i<len;i++) 
printf("%2d",b[i]); 
printf("\n\nEnter the Received Data\n");
for(i=0;i<len;i++)
printf("%2d",b[i]); 
printf("\n\nEnter the Received Data\n"); 
for(i=0;i<len;i++) 
scanf("%d",&a[i]); 
div(); 
for(i=0;i<len;i++) 
if(a[i]!=0) 
{ 
printf("\nERROR in Received Data\n"); 
return 0; 
} 
printf("\n Data Received is ERROR FREE\n"); 
} 
void div() 
{ 
for(i=0;i<k;i++) 
{ 
if(a[i]==gp[0]) 
{ 
for(j=i;j<17+i;j++) 
a[j]=a[j]^gp[count++]; 
} 
count=0; 
} 
} 


OUTPUT 
1)Enter the length of Data Frame: 
3 
Enter the Message 
1 1 0 
Data to be transmitted 
1 1 0 0 1 1 0 0 0 0 0 1 1 0 0 0 1 1 0 
Enter the Reveived Data 
1 1 0 0 1 1 0 0 0 0 0 1 1 0 0 0 1 1 0 
Data Recived is ERROR FREE 
2)Enter the length of Data Frame: 
3 
Enter the Message 
1 1 0 
Data to be transmitted 
1 1 0 0 1 1 0 0 0 0 0 1 1 0 0 0 1 1 0 
Enter the Reveived Data 
1 1 0 0 1 1 0 0 0 0 0 1 1 0 0 0 1 1 1 
ERROR in Recived Data