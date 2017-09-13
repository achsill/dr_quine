#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int i = 5;
if (strcmp(__FILE__, "Sully.c") == 0)
  i++;
char *str = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%cint main(){%cint i = %d;%cif (strcmp(__FILE__, %cSully.c%c) == 0)%ci++;%cchar *str = %c%s%c;%cif (i - 1 >= 0) {%cchar f_name[100];%csprintf(f_name, %c%cs%cd%cs%c, %cSully_%c, i - 1, %c.c%c);%cFILE* f = fopen(f_name, %cw%c);%cfprintf(f, str, 10, 10, 10, 10, i - 1, 10, 34, 34, 10, 10, 34, str, 34, 10, 10, 10, 34, 37, 37, 37, 34, 34, 34, 34, 34, 10, 34, 34, 10, 10, 34, 37, 37, 37, 37, 37, 37, 37, 34, 34, 34, 34, 34, 34, 34, 34, 34, 10, 10, 10, 10, 10);%csprintf(f_name, %c%cs%cs%cd%cs%cd%cs%cd%c, %cgcc -Wall -Wextra -Werror -o%c, %c Sully_%c, i - 1,%c Sully_%c, i - 1, %c.c && ./Sully_%c, i - 1);%cfclose(f);%csystem(f_name);%c}%c}%c";
if (i - 1 >= 0) {
char f_name[100];
sprintf(f_name, "%s%d%s", "Sully_", i - 1, ".c");
FILE* f = fopen(f_name, "w");
fprintf(f, str, 10, 10, 10, 10, i - 1, 10, 34, 34, 10, 10, 34, str, 34, 10, 10, 10, 34, 37, 37, 37, 34, 34, 34, 34, 34, 10, 34, 34, 10, 10, 34, 37, 37, 37, 37, 37, 37, 37, 34, 34, 34, 34, 34, 34, 34, 34, 34, 10, 10, 10, 10, 10);
sprintf(f_name, "%s%s%d%s%d%s%d", "gcc -Wall -Wextra -Werror -o", " Sully_", i - 1," Sully_", i - 1, ".c && ./Sully_", i - 1);
fclose(f);
system(f_name);
}
}
