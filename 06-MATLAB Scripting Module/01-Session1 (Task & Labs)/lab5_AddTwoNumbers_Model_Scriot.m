new_system("AddTwoNumbers_Model","Model");
open_system("AddTwoNumbers_Model");

add_block('built-in/Subsystem','AddTwoNumbers_Model/subsystem');
add_block('simulink/Sources/In1','AddTwoNumbers_Model/subsystem/NumberOne');
add_block('simulink/Sources/In1','AddTwoNumbers_Model/subsystem/NumberTwo');
add_block('simulink/Math Operations/Add','AddTwoNumbers_Model/subsystem/Add');
add_block('simulink/Sinks/Out1','AddTwoNumbers_Model/subsystem/Summation');
add_line('AddTwoNumbers_Model/subsystem','NumberOne/1','Add/1');
add_line('AddTwoNumbers_Model/subsystem','NumberTwo/1','Add/2');
add_line('AddTwoNumbers_Model/subsystem','Add/1','Summation/1');

set_param('AddTwoNumbers_Model/subsystem','Name','AddTwoNumbers');
set_param('AddTwoNumbers_Model/AddTwoNumbers','Mask','on');
set_param('AddTwoNumbers_Model/AddTwoNumbers','MaskDescription','SubSystem Add two Numbers ');
set_param('AddTwoNumbers_Model/AddTwoNumbers','MaskType','AddTwoNumbersSubSystemBlock');
set_param('AddTwoNumbers_Model/AddTwoNumbers','MaskDisplay','disp("AddTwoNumbers")');

add_block('simulink/Commonly Used Blocks/Constant','AddTwoNumbers_Model/number1');
add_block('simulink/Commonly Used Blocks/Constant','AddTwoNumbers_Model/number2');
add_line('AddTwoNumbers_Model','number1/1','AddTwoNumbers/1');
add_line('AddTwoNumbers_Model','number2/1','AddTwoNumbers/2');
add_block('simulink/Commonly Used Blocks/Scope','AddTwoNumbers_Model/scope1');
add_line('AddTwoNumbers_Model','AddTwoNumbers/1','scope1/1');
add_block('simulink/Sinks/Display','AddTwoNumbers_Model/display');
add_line('AddTwoNumbers_Model','AddTwoNumbers/1','display/1');