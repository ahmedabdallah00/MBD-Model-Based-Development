b=10;
x0=1;
k=400;
m=3;
massValues = 1:2:11;
mdl=gcs;
for i= 1:numel(massValues)
    m = massValues(i);
    res = sim(mdl);
    plot(res.logsout.get("X").Values);
    hold on
end