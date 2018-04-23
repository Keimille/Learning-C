//conditional operators "?" ":"
//condition?expression:expression for false:
//example
if (a>b)
    m = a = b;
else
    m = a-b;
//above example written with conditional operators
m = a>b? a + b : a - b;

//example of nested conditional operators
//sample else if code
if (a > b && a > c)
    m = a;
else if ( b > c)
    m = b;
else m = c;
//the conditional operator version
m = (a > b && a >c)? a : (b > c? b : c);
