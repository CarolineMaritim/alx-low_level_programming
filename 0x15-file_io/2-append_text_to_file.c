#include "main.h"
/**
 * append_text_to_file - Function that appends text at the EOF
 * @filename: Pointer to filename
 * @text_content: String to append ant the EOF
 *
 * Return: 1 on Success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int write_fd, open_fd, count;

	count = 0;
	/*check for errors*/
	if (filename == NULL)
	{
		return (-1);
	}
	/*calculate length of string*/
	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}
	open_fd = open(filename, O_WRONLY | O_APPEND);
	write_fd = write(open_fd, text_content, count);
	/*check for more errors*/
	if (open_fd == -1 || write_fd == -1)
	{
		return (-1);
	}
	close(open_fd);
	return (1);
}

