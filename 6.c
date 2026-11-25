// Experiment 6: Counter function using storage classes (static, auto, register, extern)
#include <stdio.h>

int totalCalls = 0;                       // global variable: lives for the whole program

void counter(void) {
    static int count = 0;                 // static: keeps its value between calls
    auto int temp = 0;                    // auto: created again on every call

    count++;
    temp++;
    totalCalls++;
    printf("Call %d -> static count = %d, auto temp = %d\n", totalCalls, count, temp);
}

int main() {
    register int i;                       // register: fast loop counter (kept in CPU register)
    extern int totalCalls;                // extern: refers to the global variable above

    printf("Calling counter() 5 times:\n\n");
    for (i = 1; i <= 5; i++)
        counter();

    printf("\nThe function was called %d times.\n", totalCalls);
    return 0;
}