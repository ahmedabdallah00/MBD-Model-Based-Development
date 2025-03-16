% MATLAB Script to Demonstrate Built-in Functions: max, min, and sum
% This script creates a vector of numbers and calculates its maximum value,
% minimum value, and sum using MATLAB's built-in functions.

% Create a sample vector of numbers
data = [4, 1, 7, 10, 12, 3];

% Calculate the maximum value in the vector
max_value = max(data);

% Calculate the minimum value in the vector
min_value = min(data);

% Calculate the sum of all elements in the vector
sum_value = sum(data);

% Display the results with formatted output
fprintf('Maximum value: %.2f\n', max_value);
fprintf('Minimum value: %.2f\n', min_value);
fprintf('Sum of values: %.2f\n', sum_value);