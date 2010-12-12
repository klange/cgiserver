#ifndef __VECTOR_H_
#define __VECTOR_H_

typedef struct _vector{
	void** buffer;
	unsigned int size;
	unsigned int allocSize;
}vector_t;

vector_t* alloc_vector(void);
void free_vector(vector_t* v);

void vector_append(vector_t* v, void *item);
void *vector_at(vector_t* v, unsigned int idx);
unsigned int vector_size(vector_t* v);

#endif
