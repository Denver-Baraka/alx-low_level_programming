/* 0. memset */
char *_memset(char *s, char b, unsigned int n);
/* 1. memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);
/* 2. strchr */
char *_strchr(char *s, char c);
/* 3. strspn */
int is_subset(char c, char *set);
unsigned int _strspn(char *s, char *accept);
/* 4. strpbrk */
char *_strpbrk(char *s, char *accept);
/* 6. chess */
void print_chessboard(char (*a)[8]);
int _putchar(char c);
