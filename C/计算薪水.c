#include <stdio.h>

int main ()
 {
 	
 	const double RATE = 8.25;
 	const int STANDARD = 40;
 	double pay = 0.0;
 	int hours;
 	
 	printf("请输入工作小时：");
	 scanf ("%d", &hours);
	printf("\n");
	 if(hours > STANDARD)
	    pay = STANDARD * RATE + 
		    (hours - STANDARD) * (RATE * 1.5);
	else
	    pay = hours * RATE;
	printf("应付薪水：%f\n", pay);
    
	return 0;
 }
