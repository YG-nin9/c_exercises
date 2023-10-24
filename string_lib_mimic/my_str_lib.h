#ifndef _MY_STR_LIB_H_
#define _MY_STR_LIB_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*trying to do the string library*/

//searches for c in the n range inside the str
void *my_memchr(const void *str, int c, int n);

/*compares the str1 and str2 for n is the range
 returns 0 if equal and negative if str2 is bigger than str1
 and positive if str1 is bigger*/
int my_memcmp(const void *str1, const void *str2, size_t n);
/*copies the source str into the destination str*/
void *my_memcpy(void *dest, const void * src, size_t n);
/*copies but in a safe way an d moves the blocks by n*/
void *my_memmove(void *dest, const void *src, size_t n);
/*copies the c char into the first n in the destintaion array*/
void *my_memset(void *dest, int c, size_t n);
/*appends the src dat to the end of the dest*/
char *my_strcat(char *dest, const char *src);
/*as the strcat but appends the n bytes of source to destination*/
char *my_strncat(char *dest, const char *src, size_t n);
/*searches for the first place that c appers in it, returns a pointer to that location*/
char *my_strchr(const char *str, int c);
/*compares str1 and str2 and returns same as memcmp*/
int my_strcmp(const char *str1, const char *str2);
/*same as memcmp nothing more*/
int my_strncmp(const char *str1, const char *str2, size_t n);


#endif

