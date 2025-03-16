% Define the main function
function result = applyFunction(funcHandle, vector)
    % Apply the function handle to each element of the vector
    result = arrayfun(funcHandle, vector);
end

% Test 1: Square each element
squareHandle = @(x) x.^2;
inputVector1 = [1, 2, 3, 4];
output1 = applyFunction(squareHandle, inputVector1);
fprintf('Squares: [%s]\n', num2str(output1));

% Test 2: Cube each element
cubeHandle = @(x) x.^3;
inputVector2 = 2:5;
output2 = applyFunction(cubeHandle, inputVector2);
fprintf('Cubes:   [%s]\n', num2str(output2));

% Test 3: Custom operation (x^2 + 2x)
customHandle = @(x) x.^2 + 2*x;
inputVector3 = [0, 1, -1];
output3 = applyFunction(customHandle, inputVector3);
fprintf('Custom:  [%s]\n', num2str(output3));