#include "main.h"

/**
  * initPrintBuffer - Initialize a PrintBuffer struct
  * @buffer: input argument struct
  */
void initPrintBuffer(PrintBuffer *buffer){
	buffer->position = 0;
}

/**
 * writeCharToBuffer - Write a character to the PrintBuffer.
 * @buffer: argument struct
 * @c: character to be printed
 */
void writeCharToBuffer(PrintBuffer *buffer, char c)
{
	if ((size_t)buffer->position < sizeof(buffer->data) - 1)
	{
		buffer->data[buffer->position++] = c;
	}
	else
	{
		/* Buffer is full, flush it to the output */
		write(1, buffer->data, buffer->position);
		buffer->position = 0; /* Reset buffer position */
	}

}	
