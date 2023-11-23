
enum version
{
    HTML,
    HTML5,
};

typedef struct
{

    const char *fileName;
    char title[32];
    char element[8192];
    enum version __version__;

} html;



void write(html *ht, const char *element);

void _build_file_(html *htmlf);

extern void mainc();

