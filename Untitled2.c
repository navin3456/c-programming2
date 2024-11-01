#include<stdio.h>
#include<conio.h>
  int fact( int n);
  int main(){
  	 int n,ans;
  	 printf("enter the number for factorail\n");
  	 scanf("%d",&n);
  	 ans=fact(n);
  	 printf("the factorail of the number is %d",ans);
  	 int fact=1; int a,i;
       printf("enter the number for factorial");
       scanf("%d",&a);
           {
  	         for(i=1;i<=a;i++){
  		      fact=fact*i;
	       }
        }
           printf("%d",fact);
  	 return 0;
  	 
  }
  int fact(n){
  	if(n<=1){
  		return 1;
  		
	  }else
	  {
	  	return n*fact(n-1);
	  }
  }
  
