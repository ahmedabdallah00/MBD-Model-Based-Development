Angle=linspace(0,2*pi,1000);
result_sine=sin(Angle);
plot(Angle,result_sine,'b-', 'LineWidth', 1.5);
hold on;
% Add labels and title
xlabel('Time (radians)');
ylabel('Amplitude');
title('Sine Wave: y = sin(t)');
legend('y = sin(t)', 'Location', 'northeast');
grid on;
hold off;