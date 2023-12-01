#include "main.h"

/**
 * create_file - file is created
 * @filename: filename
 * @text_content: content in the file
 *
 * Return: 1 (success). -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int kletters;
	int rwr;

	if (!filename)
		return (-1);

	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (kletters = 0; text_content[kletters]; kletters++)
		;
	rwr = write(file_d, text_content, kletters);
	if (rwr == -1)
		return (-1);

	close(file_d);
	return (1);
}
