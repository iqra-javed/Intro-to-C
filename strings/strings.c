#include <stdio.h>
#include <stdlib.h>

/*
    Given a character array s, return the number of characters 
    held inside it.
    
    Do not just use the `strlen` function from the standard libary.
*/
int string_length(char s[])
{
    int counter = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        counter += 1;
    }
    // printf("%d\n", counter);
    return counter;
}

/*
    Write a function that reverses the order of string s and outputs 
    the reversed string to the input array rv. The rv array will have 
    enough space for the reversed string. Don't forget to terminate 
    the reversed string with a null character. Return the rv array.
*/

char *reverse_string(char rv[], char s[])
{
    int length = string_length(s);
    for (int i = length -1; i >= 0; i--) {
        /* instead of nested for loop, x will be a constant integer
        and will allow insertion of values into rv beginning at index 0 */
        int x = length-1; 
        rv[x-i] = s[i];
    }
    
    rv[length] = '\0';
    return rv;
}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[512];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
    
