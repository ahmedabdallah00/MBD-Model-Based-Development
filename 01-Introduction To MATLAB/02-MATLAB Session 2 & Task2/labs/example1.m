color = 'yellow';
switch color
    case {'green','red'}
        disp('One');
    case {'yellow','out'}
        disp('2');
    otherwise
        disp("Void");
end        
for i = 1:5
    disp(i);
end  
myarray = [10,20,30,40,50];
for index = myarray
    disp(index);
end 
for i = 1:5
   for j = 1:5
      fprintf("%d * %d= %d\n",i,j,i*j);
   end
end
count =1;
while count <5
    disp(count);
    count = count +1;
end    
count =0;
N=10;
sum=0;
while count <=N
    sum=count+sum;
    count = count +1;
end 
disp(sum)
