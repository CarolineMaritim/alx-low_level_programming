#include "main.h"
#include <stdio.h>
char *create_content(char *file_name);
void close_content(int fd);
/**
 * create_content - Allocates memory to Buffer
 * @file_name: Name of file
 *
 * Return: New buffer created
 */
char *create_content(char *file_name)
{
char *buf;

/*allocate memory*/
buf = malloc(sizeof(char) * 1024);
/*check if empty*/
if (buf == NULL)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
	exit(99);
}
return (buf);
}
/**
 * close_content - Closes f_descriptors
 * @fd: The file descriptor.
 */
void close_content(int fd)
{
int close_fd;

close_fd = close(fd);
/*check if you can close the file*/
if (close_fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
}
/**
 * main - Function that copies content from one file to another
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: 0 always succes
 */
int main(int argc, char *argv[])
{
int source, dest, read_fd, write_fd;
char *buf;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
buf = create_content(argv[2]);/*filename is created on second arg passed*/
source = open(argv[1], O_RDONLY);
read_fd = read(source, buf, 1024);
dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do{
if (source == -1 || read_fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	free(buf);/*memory mngt*/
	exit(98);
}
write_fd = write(dest, buf, 1024);
if (dest == -1 || write_fd == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	free(buf);
	exit(99);
}
read_fd = read(source, buf, 1024);
dest = open(argv[2], O_WRONLY | O_APPEND);
} while (read_fd > 0);
close(source);
close(dest);
return (0);
}
