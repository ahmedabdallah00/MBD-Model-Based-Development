names = {'Ahmed','Ezz','Mohammed'};
surnames = {'Yossef','Abdo','Hamda'};
titles = {'Ms.','Mr.','Eng.'};
FullNamesWithTitlies = cell(size(names));
for i = 1:length(surnames)
    FullNamesWithTitlies{i} = [titles{i} ' ' names{i} ' ' surnames{i}];
end

disp(FullNamesWithTitlies);