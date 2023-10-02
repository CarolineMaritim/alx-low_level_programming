#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: Pointer to file name created
 * @text_content: String to write in file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int open_fd, write_fd, count;

	count = 0;
	/*check for errors*/
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		/*calculate strn length*/
		for (count = 0; text_content[count];)
			count++;
	}
	open_fd  = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	write_fd = write(open_fd, text_content, count);
	/*check for more errors*/
	if (open_fd == -1 || write_fd == -1)
	{
		return (-1);
	}
	close(open_fd);
	return (1);
}
