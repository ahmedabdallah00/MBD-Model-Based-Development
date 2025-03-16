% Create a structure for a person
person = struct('Name', "Ahmed Abdallah",'age',12,'city',"Mansoura");
% Access and display individual fields
disp(['Name: ', person.Name]);
disp(['Age:  ', num2str(person.age)]); % Convert number to string for display
disp(['City: ', person.city]);
% Display the entire structure
disp('--- Entire Structure ---');
disp(person);
