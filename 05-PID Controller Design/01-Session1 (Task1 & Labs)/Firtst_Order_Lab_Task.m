K=1;
R=10e3;
C=1e-7;

T= R * C;
num = [0 K];
den = [T 1];

G = tf(num,den);
t=0:0.1:10;
u_parabolic = 0.5* t.^2;
[y_parabolic,t_parabolic]= lsim(G,u_parabolic,t);
hold on
plot(t_parabolic,y_parabolic);
ss_error_parabolic = u_parabolic(end) - y_parabolic(end);
fprintf('Steady-state error for parabolic input: %.4f\n', ss_error_parabolic);
figure('Name', 'Parabolic Input Response');
plot(t_parabolic, u_parabolic, '--k', t_parabolic, u_parabolic, 'r', 'LineWidth', 1.5);
title('System Response to Parabolic Input');
xlabel('Time (s)');
ylabel('Response');
legend('Parabolic Input', 'System Output');
grid on;