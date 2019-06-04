# XOR, Rotate, Multiply

I'm looking for 6 parameters X1, X2, R1, R2, M1, M2 so that the nested function call is equivalent to addition:

```c++
// C++:
#include "xrm_template.cc"

XRM<X1, R1, M1> xrm1;
XRM<X2, R2, M2> xrm2;

ASSERT_TRUE( xrm1(xrm2(u)) == u+1 );  // for all u from 0 … 2⁶⁴-1
```
