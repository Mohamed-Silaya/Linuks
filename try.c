#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 20
void main()
  {
   char str[MAX_LIMIT]="HI";
    char* ptr = str;

do
 {
    printf("Ana Gahez ya Basha > ");
    //fgets(str, MAX_LIMIT, stdin);
    scanf("%s", str);
    printf("You Said: ");
    puts( str);

 }
while(*ptr != 'q');
printf("Good Bye");

  }


  //while(strcmp(str, "quit") !=0 );