%%%%1
intVar = int32([5 2 1;3 4 7;6 8 9]);
doubleVar = [1.2 50.2 30.3; 2.01 5.3 30.4;2.01 5.3 30.4];
disp(intVar);
disp(doubleVar);

%%%%2
evenNumbers =(2:2:10);
primeNumbers = primes(11);
disp(evenNumbers);
disp(primeNumbers);

%%%%%3
identityMatrix = eye(3,'single');
magicSquare =zeros(2,2);
disp(identityMatrix);
disp(magicSquare);
%%%%%4
combinedVector =horzcat(evenNumbers ,primeNumbers);
[m, n] = size(primeNumbers); 
identityMatrix = eye(m, n);
combinedMatrix =horzcat(identityMatrix,primeNumbers);
disp(combinedVector);
disp(combinedMatrix);