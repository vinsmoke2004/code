i) Bit stuffing 
#include<stdio.h> 
void main() 
{ 
int i=0, count=0; 
char a[100]; 
printf("Enter the frame(0's & 1's) :"); 
scanf("%s",a); 
printf("\n After bit stuffing\n"); 
//printf("01111110 "); 
for(i=0;a[i];i++) 
{ 
if(a[i]=='1') 
count++; 
else 
count=0; 
printf("%c",a[i]); 
if(count==5) 
{ 
printf("0"); 
count=0; 
} 
} 
//printf(" 01111110"); 
} 
Output: 
Enter the frame: 1111111100000011111111 
After the bit stuffung: 11111 0 111 00000 111110 111



ii. Character stuffing: 
#include<string.h> 
#include<stdio.h> 
void main( ) 
{ 
int i=0,j=0,n; 
char a[30],b[60]; 
printf("\nEnter orginal string:\n"); 
scanf("%s",a); 
n=strlen(a); 
b[0]='d'; 
b[1]='l'; 
b[2]='e'; 
b[3]='s'; 
b[4]='t'; 
b[5]='x'; 
j=6; 
while(i<n) 
{ 
if(a[i]=='d' && a[i+1]=='l' && a[i+2]=='e') 
{ 
b[j]='d'; 
b[j+1]='l'; 
b[j+2]='e'; 
j=j+3; 
} 
b[j]=a[i]; 
i++; 
j++; 
} 
b[j]='d'; 
b[j+1]='l'; 
b[j+2]='e'; 
b[j+3]='e'; 
b[j+4]='t'; 
b[j+5]='X'; 
b[j+6]='\0'; 
printf("\n After character stuffing:\n"); 
printf("%s",b); 
} 
Output: 
Enter the original string: ab dle de dle 
After character stuffing: dlestx ab dle dle de dle dle