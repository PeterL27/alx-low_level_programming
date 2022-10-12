/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer yo function used to compare values
 *
 * Return: index of first element
 * -1 if no element is found or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, inc;

	inc = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (inc);
		}

		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				inc = i;
				break;
			}

			if ((cmp(array[i]) == (-1)))
			{
				return (inc);
			}
		}
	}
	return (inc);
}
