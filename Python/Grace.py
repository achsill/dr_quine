# com2
n='\n';
b='\\';
g='"';
p='%';
s="# com2%sn='%sn';%sb='%s%s';%sg='%s';%sp='%s';%ss=%s%s%s;%sfile = open(%sGrace_kid.py%s,%sw%s);%sfile.write(s%s(n, b, n, b, b, n,g, n, p, n, g, s, g, n, g, g, g, g, n, p, n))%s";
file = open("Grace_kid.py","w");
file.write(s%(n, b, n, b, b, n,g, n, p, n, g, s, g, n, g, g, g, g, n, p, n))
