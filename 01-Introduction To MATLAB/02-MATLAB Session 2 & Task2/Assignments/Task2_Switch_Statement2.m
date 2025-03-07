Color_code = input('Entre your Color Code[R,G,B]: ','s');

switch Color_code
        case '[0,255,0]'
            disp('Color: Green');
        case '[255,0,0]'
            disp('Color: Red');
        case '[0,0,255]'
            disp('Color: Blue');
        case '[255,255,0]'
            disp('Color: Yellow');
        case '[128,0,128]'
            disp('Color: Purple');
        otherwise
            disp('Error: Unrecognized color code.');
end