#include <stdio.h>

int main()
{
    char str[25];
    int i=0, j=0;

    printf("Enter string: ");
    gets(str);

    while(str[j] != '\0')
    {
        j++;
    }

    j--; 

    while(i<j)
    {
        if(str[i] != str[j])
        {
            printf("Not Palindrome");
            return 0;
        }

        i++;
        j--;
    }

    printf("Palindrome");

    return 0;
}
