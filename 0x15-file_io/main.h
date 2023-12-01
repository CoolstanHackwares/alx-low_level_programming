#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <elf.h>

#define ELF_HEADER_SIZE 16
#define TITLE_SIZE 30

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_exit(const char *message, int exit_code);

/*Prototypes for the ELF Header*/

void print_title(char *title);
void print_errors(char *msg);
void print_type(char *buffer);
void print_ABIversion(char *buffer);
void print_entry(void);
void print_os(char *buffer);
void print_version(char *buffer);
void print_data(char *buffer);
void print_magic(char *buffer);
void print_class(char *buffer);
int main(int argc, char **argv);

#endif
