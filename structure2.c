#include<stdio.h>
#include<conio.h>

struct std_details{
	int rollno;
	char name[39];
	int class;
	char gender[29];
	int result;
	
}temp;
	void enter_details(int n){
		struct std_details D[n];
		for(int i=1;i<=n;i++){
				printf(" name = \n");
				scanf("%s",&D[i].name);
				printf(" class = \n");
				scanf("%d",&D[i].class);
				printf("roll no  \n");
				scanf("%d",&D[i].rollno);
				printf(" gender = \n");
				scanf("%s",&D[i].gender);
				printf(" result = \n");
				scanf("%d",&D[i].result);
		}
	}
	void short_in(int n){
		struct std_details D[n];
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if (D[i].rollno>D[j].rollno){
				 
					temp=D[i];
					D[i]=D[j];
					D[j]=temp;
				}
			}
		}
	}
	void print(int n){
		 struct std_details D[n];
		 for(int i=1;i<=n;i++){
		 	printf("name = %s \n class= %d\ rollno =%d\n",D[i].name,D[i].class,D[i].rollno);
			 }
	}
	int main(){
		int n;
		printf(" enter the number of stdunt whose data you want to collect \n");
		scanf("%d",&n);
		
		enter_details(n);
		short_in(n);
		print(n);
		return 0;
	}

		
