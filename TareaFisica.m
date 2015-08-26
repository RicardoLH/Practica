lim = 10;
t = zeros(lim,1);
x = zeros(lim,1);
v = zeros(lim,1);
x0 = 10;
v0 = 50;
j = 1;
for i = 0:.1:lim;
    t(j) = i;
    x(j) = x0 +  v0*t(j) - (9.81)*t(j)^2/2;
    v(j) = v0 - (9.81)*t(j);
    j = j+1;
end
subplot(2,1,1);
plot(t,x,t, 0*v,'--k');
title('Posicion Vs Tiempo');
subplot(2,1,2);
plot(t,v,t, 0*v,'--k');
title('Velocidad Vs Tiempo');


