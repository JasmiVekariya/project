#include<stdio.h>
int isGreaterThan(int input_by_user);
int getNum();
int main()
{
    //Declaring and initializing the variable.
    int input_by_user = 0;
    printf("Please enter a number : ");
    //The value which is returned by getNum() function gets stored in input_by_user.
    //Call getNum() function.
    input_by_user = getNum();

    //Check whether the value is greater than or less than or equal to 1000.
    if (isGreaterThan(input_by_user))
    {
        printf("%d is greater than 1000.\n", input_by_user);
    }
    else
    {
        printf("%d is less than or equal 1000.\n", input_by_user);
    }
}

//Defining the function isGreaterThan()
int isGreaterThan(int input_by_user)
{
    //If the input by user is greater than 1000 the value returned by isGreaterThan() is 1 and is 0 if the user input is less than or equal to 1000.
    int final_result = 0;
    if (input_by_user > 1000)
    {
        final_result = 1;
    }
    return final_result;
}

#pragma warning(disable : 4996) // required by Visual Studio
//Defining the function getNum()
int getNum(void)
{
    /* the array is 121 bytes in size; we'll see in a later lecture how we can
    improve this code */
    char record[121] = { 0 }; /* record stores the string */
    int number = 0;
    /* NOTE to student: brace this function consistent with your others */
    /* use fgets() to get a string from the keyboard */
    fgets(record, 121, stdin);
    /* extract the number from the string; sscanf() returns a number
    * corresponding with the number of items it found in the string */
    if (sscanf(record, "%d", &number) != 1)
    {
        /* if the user did not enter a number recognizable by
        * the system, set number to -1 */
        number = -1;
    }
    return number;
}