#include<stdio.h>
#include<stdlib.h>
 
  int main(){
  	
  	/**char*f ,*s ;
	printf("enter the string for comparing\n");
	scanf("%s",&f);
	printf("enter the second strring\n");
	scanf("%s",&s);
	
	if(s==f)
	{
		printf("the above string are equal\n");
	}
	else
	{
		printf("they are not equal\n");
	} **/
      
   printf("enter the string for copy\n");
   char *t,*u;
   scanf("%s",&t);
    
   u=t;
   printf("%s",*u);
   return 0;
}
	
