#include <stdio.h>
int main(){
    //Take a string as input
    char string[100];
    printf("Enter a string:");
    fgets(string, sizeof(string), stdin);
    //calculate the length of the string
    //start the length from 0
    int length = 0;
    //You will increase the length of the string by 1 with character in the string.
    //You will stop the counter when you reach the null character.
    for (int i = 0; i < 100; i++)
    {
        if (string[i] == '\0')
        {
            break;
        }

        else
        {
            length = length + 1;
        }
        
    }
    //terminate the null character
    length = length - 1;
    //Print the length of the string
    printf("The length of the string is %d.\n", length);
    return 0;
}
