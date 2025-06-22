disp('choose What you want to open');
disp("1. Simulink Model");
disp("2. Simulink Specific block");
choise = input("Enter your choise (1-2): ");

switch choise
    case 1
        model = input("Entre the name of your system: ");
        open_system(model);
        
    case 2
        model = input("Entre the name of your system: ");
        block = input("Entre the name of your block: ");
        open_system(model);
        open_system([model '/' block]);
    otherwise
        disp("Invalid Input");
end