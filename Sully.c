#include <stdio.h>
int main(){
int i = 5;
char *str = "#include <stdio.h>%cint main(){%cint i = %d;%cchar *str = %c%s%c;%cif (i - 1 > 0) {%cchar f_name[10];%csprintf(f_name, %c%cs%cd%cs%c, %cSully_%c, i - 1, %c.c%c);%cfprintf(fopen(f_name, %cw%c), str, 10, 10, i - 1, 10, 34, str, 34, 10, 10, 10, 34, 37, 37, 37, 34, 34, 34, 34, 34, 10, 34, 34, 10, 10 ,10);%c}%c}%c";
if (i - 1 > 0) {
char f_name[10];
sprintf(f_name, "%s%d%s", "Sully_", i - 1, ".c");
fprintf(fopen(f_name, "w"), str, 10, 10, i - 1, 10, 34, str, 34, 10, 10, 10, 34, 37, 37, 37, 34, 34, 34, 34, 34, 10, 34, 34, 10, 10 ,10);
}
}
