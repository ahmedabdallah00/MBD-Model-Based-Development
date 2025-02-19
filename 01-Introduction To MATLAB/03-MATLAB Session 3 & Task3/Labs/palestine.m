greencolor =[0,0.51,0.25];
whitecolor = [1,1,1];
redcolor = [0.698,0.132 , 0.232];
blackcolor = [0,0,0];
flagW=600;
flagH=400;
figure("Position",[200,200,flagW,flagH]);
rectangle("Position",[0,0,flagW,flagH],'FaceColor',greencolor);
hold on 
rectangle("Position",[0,flagH/3,flagW,flagH/3],'FaceColor',whitecolor);
rectangle("Position",[0,2*flagH/3,flagW,flagH/3],'FaceColor',blackcolor);
trinaglex = [0,flagW/2,0];
trinagley = [0,flagH/2,flagH];
fill(trinaglex,trinagley,redcolor);
