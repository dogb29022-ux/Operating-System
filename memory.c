// #include <stdio.h>

// int main() {
//     printf("Shreejan\n");
//     return 0;
// }

#include <stdio.h>
#include<stdlib.h>

int global_var = 100;
static int static_var = 200;

int main() {
    int local_var = 300:
    static int local_static = 400;

    int *heap_var = (int*)malloc(sizeof(int));
    *heap_var = 500;

    printf("===Variable Address ===\n\n");
    printf("global_var:   %p (data)")
}