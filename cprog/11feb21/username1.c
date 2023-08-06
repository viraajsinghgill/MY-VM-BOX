#include<stdio.h>
int main()
{
  char username;
  int password;
  printf("username: ");
  scanf("%c",&username);
  printf("password: ");
  scanf("%d",&password);
  if(username=='a')
  {
  if(password==12345)
  printf("login successful");
  else
  printf("password is incorrect , try again");
  }
  else{
  printf("username is incorrect ,try again");
  }
  return(0);


}
