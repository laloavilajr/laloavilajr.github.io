#include <stdio.h> // Get me the standard input output functions
main() 
{
    char name[20];
    printf("Please type your first name:\n");
    scanf("%s", &name);
    printf("Hi, %s, it is nice to meet you.\n", name);
    printf("%s", name);
    if (strcmp(name, "Eduardo") == 0) { // Zero means true.
        printf("You are a student.");
    } else if (strcmp(name, "Morelli") == 0) {
        printf("You are the teacher.");  
    } else {
        printf("You are a stranger. Stay away.\n");
    }
}