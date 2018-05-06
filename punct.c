#include <stdio.h>
#include <ctype.h>

int main ()
{

    char ch;

    printf("Enter a character:");

    scanf("%c",&ch);

    if(ispunct(ch))

        printf("%c is a punctuation number",ch);

    else

        printf("%c is not a punctuation number",ch);

    return 0;
}

