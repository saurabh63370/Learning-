#include <iostream>
using namespace std;
int main() {
    int a=20;
    ##define SQUARE(x) x*x
    cout<<"The square of "<<a<<" is "<<SQUARE(a)<<endl;
    // The output will be 400, but if we use SQUARE(a+1) it will give us 441 instead of 441 because of the way the macro is defined. To avoid this issue, we can use parentheses around the parameter in the macro definition like this:
    

}

