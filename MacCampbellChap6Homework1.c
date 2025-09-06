
/*Creator: Mac Campbell
Date of creation: 4/20/2025 (20 of April)
Description: Determines the mean, median, and mode of an array filled with random numbers.
The length of the array is determined by the user.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void mean(int array[],int size);//the prototypes
int sort(int array[], int size);
void median(int array[], int size);
void mode(int array[], int size);

int main(void)
{ 
	


	
	int* array = NULL;// int array with undefined length

	srand(time(NULL));
	int user_size;

	int size_check = 0;
	while (size_check != 1) {//check for size
		printf("Enter length of the array: ");
		scanf_s("%d", &user_size);

		if (user_size < 1)
		{
			printf("ERROR: array size must be larger than zero.\n\n");

		}
		else
		{
			size_check = 1;
		}
	}
	puts("");
    //malloc used to create the array
	array = (int *) malloc(sizeof(int)* user_size);
	for (int i = 0; i < user_size; i++)//inserting random numbers into the array;
	{
		array[i] = 1 + rand()	% 10;
		
		
	}

	mean(array, user_size);
	int print_count = 0;
	
    printf("The unsorted array is:\n");
	for (int i = 0; i < user_size; i++)
	{
		printf("%3d", array[i]);
		print_count++;
		if (print_count % 20 == 0)
		{
			printf("\n");
		}
	}
	printf("\n\n");
	array[0] = sort(array, user_size);
	printf("The sorted array is:\n");//it prints here because freq_array needs to use sort later

        print_count = 0;

	for (int i = 0; i < user_size; i++)
	{
		printf("%3d", array[i]);
		print_count++;
		if (print_count % 20 == 0)
		{
			printf("\n");
		}
	}
	printf("\n\n");

	median(array, user_size);
	
	mode(array, user_size);
	return 0;
}//end of main

void mean(int array[],int size)//produces the mean
{
	double total = 0;
	for (int i = 0; i < size; i++)
	{
		total += array[i];

	}
	

	printf("The mean is: %lf\n\n", (total / size));

}//end of mean function

int sort(int array[], int size)//sorts the array
{
	for (int pass = 1; pass < size  ; pass++)
	{
		for (int i = 0; i < size -1; i++)
		{
			if (array[i] > array[i + 1]) {
				int hold = array[i];
				array[i] = array[i + 1];
				array[i + 1] = hold;
			}
		}
	}
	
	return array[0];

}//end of sort function

void median(int array[], int size)//finds the median of the array
{
	double num = 0;
	if ((size % 2) == 0)//check for even or odd sized array
	{
		num = (double)(array[(size / 2)] + array[(size / 2) - 1]) / 2;

	}
	else
	{
		num = (array[(size / 2)]);
	}
	printf("The median is: %lf\n\n", num);
}//end of median function

void mode(int array[], int size)//finds the mode
{
	int freq_array[11] = { 0 };

	for (int i = 0; i < size; i++)
	{
		if (array[i] == 1)
		{
			freq_array[1]++;

		} else if(array[i] == 2)
		{
			freq_array[2]++;

		}
		else if (array[i] == 3)
		{
			freq_array[3]++;

		}
		else if (array[i] == 4)
		{
			freq_array[4]++;

		}
		else if (array[i] == 5)
		{
			freq_array[5]++;

		}
		else if (array[i] == 6)
		{
			freq_array[6]++;

		}
		else if (array[i] == 7)
		{
			freq_array[7]++;

		}
		else if (array[i] == 8)
		{
			freq_array[8]++;

		}
		else if (array[i] == 9)
		{
			freq_array[9]++;

		}
		else if (array[i] == 10)
		{
			freq_array[10]++;

		}

	}
	
	printf("\n");

    //This is used to produce individual frequencies. I have not included it as it was not asked for.
	/*for (int i = 1; i <= 10; i++)
	{
		printf("frequency of %d :%d\n", i, freq_array[i]);
	}printf("\n");
	*/
	int largest = 0;
	int high_freq = 0;
	int count = 0;

	for (int i = 1; i < 11; i++)
	{
		if (freq_array[i] >= largest)
		{
			largest = freq_array[i];
			high_freq = i;
		}
		

	}
	
	for (int i = 1; i < 11; i++)
	{
		if (largest == freq_array[i])
		{
			count++;

		}


	}
	if (count < 10) {//if all numbers are the same then there is no mode. The chances of this happening is impossibly low.
		if (count == 1)
		{
			printf("The data is unimodal.\nThe value is:");
			

		}
		else if (count == 2)
		{
			printf("The data is bimodal.\nThe values are:");

		}
		else if (count >= 3)
		{
			printf("The data is multimodal.\nThe values are:");

		}
		for (int i = 1; i < 11; i++)
		{
			
			if (largest == freq_array[i])
			{
				printf("%3d", i);

			}


		}
	}
	else
	{
		printf("ALl numbers are of the same frequency: %d", largest);

	}

	printf("\n\n");
}//end of mode function
