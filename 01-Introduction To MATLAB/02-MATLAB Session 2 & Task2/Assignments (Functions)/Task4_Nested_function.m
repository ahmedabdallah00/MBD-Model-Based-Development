function outerFunction
     % Define the nested inner function
    function sum=innerFunction(num1,num2)
             sum=num1+num2;
    end
     % Call innerFunction with example values
    result = innerFunction(15, 25);
    
    % Display the result
    fprintf('Result: %d\n', result);
end