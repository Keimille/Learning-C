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

## For Loop Vs. Recursion

Recursion does not have as much overhead in some instances. However, there are some times when stach management (created through recursion) has more overhead than for loop.

### Example of recurssion being better than itteration (binary conversion)
```
void decToBin(unsigned int n) {
      if (n = 1) {
        printf("1");
        return;
        }
        decToBin(n/2);
        printf("%d", n%2);
        }
      int main(){
         decToBin(10); //number to be converted
         return 0;
         }
 ```
 
