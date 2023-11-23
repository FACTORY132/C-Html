#include <stdio.h>
#include <string.h>
#include "..\include\html\html.h"

void write(html *ht, const char *element)
{

    strcat(ht->element, element);
}

void _build_file_(html *htmlf)
{
    remove(htmlf->fileName);
    FILE *file = fopen64(htmlf->fileName, "a");
    fwrite(htmlf->element, 1, strlen(htmlf->element), file);
    fclose(file);

    
}