#include<stdio.h>
#include<time.h>
#define SIZE 10
int main()
{
	int c, i = 0,j,k = 0;
	FILE *fp;
	int numbers[SIZE];
	fp = fopen("numbers.txt","r");
	double x,y,z;
	if (fp)
	{		
	  while (fscanf(fp, "%d", &c) !=EOF)
	  {
	    numbers[k] = c;
		k++;
	  }
	fclose(fp);
	
	} else {
	printf("no file");
	}
	x = clock();
	for(i=0; i<SIZE;i++)
	{
		for (j=i;j < SIZE;j++ )
		{
			if (numbers[i]+numbers[j] == 10)
			{
				printf("%d\n", numbers[i]+numbers[j]);
			}
			
		}
	}
	y = clock();
	z = (y - x)/CLOCKS_PER_SEC;
	printf("\n\n\tThe execution time was: %.15f \n",z);
	
	return 0;
}


