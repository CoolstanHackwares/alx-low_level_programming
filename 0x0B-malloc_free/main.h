#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int is_space(char c);
int count_words(char *str);
char *strdup_custom(char *str, int len);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
