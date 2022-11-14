#include <stdio.h>
#include <malloc.h>

int main(int argc, char *argv[]){
    void *p1, *p2, *p3;
    p1 = malloc(10);
    printf("Alloc p1: %p\n", p1);
    p2 = malloc(10);
    printf("Alloc p2: %p\n", p2);
    p3 = malloc(10);
    printf("Alloc p3: %p\n", p3);

    printf("Free p1...\n");
    free(p1);
    printf("Finished, alloc p1 after free: %p\n", p1);

    printf("Free p2\n");
    free(p2);
    // possible solution
    // p2 = NULL;
    printf("Finished, alloc p2 after free: %p\n", p2);

    printf("Free p3\n");
    free(p3);
    printf("Finished, alloc p3 after free: %p\n", p3);

    printf("Double free p2\n");
    free(p2);
    printf("Free p2\n");

    return 0;
}
