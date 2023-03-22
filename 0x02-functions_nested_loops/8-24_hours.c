#include "main.h"

/**
  *jack_bauer - prints every min of the day from 00:00 to 23:59
  */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		_putchar(hour);

		_putchar(':');

		for (minute = 0; minute < 60 ; minute++)
			{
				_putchar(minute);

			}

		
	}

	_putchar('\n');

}
