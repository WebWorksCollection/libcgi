#ifndef TEMPLATE_H
#define TEMPLATE_H
#include "attr.h"
typedef struct template template_t;
template_t *template_loadfile(const char *filename);
void template_apply(template_t *t, attrlist_t al);
void template_free(template_t *t);
#endif