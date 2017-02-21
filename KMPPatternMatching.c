#include<stdio.h>
#include<conio.h>
#include<string.h>

/* DFA KMP Pattern Matching Algorithm Simulation */
int match(char[],char[]);
void main()
{
int pos;
char a[100],b[100];
printf("Please Enter A Text!\n");
gets(a);
printf("Please Enter A Pattern To Find!\n");
gets(b);
pos=match(a,b);
if(pos==-1)
printf("Sorry Pattern Wasn't Found!");
else
printf("Pattern Was Found In Position %d",pos);


getch();
}//end of main

int match(char text[],char pattern[])
{
int pos;
int text_length=strlen(text);
int pattern_length=strlen(pattern);
int i,j;
int c;

if(pattern_length>text_length)
return -1;

for(i=0;i<=text_length-pattern_length;i++){
pos=c=i;
for(j=0;j<pattern_length;j++){
if(pattern[j]==text[c])
c++;
else
break;
}//end of for 2
if(j==pattern_length)
return pos+1;
}//end of for 1
return -1;
}//end of match function!
