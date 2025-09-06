
/*Creator: Mac Campbell
Date of creation: 4/20/2025 (20 of April)
Description: Prints the array, but in reverse using recursion.

*/
#include <stdlib.h>
#include <stdio.h>

//prototype
void Print_Array_Reverse(int array[], int size);

int main(void)
{ 
	
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size_a = sizeof(a) / sizeof(a[0]);// determines size of the array
	
	Print_Array_Reverse(a, size_a);
	

	int b[] = { -1, 2,-5, 9,-10 };
	int size_b = sizeof(b) / sizeof(b[0]);// determines size of the array
	Print_Array_Reverse(b, size_b);

	return 0;
}//end of main

void Print_Array_Reverse(int array[], int size)//takes array and size of array
{
	static int check = 0;
	if (check == 0)//check to make print once
	{
		printf("Array elements (in reverse order) are: ");
		check = 1;
	}

	if(size != 0)
	{//moves to next element
		printf("%d ", array[size - 1]);
		size--;
		Print_Array_Reverse(array, size);
	}
	if(size == 0)
	{//set up for the next array
		check = 0;
		printf("\n");
	}
	

}//end of print array reverse