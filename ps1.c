#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void details(int i)
{
       for(i=0;i<=n;i++){
	 printf("Enter the Product Name\n");
        scanf("%s", pn);
        printf("Enter the Price\n");
        scanf("%d",&p);
        printf("Enter the Category of the Product\n");
        scanf("%s",c);
        printf("Enter the Number Of Quantity\n");
        scanf("%d",&q);
        printf("Enter the Date of Purchase(dd/mm/yy)\n");
        scanf("%d,%d,%d",&d1);
        printf("Enter the Date of Expire\n");
        scanf("%d,%d,%d",&d2);
}

        return;
}

void sort(){
	printf("Sort By 1.Product Name\n,2.Price\n");
	scanf("%d",&s);
	while(1){
		switch(s){
			case 1:printf("Enter the Product Name\n");
				scanf("%s",pn1);
				for(i=0;i<=n;i++){
				if(pn1==pn[1])
					printf("the details are %d,%s%d%d\n",&p,&c,&q,&d1);}
				break;
			case 2:printf("Enter the Max Price\n");
				scanf("%d",&p1);
				for(i=0;i<=n;i++){
				if(p1>=p[i])
					 printf("the details are %d,%s%d%d\n",&p,&c,&q,&d1);}
				break;
}



void main(){
	void details();
	void sort();
	int i,o,p,q,d1,d2;
	char pn[50],c[100];

	printf("Enter the Number of Items\n");
	scanf("%d",&i);
	printf("Press\n 1.To Enter the Details \n 2. Filter the Data \n");
	scanf("%d",&o);
	while(1){
	switch(o) {
		case 1:details(i);break;
		case 2:sort();break;
			}}}
		
		
		
		
		
		
		
		

