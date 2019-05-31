// basic homework 22 (3A713257)
#include<stdio.h>
#include<stdlib.h>

struct servitor{
   char Number[10],Name[20];
   int Hour,Work,Income;
};
void calc(struct servitor []);
int main(void){
	struct servitor data[4];
	int i=0;
	do{ 
		printf("servitor no.%d\n",i+1);
	  	printf("serial number:");
		gets(data[i].Number);
		printf("name:");
		gets(data[i].Name);
		printf("hourly hour:");
		scanf("%d",&data[i].Hour);
		printf("working hours:");
		scanf("%d",&data[i].Work);
		getchar();
		printf("\n");
        i++;
        system("cls");
	}while(i<4);
	
	printf("Income data sheet:");
	printf("\n");
	printf("\n");
	for(i=0; i<4; i++){
		calc(data);
		printf("servitor no.%d\n",i+1);
		printf("serial number:%s\n",data[i].Number);
		printf("name:%s\n",data[i].Name);
		printf("hourly hour:%d\n",data[i].Hour);
		printf("working hours:%d\n",data[i].Work);
		printf("monthly income:%d\n",data[i].Income);
		printf("\n");
	}
	system("pause"); 
	return 0; 
}

void calc(struct servitor p[]){
    int i;
    for (i=0; i<4; i++)
    p[i].Income=p[i].Work*p[i].Hour;
}
