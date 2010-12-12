#include <stdlib.h>
#include <string.h>

#include "vector.h"

#define INIT_VEC_SIZE 1024

vector_t* alloc_vector(void) {
    vector_t* v = (vector_t*) malloc(sizeof(struct _vector));
    v->buffer = (void **) malloc(INIT_VEC_SIZE * sizeof(void *));
    v->size = 0;
    v->allocSize = INIT_VEC_SIZE;

    return v;
}
void free_vector(vector_t* v) {
    free(v->buffer);
    free(v);
}

void vector_append(vector_t* v, void *item) {
    if(v->size == v->allocSize) {
        v->allocSize = v->allocSize*2;
        v->buffer = (void **) realloc(v->buffer, v->allocSize * sizeof(void*));
    }

    v->buffer[v->size] = item;
    v->size++;
}

void *vector_at(vector_t* v, unsigned int idx) {
    if(idx >= v->size) {
        return NULL;
    }

    return v->buffer[idx];
}

unsigned int vector_size(vector_t* v) {
    return v->size;
}


