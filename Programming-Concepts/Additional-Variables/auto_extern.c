#include <stdio.h>

extern int extern_var;  
// Declares a variable that will be defined elsewhere (Assumming there is a file with "int extern_var = 1").
// It doesn't allocate memory for it.
// It is not initialized here; its value is determined by its definition in another file or later in the same file.  
// Functions has extern keyword by default.

int main(){
    auto int auto_var = 0;
    // It specifies that a variable has automatic storage duration (exists only in the function it is declared in).
    // "auto" is unnecessary because all local variables are auto by default.
    // ERROR: "auto" cannot be used at global scope!

    printf("Auto Variable: %d\n", auto_var);
    printf("Extern Variable: %d\n", extern_var);
    
    return 0;
}