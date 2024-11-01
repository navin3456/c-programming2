 #include<stdio.h>
 #include<conio.h>
 void reversearr( int *arr,  int size);

  int main(){
  	int size;
  	printf("enter the number of size\n");
  	scanf("%d",&size);
  	int arr[size];
  	printf("enter the elements\n");
  	for (int i=0;i<size; i++){
  		scanf("%d",&arr[i]);
  		
	  }
	  reversearr(arr,size);
	  printf("the arry in reverse is \n");
	  {
	  	for(int i=0;i<size;i++){
	  		printf("%d\n",arr[i]);
		  }
		  printf("\n");
		  
	  }
	  return 0;
	  
	  
  }
 void reversearr(int *arr, int size)
  {
  	int *start=arr;
  	int *end=arr+size-1;
  	while(start<end){
  		int temp;
  		temp=*start;
  		*start=*end;
  		*end=temp;
	  
	  start++;
	  end--;
	  }
	  
	  

  }
