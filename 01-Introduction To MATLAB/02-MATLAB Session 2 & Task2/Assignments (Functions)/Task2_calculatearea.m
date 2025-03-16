%function to calculate area of circle take radius as input and return area.
function Area=calculateCircleArea(radius)
         % Directly use 'pi' in calculations
         Area=pi* radius^2;    
end

%Display results of 4 input
area1=calculateCircleArea(9);
disp(area1);
area2=calculateCircleArea(10);
disp(area2);
area3=calculateCircleArea(11);
disp(area3);
area4=calculateCircleArea(12);
disp(area4);