% Print even numbers from 2 to 20 using a while loop
num =input('Enter a even integer: ');

while num ~= 0
    if mod(num,2) ==0
        disp(num);
    end
    num =num-1;
end
% Calculate factorial of a user-input number using a while loop
n = input('Enter a postive integer: ');
if n<0
    disp('Error ');
else
    factoria_result=1;
    value=n;
    while n>1
        factoria_result=factoria_result*n;
        n=n-1;
    end
    fprintf('Factorial of %d is %d\n', value, factoria_result);
end


