# com1
def titi():
 return ;
def main():
 # com2
 titi();
 n='\n';
 b='\\';
 g='"';
 p='%';
 s="# com1%sdef titi():%s return ;%sdef main():%s # com2%s titi();%s n='%sn';%s b='%s%s';%s g='%s';%s p='%s';%s s=%s%s%s;%s print s%s(n, n, n, n, n, n, b, n, b, b, n,g, n, p, n, g, s, g, n, p, n, n);%s%smain()";
 print s%(n, n, n, n, n, n, b, n, b, b, n,g, n, p, n, g, s, g, n, p, n, n);

main()
