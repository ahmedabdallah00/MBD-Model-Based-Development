% Prompt user for the transportation method
% Prompt user for the number of miles
transportation = input('select your transportation: ', 's'); 
Distance_Mile = input('entre your distance length: ');

switch transportation
    case "car"
        Cost =Distance_Mile*20;
        fprintf("The Total Cost For This Distance(%d mile) By Car is: %d",Distance_Mile,Cost);
    case "bus"
        Cost =Distance_Mile*3.5;
        fprintf("The Total Cost For This Distance(%d mile) By bus is: %d",Distance_Mile,Cost);
    case "train"
        Cost =Distance_Mile*8;
        fprintf("The Total Cost For This Distance(%d mile) By train is: %d",Distance_Mile,Cost);
    case "airplane"
        Cost =Distance_Mile*100;
        fprintf("The Total Cost For This Distance(%d mile) By bus is: %d",Distance_Mile,Cost);
    otherwise
        disp("ERROR! ")
end