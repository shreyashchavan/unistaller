#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Declare a character array to store the path
    const int PATH_SIZE = 256;
    char path[PATH_SIZE];

    // Prompt the user to enter the path
    printf("Enter the path: ");

    // Use fgets to read the path from the user
    fgets(path, PATH_SIZE, stdin);

    // Remove the newline character from the end of the path
    path[strcspn(path, "\n")] = 0;

    // Print the path to verify that it was read correctly
    printf("The path you entered is: %s", path);
    
    // The path to the program you want to uninstall
    const char* program_path = path;

    // Use the remove function to uninstall the program
    int result = remove(program_path);

    // Check the return value of the remove function
    // and print a message indicating whether the
    // uninstall was successful or not
    if (result == 0)
    {
        printf("Uninstall successful!\n");
    }
    else
    {
        printf("Uninstall failed!\n");
    }

    return 0;
}
