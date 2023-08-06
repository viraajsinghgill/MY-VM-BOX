#include<stdio.h>
int main()
{
int x=0x99876111;
char *c = (char*) &x;
printf("*C is :0x%x\n",*c);
if(*c==0x01)//hexadecimal number and filter
{
printf("Little Endian\n");


}
else
{printf("Big Endian");
}
return 0;

}
