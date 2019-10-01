#include <stdio.h>
#include <conio.h>

int main()
{
  int search, c, n,i;

  printf("Enter the number of elements in array\n");
  scanf("%d", &n); /* Taking input for no of elements in array*/
  
  int *array = (int *)malloc(n*sizeof(int));
  
  printf("Enter %d integer(s) :\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]); /* Taking input for values of array at each index*/

  printf("Enter a number to search\n");
  scanf("%d", &search); /* Taking input for element to search*/
  printf("Searching for element......");
  for(i=0;i<=1000000000;i++){}//This is a delay loop
  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If element is found */
    {
      printf("%d is found at location %d.\n", search, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't found in the array.\n", search);

  return 0;
}
