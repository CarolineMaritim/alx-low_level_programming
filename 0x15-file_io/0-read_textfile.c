#include "main.h"
#include <unistd.h>
/**
 * read_textfile - Fuction that reads text file to POSIX stdout
 * @filename: Pointer to Name of the file
 * @letters: Number of letters
 *
 * Return: Number of letters it could print,
 *    else 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t write_fd, read_fd, open_fd;
char *buf;

/*allocate memory to the buffer*/
buf = malloc(sizeof(char) * letters);
if (filename == NULL)
{
	return (0);
}

if (buf == NULL)
{
	return (0);
}

open_fd = open(filename, O_RDONLY);/*return value is an fd*/
read_fd = read(open_fd, buf, letters);/*reads byte count*/
write_fd = write(STDIN_FILENO, buf, read_fd);/*POSIX symbolli constants*/

if (open_fd == -1 || read_fd == -1 || write_fd == -1 || write_fd != read_fd)
{
	free(buf);/*memory mngt*/
	return (0);
}
free(buf);
close(open_fd);
return (write_fd);
}
