/* This first line of code is referred to as a preprocessor directive
 * This preprocessor directive indicates that we would like to use the contents  * of the iostream library, which is the part of the C++ standard library that
 * allows us to read and write text from/to the console.
 */
#include <iostream>

int main() // every program must have a main function or it will fail to link
{
    // cout stands for "character output" and the `<<` operator allows us to
    // send letters or numbers to the console output.
    std::cout << "Hello world!" << std::endl;

    /* when an executable program finishe runing, the program sends a value back
     * to the operating system in order to indicate whether it ran successfully
     * or not.
     * This statement returns 0 to the operating system, indicating success
     */
    return 0;
}
