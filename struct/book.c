#include <stdio.h>

struct book {
        char *title;
        int page;
    };

void main() {
    struct book udin;
    udin.title = "The fabulous udin";
    udin.page = 200;

    printf("title: %s \n", udin.title);
    printf("page: %i \n", udin.page);
}
