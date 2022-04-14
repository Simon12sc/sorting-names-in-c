#include <stdio.h>
#include<string.h>

int main()
{
	int n=0;
	printf("Enter how much name you want to sort: ");
	scanf("%d",&n);
	
char name[n][10];


//Taking name
for(int i=0;i<n;i++){
	printf("%d.",i+1);
scanf("%s",name[i]);
}

// sorting name 
for(int i=0;i<n;i++){
	for(int j=i;j<n;j++){
		if(strcmp(name[i],name[j])>0){
// >0 is for accending <0 will be for descending
		char temp[20];
		strcpy(temp,name[i]);
		strcpy(name[i],name[j]);
		strcpy(name[j],temp);
		}
	}
}

//printing the sorted order
printf("Sorted names are:\n");
for(int i=0;i<n;i++){
printf("%d.%s\n",i+1,name[i]);
}
return 0;
}
