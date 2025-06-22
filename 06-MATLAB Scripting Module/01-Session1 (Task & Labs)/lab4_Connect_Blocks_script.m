modelname = 'SimulinkModel';
new_system(modelname);

add_block('simulink/Sources/Step',[modelname '/StepInput']);
add_block('simulink/Commonly Used Blocks/Scope',[modelname '/Scope']);

add_line(modelname,'StepInput/1','Scope/1');

open_system(modelname);
sim(modelname);