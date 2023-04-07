#include "main.h"
#include <stdint.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	uint16_t num = 0x1;
	uint8_t *byte = (uint8_t *)&num;

	return ((byte[0] == 0x1) ? 1 : 0);
}
