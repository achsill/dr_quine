# com2
import os
i=5;
if (i - 1 >= 0):
 if (__file__ == "Sully.py"):
  i = i + 1
 n='\n';
 b='\\';
 g='"';
 p='%';
 s="# com2%simport os%si=%s%sif (i - 1 >= 0):%s if (__file__ == %sSully.py%s):%s  i = i + 1%s n='%sn';%s b='%s%s';%s g='%s';%s p='%s';%s s=%s%s%s;%s file = open(%sSully_%s + str(i - 1) + %s.py%s,%sw%s);%s file.write(s%s(n, n, i - 1, n, n, g, g, n, n, b, n, b, b, n,g, n, p, n, g, s, g, n, g, g, g, g, g, g, n, p, n, n, g, g, g, g, n))%s file.close()%s os.system(%spython Sully_%s + str(i - 1) + %s.py%s)%s";
 file = open("Sully_" + str(i - 1) + ".py","w");
 file.write(s%(n, n, i - 1, n, n, g, g, n, n, b, n, b, b, n,g, n, p, n, g, s, g, n, g, g, g, g, g, g, n, p, n, n, g, g, g, g, n))
 file.close()
 os.system("python Sully_" + str(i - 1) + ".py")
