#include "my_str_lib.h"

const char str[] = "hi there, hope ur are good";
const char arr1[] = "me being big";
const char arr2[] = "me being not big";
char test[] = " old version";
char test1[] = "new version";
const char ch = ',';
char *ret;
int val;

int main()
{
    ret = my_memchr(str, ch, strlen(str));
    printf("%s\n", ret);
    printf("---------------------------------------\n");

    val = my_memcmp(arr1, arr2, 7);
    printf ("val = %i \n", val);
    printf("---------------------------------------\n");

    my_memcpy(test, arr2, strlen(arr2));
    printf("After is : %s \n ", test);
    printf("---------------------------------------\n");

    my_memmove(test, arr2, 5);
    printf("After is : %s \n ", test);
    printf("---------------------------------------\n");

    my_memset(test, 'A', 5);
    printf("After is : %s \n ", test);
    printf("---------------------------------------\n");

    *test = my_strcat(test, test1);
    printf("%s\n", test);
    printf("---------------------------------------\n");

    *test = my_strncat(test, test1, 5);
    printf("%s\n", test);
    printf("---------------------------------------\n");

    ret = my_strchr(str, ch);
    printf("%s\n", ret);
    printf("---------------------------------------\n");

    val = my_strcmp(arr1, arr2);
    printf("%i \n ", val);
    printf("---------------------------------------\n");

    val = my_strncmp(arr1, arr2, 12);
    printf("%i \n ", val);
    printf("---------------------------------------\n");



    return 0;
}

void *my_memchr(const void *str, int c,int n){

    int index = 0;
    char *cmp = str;
    char *found = NULL;

    if(NULL == str || NULL == c){
        printf("NULL input, try again pls");
    }
    while((index < n)){

        if(*cmp == c){

          found = cmp;
          break;
        }
        else{
            index++;
            cmp++;
        }
    }
    return found;
}

int my_memcmp(const void *str1, const void *str2, size_t n){

    int stat = 0;
    unsigned char *tarr1 = str1;
    unsigned char *tarr2 = str2;

    if(NULL == str1 || NULL == str2){
        printf("NULL input, try again pls");
    }
    else{
        if(tarr1 == tarr2){

        }
        else{

         while (n){

            if(*tarr1 != *tarr2){
                stat = (*tarr1 < *tarr2) ? -1 : 1;
                break;
            }
            else{
                n--;
                tarr1++;
                tarr2++;
            }
         }
        }
    }
     return stat;
}

void *my_memcpy(void *dest, const void * src, size_t n){

    unsigned char *tdest = dest;
    unsigned char *tsrc = src;

    if( NULL == src){
        printf("Error, input is NULL");
    }

    while(n){

        *tdest++ = *tsrc++;
        n--;
    }
    return dest;
}

void *my_memmove(void *dest, const void *src, size_t n){

    unsigned char *tdest = dest;
    unsigned char *tsrc = src;

    if( NULL == src){
        printf("Error, input is NULL");
    }

    while(n){

        *tdest++ = *tsrc++;
        n--;
    }
    return dest;
}

void *my_memset(void *dest, int c, size_t n){

    unsigned char *tdest = dest;

    if( NULL == c){
        printf("Error, input is NULL");
    }

    while(n){

        *tdest++ = c;
        n--;
    }
    return tdest;
}

char *my_strcat(char *dest, const char *src){

    size_t N = strlen(src);

    if( NULL == src){
        return dest;
    }

    while(*dest != '\0'){

        dest++;
    }

    while(N && *src){

        *dest++ = *src++;
        N--;
    }
    *dest = '\0';

    return dest;
}

char *my_strncat(char *dest, const char *src, size_t n){

    unsigned char *tsrc = src;

    if( NULL == src){
        return dest;
    }

    while(*dest){

        dest++;
    }

    while(n && *src){

        *dest++ = *tsrc++;
        n--;
    }
    *dest = '\0';

    return dest;
}

char *my_strchr(const char *str, int c){

    char *cmp = str;
    char *found = NULL;

    if(NULL == cmp || NULL == c){
        printf("NULL input, try again pls");
        return cmp;
    }
    while(*cmp){

        if(*cmp == c){

          found = cmp;
          break;
        }
        else{
            cmp++;
        }
    }
    return found;
}

int my_strcmp(const char *str1, const char *str2){

    int stat = 0;
    unsigned char *tarr1 = str1;
    unsigned char *tarr2 = str2;

    if(NULL == str1 || NULL == str2){
        printf("NULL input, try again pls");
    }
    else{
        if(tarr1 == tarr2){

        }
        else{

         while (*tarr1 && *tarr2){

            if(*tarr1 != *tarr2){
                stat = (*tarr1 < *tarr2) ? -1 : 1;
                break;
            }
            else{
                tarr1++;
                tarr2++;
            }
         }
        }
    }
     return stat;
}

int my_strncmp(const char *str1, const char *str2, size_t n){

    int stat = 0;
    unsigned char *tarr1 = str1;
    unsigned char *tarr2 = str2;

    if(NULL == str1 || NULL == str2){
        printf("NULL input, try again pls");
    }
    else{
        if(tarr1 == tarr2){

        }
        else{

         while (n){

            if(*tarr1 != *tarr2){
                stat = (*tarr1 < *tarr2) ? -1 : 1;
                break;
            }
            else{
                n--;
                tarr1++;
                tarr2++;
            }
         }
        }
    }
     return stat;
}


