# Recursion 

With recursion, functions can call themselves (recursive funciton call).

### Example code:
```
#include <stdio.h>
void printMsg() {

printf("Hello world\n");
printMsg(); //recursively calling printMSg
}

int main() {
printMsg(3); //call PrintMsg function and will print Hello world 3xs
return 0;
}
```
