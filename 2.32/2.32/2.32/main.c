#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h, g,a ;
	printf("請輸入身高(公尺)和體重(公斤)");
	scanf_s("%f %f", &h, &g);
	a = g / (h*h);
	printf("Your BMI=%.2f\n", a);
	if (a < 18.5)
	{
		printf("Underweight\n");
	}
	if (a>=18.5&&a<25 )
	{
		printf("Normal\n");
	}
	if (a >= 25&&a < 30)
	{
		printf("Overweught\n");
	}
	if (a >= 30)
	{
		printf("Obese\n");
	}
	system("pause\n");
	return 0;
}
