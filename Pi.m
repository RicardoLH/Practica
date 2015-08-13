
format long;
n = 1000000;
cont = 0;
for i=1:n
    cont = cont + floor(sqrt(n*n-i*i));
end
pi1 = 4*cont / (n*n);
cont = 0;
for i=0:n-1
    cont = cont + (n- ceil(sqrt(n*n-i*i)) );
end
pi2 = 4*(n*n-cont)/(n*n);
pi = (pi1 + pi2)/2
