#include <stdio.h>
#include <cs50.h>

int main(void)

{
    //Enter your name 
    string name = get_string("What's your name? \n");
    // greeting
    printf("Hello, %s !\n", name);
}