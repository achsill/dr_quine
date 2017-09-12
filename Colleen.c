#include <stdio.h>
int f() {
 return 1;
}
/*
 Tres bien et toi
*/
int main(){
 f();
/*
 Salut ca va
*/
char*s="#include <stdio.h>%cint f() %c%c return 1;%c%c%c%c%c%c Tres bien et toi%c%c%c%cint main(){%c f();%c%c%c%c Salut ca va%c%c%c%cchar*s=%c%s%c;%cprintf(s,10,123, 10, 10, 125, 10, 47,42,10,10,42, 47,10,10,10,47,42,10,10,42,47,10,34,s,34,10,10);return 0;}%c";
printf(s,10,123, 10, 10, 125, 10, 47,42,10,10,42, 47,10,10,10,47,42,10,10,42,47,10,34,s,34,10,10);return 0;}
