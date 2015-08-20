
correcto = false;
x = 10*randn(n,1);
y = 10*randn(n,1);
subplot(2,1,1);
plot(x,y,'ob',[x;x(1)],[y;y(1)],'k');
while ~correcto
    [xnew, ynew] = PuntosMedios(x,y);
    subplot(2,1,2);
    plot(xnew,ynew,'og',[xnew;xnew(1)],[ynew;ynew(1)],'r');
    pause;
    x = xnew;
    y = ynew;
    subplot(2,1,1);
    plot(x,y,'ob',[x;x(1)],[y;y(1)],'k');
    prompt = '¡True or false?';
    correcto = input(prompt);
end
