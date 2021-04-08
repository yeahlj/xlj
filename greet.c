#include<stdio.h>
#include <string.h>
#include<stdlib.h>
int display1(char *string);
int display2(char *string);
int main()
{ char string[]="Embedded Linux";
  display1(string);
  display2(string);
}
int display1(char *string)
{ printf("The original string is %s \n",string);}

int display2(char *string1)
{
        char *string2;
        int size,i;
        size=strlen(string1);
        string2=(char*)malloc(size+1);
        for(i=0;i<size;i++)

}
