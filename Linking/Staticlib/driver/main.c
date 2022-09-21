#include<stdio.h>
#include <stdlib.h>  
#include<string.h>
#include<mylib.h>

#define MAX_LIMIT 20


int main(void){
char str[MAX_LIMIT]="HI";
char* ptr = str;
int y=0,z=0;


do
 {
    printf("Ana Gahez ya Basha > ");
    scanf("%s",str);
    printf("You Said: ");
    puts(str);
    
    if (strcmp(str,"fib")==0)
	{
	printf("Enter a number:\n");
        scanf("%d",&z); 
        fib(z);
	}
    else if(strcmp(str,"fact")==0)
	{
	printf("Enter a number:\n");
   	scanf("%d",&y); 
	printf("%d \n",fact(y));
	}

 }
while(!strcmp(str,"quit")==0);
printf("Good Bye\n");

  
  



//printf("Random Number ");
//printf("%d \n",rand());
//***********************************************


}
