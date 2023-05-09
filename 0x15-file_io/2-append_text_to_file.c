#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file to append to.
 * @text_content: The NULL terminated string to add at the end of the file
 * Description: funtion that adds text to file
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp = fopen(filename, "a");

	if (filename == NULL)
	{
		return (-1);
	}
	if (fp == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fprintf(fp, "%s", text_content);
	}
	fclose(fp);
	return (1);
}
