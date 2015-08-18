%Script: CaosAlOrden.m
n = 4;
x = 10*randn(n,1);
y = 10*randn(n,1);
subplot(2,1,1);
plot(x,y,'ob',[x;x(1)],[y;y(1)],'k');
xnew = zeros(n,1)
ynew = zeros(n,1)
for k=1:n-1
    xnew(k) = ( x(k) + x(k+1))/2;
    ynew(k) = ( y(k) + y(k+1))/2;
end
xnew(n) = ( x(n) + x(1))/2;
ynew(n) = (y(n) + y(1))/2;
subplot(2,1,2);
plot(xnew,ynew,'og',[xnew;xnew(1)],[ynew;ynew(1)],'r');
    
