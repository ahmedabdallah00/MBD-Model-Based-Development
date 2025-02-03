run("lab1.m")
identityMatrix = eye(3);
[m, n] = size(matrixA); 
identityMatrix = eye(m, n);
matrixProduct= identityMatrix .* matrixA;
disp(matrixProduct);