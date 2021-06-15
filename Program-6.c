//INPUT(Enter the number of elements) - 3
//INPUT(Enter the elements) - 1 2 3
//OUTPUT- Total number of even numbers and odd numbers in the array are 1 and 2

                           //Correct the code : include header file 

int main()
{
    int arr[10];
    int i, num, evennum, oddnum;
 
    printf("Enter the number of elements");
    scanf("%d",&num);
    
    printf("Enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    evennum = 0; // Assuming 0 even numbers
    oddnum  = 0; // Assuming 0 odd numbers

    for(i=0; i<; i++)       //correct the code
    {
        /* If the current element of array is evennumber then increment evennumber count */
        if(arr[i]%2 == 0)             
        {
            ++;              //Correct the code
        }
        else
        {
            oddnum++; 
        }
}
printf("Total number of even numbers and odd numbers in the array are %d and %d",evennum,oddnum);
return(0);    
}
