#include "..\html\html.h"

void mainc()
{
    html ht = {"index.htmls", "Main", "", HTML5};
    html *h = &ht;
    write(h, "<html>\n");

    write(h, "  <head>\n");
    write(h, "    <title>\n");
    write(h, "       Main\n");
    write(h, "    </title>\n");
    write(h, "    <meta charset='utf-8'>\n");
    write(h, "    <meta name='viewport' content='width=device-width, initial-scale=1.0'>\n");
    write(h, "  </head>\n");

    write(h, "  <body>\n");
    write(h, "    <div>\n");
    write(h, "    </div>\n");
    write(h, "  </body>\n");

    write(h, "</html>");
    _build_file_(h);
}