% Function definition
function [Mean,Standard_Deviation]=computestatistics(data)
         % Calculate mean using built-in function
         Mean = mean(data);
         % Calculate standard deviation using N-1 normalization (sample SD)
         Standard_Deviation=std(data);
end

% Sample data and function call
data=[1,2,3,4,5,6];
[mean,standard]=computestatistics(data);
fprintf('For the dataset: [%s]\n', num2str(data));
fprintf('Mean: %.2f\nStandard Deviation: %.2f\n', mean, standard);
