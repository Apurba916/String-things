#include <stdio.h>

int main(){
    //Enter a string.
    char str[100];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    //let us find the length of the string.
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }
    //Let us reverse the string now.
    //Let us create a start and an end.
    int start = 0;
    //We are writing end as less than 1 because the last character is null character and we are not going to consider it in our work.
    int end = len - 1;
    while (start < end)
    {
        char c = str[start];
        str[start] = str[end];
        str[end] = c;
        start++;
        end--;
    }
    printf("The reversed string is:%s.\n", str);\
    return 0;
}
