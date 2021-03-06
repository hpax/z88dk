
// automatically generated by m4 from headers in proto subdir


#ifndef __ALLOC_OBSTACK_H__
#define __ALLOC_OBSTACK_H__

#include <stddef.h>

// DATA STRUCTURES

struct obstack
{
   void       *fence;
   void       *object;
   void       *end;
};

extern void *obstack_1grow(struct obstack *ob,int c);


extern void *obstack_1grow_fast(struct obstack *ob,int c);


extern size_t obstack_align_distance(struct obstack *ob,size_t alignment);


extern int obstack_align_to(struct obstack *ob,size_t alignment);


extern void *obstack_alloc(struct obstack *ob,size_t size);


extern void *obstack_base(struct obstack *ob);


extern void *obstack_blank(struct obstack *ob,int size);


extern void *obstack_blank_fast(struct obstack *ob,int size);


extern void *obstack_copy(struct obstack *ob,void *p,size_t size);


extern void *obstack_copy0(struct obstack *ob,void *p,size_t size);


extern void *obstack_finish(struct obstack *ob);


extern void *obstack_free(struct obstack *ob,void *object);


extern int obstack_grow(struct obstack *ob,void *data,size_t size);


extern int obstack_grow0(struct obstack *ob,void *data,size_t size);


extern void *obstack_init(struct obstack *ob,size_t size);


extern void *obstack_int_grow(struct obstack *ob,int data);


extern void *obstack_int_grow_fast(struct obstack *ob,int data);


extern void *obstack_next_free(struct obstack *ob);


extern size_t obstack_object_size(struct obstack *ob);


extern size_t obstack_room(struct obstack *ob);



#endif
