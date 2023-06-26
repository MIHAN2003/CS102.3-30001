#include <stdio.h>
int main()
{
    //...Declaring variable
    char ch;
    //...User Input
    printf("Enter the Character :");
    scanf("%c", &ch);
    //...Switch condition
    switch(ch)
    {
        case 'a':printf("%c is Vowel", ch);break;
        case 'A':printf("%c is Vowel", ch);break;
        case 'e':printf("%c is Vowel", ch);break;
        case 'E':printf("%c is Vowel", ch);break;
        case 'i':printf("%c is Vowel", ch);break;
        case 'I':printf("%c is Vowel", ch);break;
        case 'o':printf("%c is Vowel", ch);break;
        case 'O':printf("%c is Vowel", ch);break;
        case 'u':printf("%c is Vowel", ch);break;
        case 'U':printf("%c is Vowel", ch);break;
        default :printf("%c is not Vowel", ch);
    }
}