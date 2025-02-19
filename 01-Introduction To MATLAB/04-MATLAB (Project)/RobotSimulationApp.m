start_link1=0;
end_link1=10;
start_link2=end_link1;
end_link2=20;
theta1=linspace(0,180,1000);
theta2=linspace(0,90,1000);
Link1=10;
Link2=8;
Link1_x=Link1 *cosd(theta1); 
Link1_y=Link1 *sind(theta1);
Link2_x=Link1_x+ Link2 *cosd(theta1+theta2); 
Link2_y=Link1_y+ Link2 *sind(theta1+theta2);
p1=plot([0,Link1_x(1)],[0,Link1_y(1)] ,'r', 'LineWidth', 2);
p2=plot([Link1_x(1),Link2_x(1)],[Link1_y(1),Link2_y(1)],'b' , 'LineWidth', 2);
p3=plot(Link2_x(1), Link2_y(1), 'ro', 'MarkerSize', 8, 'MarkerFaceColor', 'g');

hold on
xlim([-Link1*2,Link1*2]);
ylim([-Link1*2,Link1*2]);
plot(Link2_x,Link2_y,'k');
plot(Link1_x,Link1_y,'k');
for i= 1:10:length(theta1)
    delete(p1); delete(p2); delete(p3); 
    p1= plot([0,Link1_x(i)],[0,Link1_y(i)],'r', 'LineWidth', 2);
    p2= plot([Link1_x(i),Link2_x(i)],[Link1_y(i),Link2_y(i)],'b' , 'LineWidth', 2);
    p3=plot(Link2_x(i), Link2_y(i), 'ro', 'MarkerSize', 8, 'MarkerFaceColor', 'g');
    drawnow
    pause(0.1);
end