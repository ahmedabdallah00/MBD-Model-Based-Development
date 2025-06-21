num=1;
den=[1 1];

sys = tf(num,den);
Kp_Values=[0.001,0.01,0.1,1,10,50,100];
t=0:0.01:10;
figure;

OpenLoopRes = step(sys,t);
plot(t,OpenLoopRes,'k--','LineWidth',1.5);
hold on
ClosedLoopResWithoutController=step(sys/(1+sys),t);
plot(t,ClosedLoopResWithoutController,'b:','LineWidth',1.5');
hold on

for i = 1: length(Kp_Values)
     kp=Kp_Values(i);
     SystemWithController = feedback(kp*sys,1);
     [SystemWithController,~] = step(SystemWithController,t);
     plot(t,SystemWithController,'LineWidth',1.5);
     hold on
end
xlim([0 10]);
ylim([0,1.2]);
title("Effect of Kp on system response (1st order system)");
xlabel("Time");
ylabel("SystemRes");
legend(['Open Loop';'Closed Loop Without Controller';cellstr(num2str(Kp_Values'))]);