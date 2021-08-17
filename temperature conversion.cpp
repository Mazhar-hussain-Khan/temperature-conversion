/* Mazhar Hussain    Reg no:20MDELE098
eamil:20MDELE098@uetmardan.edu.pk */
//write a program to convert celsius temperature to fahrenhite and farenhite to celsius//
#include<stdio.h>
void fahrenhite(float x){
	x=(x*9/5)+32;
	printf("fahrenhite temperature is:%f\n",x);
}
void celsius(float y){
	y=(y-32)*5/9;
	printf("celsius temperature is:%f\n",y);
}

int main(){
	float temperature;
	int choice;
	printf("enter your choice\n");
	printf("1.celsius to fahrenhite\n");
	printf("2.fahrenhite to celsius\n");
	scanf("%d",&choice);
	switch(choice){
	case 1:
	printf("enter the temperature\n");
	scanf("%f",&temperature);
	fahrenhite(temperature);
	break;
	
	case 2:
	printf("enter the temperature\n");
	scanf("%f",&temperature);
	celsius(temperature);
	break;
	
	default:
		printf("invalid choice\n");
		break;
	}
	return 0;
}
