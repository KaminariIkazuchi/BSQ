#include "my.h"

int main(int argc, char *argv[])
{
	char *map = error_management(argc, argv);

	if (map == NULL)
		return (84);
	if (map_solver(map) == FAILURE)
		return (84);
	free (map);
	return (0);
}