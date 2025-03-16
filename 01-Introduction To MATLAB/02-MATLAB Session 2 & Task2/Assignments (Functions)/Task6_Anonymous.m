%*function*%
Area = @(base,height) (base .* height) ./ 2;

% Test 1: Basic scalar inputs
base1 = 5;
height1 = 10;
area1 = Area(base1, height1);
fprintf('Base = %.1f, Height = %.1f → Area = %.1f\n', base1, height1, area1);

% Test 2: Decimal values
base2 = 7.5;
height2 = 3;
area2 = Area(base2, height2);
fprintf('Base = %.1f, Height = %.1f → Area = %.2f\n', base2, height2, area2);

% Test 3: Vector inputs (multiple triangles at once)
bases = [3, 4, 5];
heights = [4, 5, 6];
areas = Area(bases, heights);
fprintf('Bases:   [%s]\nHeights: [%s]\nAreas:   [%s]\n',...
        num2str(bases), num2str(heights), num2str(areas));