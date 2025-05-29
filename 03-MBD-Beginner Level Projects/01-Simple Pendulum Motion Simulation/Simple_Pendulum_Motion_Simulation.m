L=1;
g=9.81;
model=gcs;
result=sim(model);
plot(result.logsout.get("ceta dot").Values);