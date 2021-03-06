# Creating Modules with Function
- Reduces complexity
- Reduces development time
- Easy to identify bugs
- Easy to update program

## Libray Functions vs. User Defined Functions

### Examples of Library Functions
- scanf()
- printf()
- strlen()
- strcpy

These are all genereal purpose functions. If you would like to developic cleaner and specific program you will want to use User Defined Functions

## User Defined Functions (UDF)

### Requirements/Considerations
- Function name must be unique
- Must have input paramaters
- What is the return value?
    * Return data type must match the data type prefix of function. *
    
  ## Create Library of Functions
  1. Create a folders with [headers](https://github.com/Keimille/Learning-C/blob/master/ModularisingWithFunction/HeaderFormatExample.h) and a seperate folder with function definitions. 
  2. Compile files with function definitions: gcc -c *.c
  3. Create archive and name library: ar -cvq libnameOfFile.a *.o
  
  In order to include these headers in your program, use the following format:
  *#include "headers/filename.h"* 
  "headers" is the directory that filename.h resides
  
  Compile the program as follows *gcc -o filename filename.c libnameOfFile.a*
