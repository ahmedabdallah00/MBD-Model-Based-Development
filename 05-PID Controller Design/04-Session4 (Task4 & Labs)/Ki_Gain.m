num=1;
den=[1 1];

sys = tf(num,den);
Ki_Values=[0.001,0.01,0.1,1,10,50,100];
t=0:0.01:10;
figure;

OpenLoopRes = step(sys,t);
plot(t,OpenLoopRes,'k--','LineWidth',1.5);
hold on
ClosedLoopResWithoutController=step(sys/(1+sys),t);
plot(t,ClosedLoopResWithoutController,'b:','LineWidth',1.5');
hold on

for i = 1: length(Kp_Values)
     ki=Ki_Values(i);
     I_controller= tf([ki],[1 0]);
     SystemWithController = series(I_controller,sys);
     ClosedLoopResWithController = feedback(SystemWithController,1);
     [SystemWithController,~] = step(ClosedLoopResWithController,t);
     plot(t,SystemWithController,'LineWidth',1.5);
     hold on
end

title("Effect of Ki on system response (1st order system)");
xlabel("Time");
ylabel("SystemRes");
legend(['Open Loop';'Closed Loop Without Controller';cellstr(num2str(Kp_Values'))]);