#ifndef DESCRIPTOR_H
#define DESCRIPTOR_H

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char *argv[]);
int close_files(int fd_from, int fd_to);
int copy_data(int fd_from, int fd_to);
int *open_files(const char *source, const char *destination);
void print_error(int code, const char *message, const char *extra);



#endif
