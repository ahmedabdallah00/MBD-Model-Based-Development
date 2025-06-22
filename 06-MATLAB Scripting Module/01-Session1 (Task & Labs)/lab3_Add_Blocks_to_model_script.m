modelname = input('Entre tje name of existing Simulink model: ','s');
disp("Specify the blocks to add to the simulink model: ");
numBlocks = input("Entre the number of blocks to add: ");

blockTypes = cell(numBlocks,1);
blockNames = cell(numBlocks,1);

for i = 1:numBlocks
    disp(['Block ' num2str(i) ':']);
    blockTypes{i} = input('Entre the type of block: ','s');
    blockNames{i} = input('Entre the name of block: ','s');
end

for i = 1:numBlocks
    add_block(['simulink/' blockTypes{i}],[modelname '/' blockNames{i}]);
end

open_system(modelname);