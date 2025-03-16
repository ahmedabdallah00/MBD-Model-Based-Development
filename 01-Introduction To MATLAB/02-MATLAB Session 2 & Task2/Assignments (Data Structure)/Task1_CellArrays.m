% Create a cell array containing different data types
myCellArray = {42, 'Hello World', [1 2 3], 'MATLAB', [5 6; 7 8], true};

% 1. Access the first element (number)
disp('1. Numeric element:');
disp(myCellArray{1});

% 2. Access the second element (text)
disp('2. Text element:');
disp(myCellArray{2});

% 3. Access the third element (vector)
disp('3. Vector element:');
disp(myCellArray{3});

% 4. Access the fourth element (text)
disp('4. Another text element:');
disp(myCellArray{4});

% 5. Access the fifth element (matrix)
disp('5. Matrix elements:');
disp(myCellArray{5});

% 6. Access the sixth element (logical value)
disp('6. Logical value:');
disp(myCellArray{6});
