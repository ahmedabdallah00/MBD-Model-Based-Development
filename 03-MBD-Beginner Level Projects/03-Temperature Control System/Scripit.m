Ku=1;
Taw=1;
model=gcs;

for i=1:5 
    Ku=i*Ku;
    Taw=Taw*i*2;
    result = sim(model);
    plot(result.logsout.get("T(t)").Values);
    hold on;
    grid on;
    legendLabels_Taw{i}="Taw = "+num2str(Taw);
    legendLabels_Ku{i}="Taw = "+num2str(Ku);
end
legend(legendLabels_Ku);
legend(legendLabels_Taw);