new_system('ControlSystemProject');
open_system('ControlSystemProject');

add_block('simulink/Sources/Step', 'ControlSystemProject/Step', 'Position', [30, 100, 60, 130]);
add_block('simulink/Math Operations/Sum', 'ControlSystemProject/Sum', 'Position', [90, 100, 110, 120], 'Inputs', '+-');
add_block('simulink/Continuous/Transfer Fcn', 'ControlSystemProject/Plant', 'Position', [140, 95, 220, 135]);
add_block('simulink/Continuous/PID Controller', 'ControlSystemProject/PID', 'Position', [270, 95, 350, 135]);
add_block('simulink/Sinks/Scope', 'ControlSystemProject/Scope', 'Position', [430, 80, 460, 150]);
add_block('simulink/Signal Routing/Mux', 'ControlSystemProject/Mux', 'Position', [390, 100, 410, 150]);

add_line('ControlSystemProject', 'Step/1', 'Sum/1');
add_line('ControlSystemProject', 'Sum/1', 'Plant/1');
add_line('ControlSystemProject', 'Plant/1', 'PID/1');
add_line('ControlSystemProject', 'PID/1', 'Sum/2');
add_line('ControlSystemProject', 'PID/1', 'Mux/1');
add_line('ControlSystemProject', 'Step/1', 'Mux/2');
add_line('ControlSystemProject', 'Mux/1', 'Scope/1');

set_param('ControlSystemProject/Plant', 'Numerator', '[1]', 'Denominator', '[1 10 20]');
set_param('ControlSystemProject/PID', 'P', '250', 'I', '6', 'D', '5');

set_param('ControlSystemProject', 'StopTime', '10');
simOut = sim('ControlSystemProject');

open_system('ControlSystemProject');

save_system('ControlSystemProject');
