Modelname='CounterModel';

load_system(Modelname);
add_block('simulink/Sources/Constant',[Modelname '/Cnst']);
add_block('simulink/Sinks/Scope',[Modelname '/Scope']);

sim(Modelname);
open_system([Modelname '/Scope'])