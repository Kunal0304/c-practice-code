#include<stdio.h>
void main()
{
	int a,b;
	printf("enter state code like:- 1mp 2up 3rj");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("welcome to mp");
			printf("enter city code:- 1indore 2bhopal 3gwalior");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("welcome to indore famous places rajwada,56");
					break;
				case 2:
					printf("welcome to bhopal famous places lake");
					break;
				case 3:
					printf("welcome to gwalior famous places ford");
					break;
				default:
					printf("Invalid city code for mp");
			}
			break;
		case 2:
			printf("welcome to up");
			printf("enter city code:- 1kanpur 2noida 3lucknow");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("welcome to kanpur famous places iit");
					break;
				case 2:
					printf("welcome to noida famous places it park");
					break;
				case 3:
					printf("welcome to lucknow famous places nhi pata");
					break;
				default:
					printf("Invalid city code for up");
			}
			break;
		case 3:
			printf("welcome to rj");
			printf("enter city code:- 1jaipur 2kota 3udaipur");
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("welcome to jaipur famous places hawamehal");
					break;
				case 2:
					printf("welcome to kota famous places it wondors");
					break;
				case 3:
					printf("welcome to udaipur famous places pink");
					break;
				default:
					printf("Invalid city code for rj");
			}
			break;
		default:
			printf("Invalid state");
	}	
}