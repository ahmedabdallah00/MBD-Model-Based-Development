try 
    fileID=fopen("nontext.txt","r");
    fclose(fileID);
    disp("No error ocuured");
catch
    disp("Error ocuured");
end