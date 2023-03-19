#include<stdio.h>
#include<conio.h>
int ftc(float t);
int ftk(float t);
int ctf(float t);
int ctk(float t);
int ktf(float t);
int ktc(float t);
int main()
{
	int ch,r=1,tc=1;
	float temp;
	printf("!!! Welcome To The Temperature Calculator !!!");
	printf("\n\tEnter the Temperature : ");
	scanf("%f",&temp);
	do
	{
		if(tc==0)
		{
			printf("\n\tEnter the New Temperature : ");
			scanf("%f",&temp);
		}
		printf("\n\t!! Convert TO !!");
		printf("\n\t1. Fahreanheit to Celcius");
		printf("\n\t2. Fahreanheit to Kelvin");
		printf("\n\t3. Celcius to Fahreanheit");
		printf("\n\t4. Celcius to Kelvin");
		printf("\n\t5. Kelvin to Fahreanheit");
		printf("\n\t6. Kelvin to Celcius");
		printf("\n\n\tEnter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				ftc(temp);
			break;
			case 2:
				ftk(temp);
			break;
			case 3:
				ctf(temp);
			break;
			case 4:
				ctk(temp);
			break;
			case 5:
				ktf(temp);
			break;
			case 6:
				ktc(temp);
			break;
			default:
				printf("\n!! You have Entered a Wrong Choice !!");
		}
		printf("\n\nIf You Want To Continue Calculating Then Enter 0 : ");
		scanf("%d",&r);
		if(r==0)
		{
			printf("\nIf You Want To Change the Temperature Then Enter 0 : ");
			scanf("%d",&tc);
		}
	}while(r==0);
	printf("\n\t\tENTER ANY KEY TO EXIT");
	getch();
	return 0;
}
int ftc(float t)
{
	float res=(t-32)*5/9;
	printf("\nTemperature in Fahreinheit : %.2f *F",t);
	printf("\nTemperature Converted to Celcius : %.2f *C",res);
	return 0;
}
int ftk(float t)
{
	float res=((t-32)*5/9)+273.15;
	printf("\nTemperature in Fahreinheit : %.2f *F",t);
	printf("\nTemperature Converted to Kelvin : %.2f K",res);
	return 0;
}
int ctf(float t)
{
	float res=t*(9/5)+32;
	printf("\nTemperature in Celcius : %.2f *C",t);
	printf("\nTemperature Converted to Fahreinheit : %.2f *F",res);
	return 0;
}
int ctk(float t)
{
	float res=t+273.15;
	printf("\nTemperature in Celcius : %.2f *C",t);
	printf("\nTemperature Converted to Kelvin : %.2f K",res);
	return 0;
}
int ktf(float t)
{
	float res=(t-273.15)*9/5+32;
	printf("\nTemperature in Kelvin : %.2f K",t);
	printf("\nTemperature Converted to Fahreinheit : %.2f *F",res);
	return 0;
}
int ktc(float t)
{
	float res=t-273.15;
	printf("\nTemperature in Kelvin : %.2f K",t);
	printf("\nTemperature Converted to Fahreinheit : %.2f *C",res);
	return 0;
}