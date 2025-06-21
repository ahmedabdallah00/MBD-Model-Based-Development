k=2;

num = [6];
den = [1 6 11 6];

G_op = tf(num,den);
P_op = pole(G_op);

CL = feedback(G_op * k,1);
PCL = pole(CL);
rlocus(G_op);