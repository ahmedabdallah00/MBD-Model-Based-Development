t= linspace(-1,1,1000);
u=heaviside(t);

plot(t,u);
unitstep = zeros(size(t));
unitstep(t >= 0) =1;
plot(t,unitstep,'LineWidth',5);
title("Unit Step Function");
xlabel("time (t)");
ylabel("Amplitude");
grid on;
