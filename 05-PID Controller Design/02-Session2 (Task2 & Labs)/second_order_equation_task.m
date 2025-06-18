wn=1;
Zeta =[1,0.9,0.8,0.7,0.6,0.5,0.4,0.2,0.1];
time_sim=0:0.1:20;
step_in= ones(size(time_sim));

figure

for i= 1 : length(Zeta)
    num=[0 wn^2];
    den=[1, 2 * Zeta(i) * wn, wn^2];
    sys= tf(num,den);
    [y,t] = step(sys,time_sim);
    subplot(3, 3, i);                        
    plot(t, y, 'r', 'LineWidth', 1.5);
    title(['\zeta = ', num2str(Zeta(i))]);
    xlabel('Time (s)');
    ylabel('Response');
    grid on
end