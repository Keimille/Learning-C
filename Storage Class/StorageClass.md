# Storage Classes

## 4 Types
1. Auto
2. Static
3. Extern
4. Register

The class defines 3 things for a variable:
1. Scope
2. Life Time
3. Initial Value

### Definitions
- Scope - defines the block(s) from which the variable is accessible 
- Life Time - How long the variable will remain allocated in primary memory
- Initial Value - The value that the variable is assigned immediately after allocation

## Auto Storage Class
Classes are automatically declared auto. The intial value of a variable with a class of auto is undefined (garbage) and as a result is unpredictable.

**Scope** - Limited to the block of code it is written in (locally available).

**Lifetime** - When the function is over the variable it is deallocated from memory.

**Initial Value** - Undefined

## Static Storage Class
Static variables are all ready allocated in the program where they are declared.

**Scope** - Local

**Lifetime** - Exists until the termination of program

**Intial Value** - Always initialized with 0

## Extern Storage Class

**Scope** - "Global." Can be accesses from any function of the program.

**Lifetime** - Exists until termination of the program

**Initial Value** - Intialized with 0

## Register Storage Class 

**Scope** - Limited to the block of code it is written in (locally available).

**Lifetime** - When the function is over the variable it is deallocated from memory.

**Initial Value** - Undefined
