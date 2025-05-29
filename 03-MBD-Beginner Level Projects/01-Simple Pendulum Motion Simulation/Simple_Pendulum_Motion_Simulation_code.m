
g=9.81;
model=gcs;

for i=1:5 
    L=i;
    result = sim(model);
    plot(result.logsout.get("Ceta").Values);
    hold on;

end