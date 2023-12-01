#include "main.h"
/**
 * append_text_to_file - appends text
 * @filename: name of file
 * @text_content: contents of the file
 *
 * Return: 1 if file exists. -1 if it does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int kletters;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		for (kletters = 0; text_content[kletters]; kletters++)
			;
		rwr = write(file_d, text_content, kletters);
		if (rwr == -1)
			return (-1);
	}

	close(file_d);

	return (1);
}
