#include<stdio.h>
 int fab(int n);
  int main(){  
        int n,f;
  	printf("enter the no. of term for tha fibanacco series\n");
  	scanf("%d",&n);
  	
  	f=fab( n);
  	printf("the nth term of the series is %d",f);
  	return 0;
  	
  } 
   
  	 fab(int n){
  	 	if(n==0){
  	 		return 1;
		   }else if(n<0){
		   	return 0;
		   }else{
		   	return fab( n-1)+fab(  n-2);
		   }
  	 
	
	  }
	  
  
   
