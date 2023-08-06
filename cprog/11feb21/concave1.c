#include<stdio.h>
int main()
{
 int pro;
 
 printf("press 1,if the object is at infinity:");
 printf("\npress 2,if the object is beyond  the centre of curvature:");
 printf("\npress 3,if the object is at the centre of curvatureC:");
 printf("\npress 4 ,if the object is between C and F:");
 printf("\npress 5,if the object is at focus F:");
 scanf("%d",&pro);
 
 if(pro==1)
 {
  printf("posintion of object= at focus F\n size= highly diminished \n nature of image= real and inverted");
 }
else if(pro==2)
 {
  printf("posintion of object= between F&C\n size=  diminished \n nature of image= real and inverted");
 }
 else if(pro==3)
 {
  printf("posintion of object= AT C\n size= same size \n nature of image= real and inverted");
 }
 else if(pro==4)
 {
  printf("posintion of object= beyond C f\n size= enlarged \n nature of image= real and inverted");
 }
 else if(pro==5)
 {
  printf("posintion of object= at infinity\n size= highly enlarged \n nature of image= real and inverted");
 }
 else{printf("invalid input");}
return(0);

}
