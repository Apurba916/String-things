#include<stdio.h>
//I cannot use <string.h> here because of the problem statement. 
int main(){
    //Enter two string.
    char str_1[100];
    printf("Enter first string:\n");
    fgets(str_1, sizeof(str_1), stdin);
    char str_2[100];
    printf("Enter second string:\n");
    fgets(str_2, sizeof(str_2), stdin);

    //Let us concatinate the two strings.
    //Let us create another string. We are going to store the concatinated version of the two strings in this new string.
    char str_3[200];
    //Without string.h I need to use another way to find the length of the string.
    int len_1 = 0;
    while (str_1[len_1] != '\0' && str_1[len_1] != '\n')
    {
        len_1 = len_1 + 1;
    }

    int len_2 = 0;
    while (str_2[len_2] != '\0' && str_2[len_2] != '\n')
    {
        len_2 = len_2 + 1;
    }
    for (int i = 0; i < len_1; i++)
    {
        str_3[i] = str_1[i];
    }
    for (int j = 0; j < len_2; j++)
    {
        str_3[len_1 + j] = str_2[j];
    }
    str_3[len_1 + len_2] = '\0';
    printf("The concatinated string is %s.\n", str_3);

    return 0;
}
