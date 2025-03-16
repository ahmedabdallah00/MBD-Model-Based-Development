% Create array of character
Name="Ahmed Abdallah";

% Create another character array to concatenate
Name2 = " Algharib";
% Concatenate the two character arrays
combined_vector1 =[Name Name2];
combined_vector2 =strcat(Name,Name2);
% Display
fprintf("original name1: %s \n",Name);
fprintf("original name2: %s \n",Name2);
fprintf("combined_vector1 name: %s \n",combined_vector1);
fprintf("combined_vector1 name: %s \n",combined_vector2);
