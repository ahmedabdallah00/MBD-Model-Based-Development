disp('choose the type of simulink system to create');
disp("1. Simulink Model");
disp("2. Simulink Library");
choise = input("Enter your choise (1-2): ");
name = input("Entre the name of your system: ",'s');
switch choise
    case 1
        model = new_system(name,'Model');
        open_system(model);
        disp("Smulink system model is created")
    case 2
        library = new_system(name,'Library');
        open_system(library);
        disp("Smulink system library is created")
end