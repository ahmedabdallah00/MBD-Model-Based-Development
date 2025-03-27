A=[1,2,3;4,5,6;7,8,9];
B=A(2:3,1:2)';
disp(B);
a=5;
b=3;
c=a+b;
disp(num2str(c));
k=0;
for i=2:6
   if i ==4
      continue;
   end
   k=k+i;
end
disp(k);
x=1:5;
y=x.^2;
disp(y);