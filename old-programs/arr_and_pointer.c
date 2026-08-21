#include <stdio.h>
#include <stdlib.h>

void function() {
    char vowels[] = {'A', 'E', 'I', 'O', 'U'};
    char *ptr_vols = vowels;
    
    size_t size = sizeof(vowels) / sizeof(vowels[0]);
    
    for (size_t i = 0; i < size; i++) {
        fprintf(stdout,"Vowels[%zu]: %p ptr_vols + %zu : vowels + %zu %p\n", i,(void *)&vowels[i], i, i, (void *) (vowels + i));
    }
    
    printf("\n");
    
    for ( size_t q = 0; q < size; q++) {
        fprintf(stdout,"vowels[%zu]: %c, *(vowels + %zu): %c, *(vowels + %zu): %c\n", q, vowels[q], q, *(vowels + q), q, *(vowels + q));
    }
}

int main(void) {
    
    function();
    
    EXIT_SUCCESS;
}    
