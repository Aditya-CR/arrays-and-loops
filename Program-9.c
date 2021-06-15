//linear search 
//INPUT (Enter number of elements: )- 4
//INPUT (Enter the array elements: )- 1 2 3 4
//INPUT (Enter the key: )- 3
//OUTPUT - 3


#include <stdio.h>
int main()
{
  int array[100], search, c, n;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  printf("Enter the array elements: ");
  for (c = 0; c < ; )                  //correct the code
    scanf("%d", &array[c]);

 printf("Enter the key: ");
  scanf("%d", &search);

  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      //Display its location
      printf("%d",c+1);
      break;
    }
  }
  if (c == n)
    printf("%d is not present in the array", );               //correct the code

  return 0;
}
