
C=1e-6;
model=gcs;

for i=1:5 
    R=i;
    result = sim(model);
    plot(result.logsout.get("Vc").Values);
    hold on;

end

