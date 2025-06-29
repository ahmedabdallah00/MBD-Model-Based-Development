modelName = 'CounterResetLab';
new_system(modelName);
open_system(modelName);

% Step 2: Add Blocks to Top-Level
add_block('simulink/Sources/Step', [modelName '/CountButton'], 'Position', [30, 100, 60, 130]);
add_block('simulink/Sources/Step', [modelName '/ResetButton'], 'Position', [30, 180, 60, 210]);
add_block('built-in/Subsystem', [modelName '/CounterSubsystem'], 'Position', [120, 100, 220, 200]);
add_block('simulink/Sinks/Scope', [modelName '/Scope'], 'Position', [280, 120, 310, 150]);

% Connect Buttons to Subsystem
add_line(modelName, 'CountButton/1', 'CounterSubsystem/1');
add_line(modelName, 'ResetButton/1', 'CounterSubsystem/2');
add_line(modelName, 'CounterSubsystem/1', 'Scope/1');

% Step 3: Build CounterSubsystem Internals
open_system([modelName '/CounterSubsystem']);

add_block('simulink/Ports & Subsystems/In1', [modelName '/CounterSubsystem/In1'], 'Position', [20, 50, 40, 70]);
add_block('simulink/Ports & Subsystems/In1', [modelName '/CounterSubsystem/In2'], 'Position', [20, 100, 40, 120]);
add_block('simulink/Discrete/Unit Delay', [modelName '/CounterSubsystem/UnitDelay'], 'Position', [100, 50, 130, 80]);
add_block('simulink/Logic and Bit Operations/Detect Rise Positive', [modelName '/CounterSubsystem/RiseDetect'], 'Position', [60, 50, 90, 80]);
add_block('simulink/Logic and Bit Operations/Compare To Constant', [modelName '/CounterSubsystem/ResetDetect'], 'Position', [60, 100, 120, 130], 'const', '1');
add_block('simulink/Logic and Bit Operations/Logical Operator', [modelName '/CounterSubsystem/ResetLogic'], 'Position', [160, 100, 200, 130], 'Operator', 'OR');
add_block('simulink/Math Operations/Add', [modelName '/CounterSubsystem/Add'], 'Position', [160, 50, 200, 80]);
add_block('simulink/Ports & Subsystems/Out1', [modelName '/CounterSubsystem/Out1'], 'Position', [250, 60, 270, 80]);

% Lines in subsystem
add_line([modelName '/CounterSubsystem'], 'In1/1', 'RiseDetect/1');
add_line([modelName '/CounterSubsystem'], 'RiseDetect/1', 'Add/1');
add_line([modelName '/CounterSubsystem'], 'UnitDelay/1', 'Add/2');
add_line([modelName '/CounterSubsystem'], 'Add/1', 'ResetLogic/1');
add_line([modelName '/CounterSubsystem'], 'In2/1', 'ResetDetect/1');
add_line([modelName '/CounterSubsystem'], 'ResetDetect/1', 'ResetLogic/2');
add_line([modelName '/CounterSubsystem'], 'ResetLogic/1', 'UnitDelay/1');
add_line([modelName '/CounterSubsystem'], 'ResetLogic/1', 'Out1/1');

% Set model parameters
set_param(modelName, 'StopTime', '20');