#include <limits.h>
#include <stdio.h>
#include "main.h"

int main ()
{
	_printf("%S\n", "Best\nSchool");
	printf("%S\n", "Best\nSchool");
	_printf("%S", "No special character.");
	printf("%S", "No special character.");
	_printf("%S", "\n");
	printf("%S", "\n");
	_printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	printf("%S", "\x01\x02\x03\x04\x05\x06\x07");
	_printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	_printf("");
	printf("");
	_printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	return (0);
}
