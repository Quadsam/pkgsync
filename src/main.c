#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "json-c/json.h"


char *find_db(void)
{
	if (getenv("PKGSYNCDB") != NULL)
	{
		char *db = getenv("PKGSYNCDB");
		if (access(db, F_OK) == 0)
			return db;
	}
	else if (access("/usr/share/pkgsync/packages.json", F_OK) == 0)
	{
		char *db = "/usr/share/pkgsync/packages.json";
		return db;
	}
	return NULL;
}

int main(void)
{
	char *db = find_db();
	if (db == NULL)
	{
		printf("No exsisting package database found, create an new one? ");
		switch (getc(stdin)) {
			case 'Y':
			case 'y':
				printf("Creating a new database...\n");
				db = "/usr/share/pkgsync/packages.json";
				break;
			default:
				return -1;
		}
	}

	printf("Database located at: %s\n", db);
	json_object *root = json_object_from_file(db);
	if (!root)
	{
		printf("unable to open the package database!\n");
		return -1;
	}

	printf("The json file:\n\n%s\n", json_object_to_json_string_ext(root, JSON_C_TO_STRING_PRETTY));
	json_object_put(root);
	return 0;
}
